// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NCNOTIFICATIONSUMMARYPLATTERVIEW_H
#define NCNOTIFICATIONSUMMARYPLATTERVIEW_H

@class PLPlatterView, UIView, NSString, NSArray, NSDate;
@protocol NCNotificationSummaryContentDisplaying, NCNotificationListDimmable;


#import "NCNotificationSummaryContentView.h"

@interface NCNotificationSummaryPlatterView : PLPlatterView <NCNotificationSummaryContentDisplaying, NCNotificationListDimmable>

 {
    NCNotificationSummaryContentView *_summaryContentView;
    UIView *_stackDimmingView;
}


@property (nonatomic) BOOL adjustsFontForContentSizeCategory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isIconViewLeading) BOOL iconViewLeading;
@property (copy, nonatomic) NSString *preferredContentSizeCategory;
@property (readonly, copy, nonatomic) NSArray *requiredVisualStyleCategories;
@property (copy, nonatomic) NSString *summary;
@property (copy, nonatomic) NSDate *summaryDate;
@property (copy, nonatomic) NSString *summaryIconSymbolName;
@property (retain, nonatomic) NSArray *summaryIconViews;
@property (copy, nonatomic) NSString *summaryTitle;
@property (copy, nonatomic) NSString *summaryTitleFontName;
@property (readonly) Class superclass;


-(BOOL)adjustForContentSizeCategoryChange;
-(id)initWithRecipe:(NSInteger)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_configureSummaryContentViewIfNecessary;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)_updateStackDimmingVisualStyling;
-(void)configureStackDimmingForTransform:(struct CGAffineTransform )arg0 ;
-(void)didMoveToSuperview;
-(void)layoutSubviews;
-(void)setVisualStylingProvider:(id)arg0 forCategory:(NSInteger)arg1 ;


@end


#endif