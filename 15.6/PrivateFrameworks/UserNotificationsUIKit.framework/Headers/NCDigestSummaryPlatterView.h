// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NCDIGESTSUMMARYPLATTERVIEW_H
#define NCDIGESTSUMMARYPLATTERVIEW_H

@class PLPlatterView, UIView, NSDate, NSString, NSArray, NSTimeZone;
@protocol NCDigestSummaryDisplaying, PLContentSizeCategoryAdjusting, NCNotificationSummaryContentProviding;


#import "NCDigestSummaryView.h"

@interface NCDigestSummaryPlatterView : PLPlatterView <NCDigestSummaryDisplaying, PLContentSizeCategoryAdjusting>

 {
    NCDigestSummaryView *_summaryView;
}


@property (nonatomic) BOOL adjustsFontForContentSizeCategory;
@property (retain, nonatomic) NSObject<NCNotificationSummaryContentProviding> *appsSummaryContentProvider;
@property (retain, nonatomic) UIView *clearControlView;
@property (retain, nonatomic) NSObject<NCNotificationSummaryContentProviding> *communicationsSummaryContentProvider;
@property (nonatomic) NSUInteger count;
@property (copy, nonatomic) NSDate *date;
@property (nonatomic) NSInteger dateFormatStyle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSArray *featuredNotificationContentProviders;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *heading;
@property (copy, nonatomic) NSString *preferredContentSizeCategory;
@property (nonatomic) BOOL presentFeaturedNotificationsInline;
@property (copy, nonatomic) NSString *subheading;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSTimeZone *timeZone;


-(BOOL)adjustForContentSizeCategoryChange;
-(id)initWithRecipe:(NSInteger)arg0 ;
-(id)requiredVisualStyleCategories;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_configureSummaryViewIfNecessary;
-(void)didMoveToSuperview;
-(void)setMaterialGroupNameBase:(id)arg0 ;
-(void)setVisualStylingProvider:(id)arg0 forCategory:(NSInteger)arg1 ;


@end


#endif