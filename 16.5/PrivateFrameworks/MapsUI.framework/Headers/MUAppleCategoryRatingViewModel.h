// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUAPPLECATEGORYRATINGVIEWMODEL_H
#define MUAPPLECATEGORYRATINGVIEWMODEL_H

@class GEOAppleRating, NSString;
@protocol MURatingPercentageViewModel;

#import <Foundation/Foundation.h>


@interface MUAppleCategoryRatingViewModel : NSObject <MURatingPercentageViewModel>

 {
    GEOAppleRating *_appleRating;
    NSInteger _countAdjustment;
}


@property (readonly, nonatomic) NSString *categoryTitle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger displayPercentage;
@property (readonly, nonatomic) BOOL hasPercentage;
@property (readonly, nonatomic) BOOL hasSubtitle;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat maxScore;
@property (readonly, nonatomic) NSUInteger numberOfRatingsUsedForScore;
@property (readonly, nonatomic) CGFloat score;
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(id)initWithAppleRating:(id)arg0 clientCountAdjustment:(NSInteger)arg1 ;


@end


#endif