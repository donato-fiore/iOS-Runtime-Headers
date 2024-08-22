// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PPCONTACTDISKCACHE_H
#define PPCONTACTDISKCACHE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PPContactDiskCache : NSObject {
    NSInteger _lastCreatedAt;
    NSString *_path;
}




-(BOOL)isEmpty;
-(BOOL)iterNameRecordCacheWithError:(*id)arg0 block:(id)arg1 ;
-(id)_cacheObjectFromFilePath:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithPath:(id)arg0 ;
-(id)path;


@end


#endif