// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NCNOTIFICATIONSUMMARYEXPANDEDHEADERVIEW_H
#define NCNOTIFICATIONSUMMARYEXPANDEDHEADERVIEW_H

@class UILabel<BSUIDateLabel>, UILabel, UIView, UIButton, PLGlyphControl, NSDate, NSString, NSTimeZone;
@protocol BSUIDateLabelDelegate, NCToggleControlDelegate, NCNotificationListCoalescingControlsHandler, NCNotificationSummaryExpandedHeaderViewDelegate, NCNotificationListCoalescingControlsHandlerDelegate;


#import "NCNotificationListBaseContentView.h"
#import "NCToggleControl.h"

@interface NCNotificationSummaryExpandedHeaderView : NCNotificationListBaseContentView <BSUIDateLabelDelegate, NCToggleControlDelegate, NCNotificationListCoalescingControlsHandler>

 {
    UILabel<BSUIDateLabel> *_timeStampLabel;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIView *_dividerView;
    UIButton *_onboardingAcceptButton;
    UIButton *_onboardingRejectButton;
    PLGlyphControl *_collapseControl;
    NCToggleControl *_clearControl;
    UIView *_controlsView;
    BOOL _animateCollapseButtonLayout;
}


@property (copy, nonatomic) NSDate *date; // ivar: _date
@property (nonatomic) NSInteger dateFormatStyle; // ivar: _dateFormatStyle
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NCNotificationSummaryExpandedHeaderViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<NCNotificationListCoalescingControlsHandlerDelegate> *handlerDelegate; // ivar: _handlerDelegate
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isOnboarding) BOOL onboarding; // ivar: _onboarding
@property (copy, nonatomic) NSString *subtitle;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSTimeZone *timeZone; // ivar: _timeZone
@property (copy, nonatomic) NSString *title;


-(BOOL)adjustForContentSizeCategoryChange;
-(BOOL)dismissModalFullScreenIfNeeded;
-(BOOL)shouldReceiveTouchAtPointInWindowSpace:(struct CGPoint )arg0 ;
-(CGFloat)_allowedWidthForButtonInRect:(struct CGRect )arg0 ;
-(NSUInteger)_maximumNumberOfLinesForTitleText;
-(NSUInteger)_numberOfLinesForSubtitleTextInFrame:(struct CGRect )arg0 ;
-(NSUInteger)_numberOfLinesForTitleTextInFrame:(struct CGRect )arg0 ;
-(id)_newOnboardingButtonWithTitle:(id)arg0 ;
-(id)containerViewForToggleControlClickInteractionPresentedContent:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_configureControlsViewIfNecessary;
-(void)_configureDividerViewIfNecessary;
-(void)_configureOnboardingButtonsIfNecessary;
-(void)_configureTimeStampLabel;
-(void)_configureTimeStampLabelIfNecessary;
-(void)_handleClearAll:(id)arg0 ;
-(void)_handleClearControlPrimaryAction:(id)arg0 ;
-(void)_handleClearControlTouchUpInside:(id)arg0 ;
-(void)_handleCollapseControlPrimaryAction:(id)arg0 ;
-(void)_layoutControlsView;
-(void)_layoutDividerView;
-(void)_layoutOnboardingButtons;
-(void)_layoutTimeStampLabel;
-(void)_layoutTitleLabel;
-(void)_recycleTimeStampLabel;
-(void)_summaryOnboardingAccepted:(id)arg0 ;
-(void)_summaryOnboardingRejected:(id)arg0 ;
-(void)_tearDownTimeStampLabel;
-(void)_updateTextAttributesForButtonLabel:(id)arg0 ;
-(void)_visualStylingProviderDidChange:(id)arg0 forCategory:(NSInteger)arg1 outgoingProvider:(id)arg2 ;
-(void)dateLabelDidChange:(id)arg0 ;
-(void)layoutSubviews;
-(void)resetClearButtonStateAnimated:(BOOL)arg0 ;
-(void)toggleControlDidBeginClickInteraction:(id)arg0 ;
-(void)toggleControlDidDismssClickInteractionPresentedContent:(id)arg0 ;
-(void)toggleControlDidPresentClickInteractionPresentedContent:(id)arg0 ;


@end


#endif