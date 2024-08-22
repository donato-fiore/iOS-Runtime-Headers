// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NCDIGESTSUMMARYVIEW_H
#define NCDIGESTSUMMARYVIEW_H

@class UIView, UILabel<BSUIDateLabel>, UILabel, BSUIFontProvider, MTVisualStylingProvider, UIView<NCDigestFeaturedNotificationsContainerDisplaying>, NSStringDrawingContext, NSDate, NSString, NSArray, NSTimeZone;
@protocol BSUIDateLabelDelegate, NCDigestSummaryDisplaying, MTVisualStylingRequiring, PLContentSizeCategoryAdjusting, MTMaterialGrouping, NCNotificationSummaryContentProviding;


#import "NCNotificationSummaryContentView.h"

@interface NCDigestSummaryView : UIView <BSUIDateLabelDelegate, NCDigestSummaryDisplaying, MTVisualStylingRequiring, PLContentSizeCategoryAdjusting, MTMaterialGrouping>

 {
    UILabel<BSUIDateLabel> *_timeStampLabel;
    UILabel *_headingLabel;
    UILabel *_subheadingLabel;
    UILabel *_countLabel;
    UIView *_countBackgroundView;
    BSUIFontProvider *_fontProvider;
    MTVisualStylingProvider *_strokeVisualStylingProvider;
    UIView<NCDigestFeaturedNotificationsContainerDisplaying> *_featuredNotificationsContainerView;
    NCNotificationSummaryContentView *_communicationsSummaryContentView;
    UIView *_communicationsSummaryDividerView;
    NCNotificationSummaryContentView *_appsSummaryContentView;
    UIView *_appsSummaryDividerView;
    NSStringDrawingContext *_drawingContext;
}


@property (nonatomic) BOOL adjustsFontForContentSizeCategory; // ivar: _adjustsFontForContentSizeCategory
@property (retain, nonatomic) NSObject<NCNotificationSummaryContentProviding> *appsSummaryContentProvider; // ivar: _appsSummaryContentProvider
@property (retain, nonatomic) UIView *clearControlView; // ivar: _clearControlView
@property (retain, nonatomic) NSObject<NCNotificationSummaryContentProviding> *communicationsSummaryContentProvider; // ivar: _communicationsSummaryContentProvider
@property (nonatomic) NSUInteger count; // ivar: _count
@property (copy, nonatomic) NSDate *date; // ivar: _date
@property (nonatomic) NSInteger dateFormatStyle; // ivar: _dateFormatStyle
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSArray *featuredNotificationContentProviders;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *heading;
@property (copy, nonatomic) NSString *materialGroupNameBase; // ivar: _materialGroupNameBase
@property (copy, nonatomic) NSString *preferredContentSizeCategory; // ivar: _preferredContentSizeCategory
@property (nonatomic) BOOL presentFeaturedNotificationsInline; // ivar: _presentFeaturedNotificationsInline
@property (readonly, copy, nonatomic) NSArray *requiredVisualStyleCategories;
@property (copy, nonatomic) NSString *subheading;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSTimeZone *timeZone; // ivar: _timeZone


+(id)_preferredFont:(BOOL)arg0 textStyle:(id)arg1 weight:(CGFloat)arg2 additionalTraits:(unsigned int)arg3 ;
-(BOOL)adjustForContentSizeCategoryChange;
-(NSUInteger)_numberOfLinesForHeadingLabelInRect:(struct CGRect )arg0 ;
-(NSUInteger)_numberOfLinesForSubheadingLabelInRect:(struct CGRect )arg0 ;
-(id)_fontProvider;
-(id)_newDividerView;
-(id)_newSummaryContentViewForSummaryContentProvider:(id)arg0 ;
-(id)_timeStampLabelFont;
-(id)_timeStampLabelPreferredFont;
-(id)visualStylingProviderForCategory:(NSInteger)arg0 ;
-(struct CGRect )_layoutBoundsForTitleLabelInBounds:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_configureSummaryContentView:(id)arg0 withSummaryContentProvider:(id)arg1 ;
-(void)_configureTimeStampLabel;
-(void)_configureTimeStampLabelIfNecessary;
-(void)_recycleTimeStampLabel;
-(void)_setFontProvider:(id)arg0 ;
-(void)_tearDownTimeStampLabel;
-(void)_updateVisualStylingOfView:(id)arg0 style:(NSInteger)arg1 visualStylingProvider:(id)arg2 outgoingProvider:(id)arg3 ;
-(void)_updateVisualStylingProvidersForViewIfNecessary:(id)arg0 ;
-(void)_visualStylingProviderDidChange:(id)arg0 forCategory:(NSInteger)arg1 outgoingProvider:(id)arg2 ;
-(void)dateLabelDidChange:(id)arg0 ;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(void)setVisualStylingProvider:(id)arg0 forCategory:(NSInteger)arg1 ;


@end


#endif