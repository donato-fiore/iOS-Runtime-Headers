// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCCACHEPOLICY_H
#define FCCACHEPOLICY_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface FCCachePolicy : NSObject <NSCopying>



@property (nonatomic) NSUInteger cachePolicy; // ivar: _cachePolicy
@property (nonatomic) CGFloat maximumCachedAge; // ivar: _maximumCachedAge


+(id)cachePolicyWithSoftMaxAge:(CGFloat)arg0 ;
+(id)cachedOnlyCachePolicy;
+(id)defaultCachePolicy;
+(id)ignoreCacheCachePolicy;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif