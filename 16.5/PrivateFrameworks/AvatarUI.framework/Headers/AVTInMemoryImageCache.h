// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVTINMEMORYIMAGECACHE_H
#define AVTINMEMORYIMAGECACHE_H

@class NSString;
@protocol AVTImageCache;


#import "AVTInMemoryResourceCache.h"

@interface AVTInMemoryImageCache : AVTInMemoryResourceCache <AVTImageCache>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)imageForItem:(id)arg0 scope:(id)arg1 ;
-(id)imageForItem:(id)arg0 scope:(id)arg1 cacheMissHandler:(id)arg2 ;
// -(id)initWithLockProvider:(id)arg0 logger:(unk)arg1  ;


@end


#endif