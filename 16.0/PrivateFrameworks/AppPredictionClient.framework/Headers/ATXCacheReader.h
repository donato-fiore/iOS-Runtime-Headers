// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXCACHEREADER_H
#define ATXCACHEREADER_H

@class _PASLock, NSString;
@protocol OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface ATXCacheReader : NSObject {
    _PASLock *_lock;
    NSString *_cacheBasePath;
    NSObject<OS_dispatch_source> *_vnodeSource;
}




-(id)init;
-(id)initWithCacheBasePath:(id)arg0 ;
-(id)readCacheFileForCachePath:(id)arg0 ;
-(id)readCacheFileForConsumerSubtype:(unsigned char)arg0 ;
-(void)_handleDirChange;
-(void)dealloc;


@end


#endif