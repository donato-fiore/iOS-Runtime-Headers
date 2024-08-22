// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOAPPLERATING_H
#define GEOAPPLERATING_H

@class NSString;

#import <Foundation/Foundation.h>

#import "GEOPDRating.h"

@interface GEOAppleRating : NSObject {
    GEOPDRating *_pdRating;
}


@property (readonly, nonatomic) BOOL isRecommended;
@property (readonly, copy, nonatomic) NSString *localizedTitle;
@property (readonly, nonatomic) CGFloat maxScore;
@property (readonly, nonatomic) int numberOfRatingsUsedForScore;
@property (readonly, nonatomic) CGFloat percentage;
@property (readonly, nonatomic) NSInteger ratingType;
@property (readonly, nonatomic) CGFloat score;


-(id)initWithRating:(id)arg0 ;


@end


#endif