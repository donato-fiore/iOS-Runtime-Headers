// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIRATINGSTARSCACHE_H
#define SKUIRATINGSTARSCACHE_H

@class NSMutableDictionary, UIImage;

#import <Foundation/Foundation.h>


@interface SKUIRatingStarsCache : NSObject {
    NSMutableDictionary *_cachedImages;
    UIImage *_emptyStarImage;
    UIImage *_filledStarImage;
    UIImage *_halfStarImage;
}




+(id)cacheWithProperties:(NSInteger)arg0 ;
-(id)initWithProperties:(NSInteger)arg0 ;
-(id)ratingStarsImageForRating:(CGFloat)arg0 ;


@end


#endif