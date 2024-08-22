// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVTTWOLEVELSIMAGECACHE_H
#define AVTTWOLEVELSIMAGECACHE_H

@class NSString;
@protocol AVTImageCache;

#import <Foundation/Foundation.h>


@interface AVTTwoLevelsImageCache : NSObject <AVTImageCache>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<AVTImageCache> *firstLevelCache; // ivar: _firstLevelCache
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<AVTImageCache> *secondLevelCache; // ivar: _secondLevelCache
@property (readonly) Class superclass;


-(BOOL)resourceExistsInCacheForItem:(id)arg0 scope:(id)arg1 ;
-(id)imageForItem:(id)arg0 scope:(id)arg1 ;
-(id)imageForItem:(id)arg0 scope:(id)arg1 cacheMissHandler:(id)arg2 ;
-(id)initWithFirstLevelCache:(id)arg0 secondLevelCache:(id)arg1 environment:(id)arg2 ;
-(id)resourceForItem:(id)arg0 scope:(id)arg1 ;
-(id)resourceForItem:(id)arg0 scope:(id)arg1 cacheMissHandler:(id)arg2 ;


@end


#endif