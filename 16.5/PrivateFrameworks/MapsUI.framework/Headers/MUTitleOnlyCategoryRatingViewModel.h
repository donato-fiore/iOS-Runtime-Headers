// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUTITLEONLYCATEGORYRATINGVIEWMODEL_H
#define MUTITLEONLYCATEGORYRATINGVIEWMODEL_H

@class NSString;
@protocol MURatingPercentageViewModel;

#import <Foundation/Foundation.h>


@interface MUTitleOnlyCategoryRatingViewModel : NSObject <MURatingPercentageViewModel>



@property (readonly, nonatomic) NSString *categoryTitle; // ivar: _categoryTitle
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
-(id)initWithCategoryTitle:(id)arg0 ;


@end


#endif