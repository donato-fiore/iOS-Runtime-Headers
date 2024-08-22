// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXCACHEREADERGUARDEDDATA_H
#define ATXCACHEREADERGUARDEDDATA_H

@class NSString;

#import <Foundation/Foundation.h>


@interface ATXCacheReaderGuardedData : NSObject {
    NSString *_cachePath;
    int _cacheFileDescriptor;
}




-(id)init;


@end


#endif