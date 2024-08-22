// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EKUIOCCURRENCETABLEVIEWCELL_H
#define EKUIOCCURRENCETABLEVIEWCELL_H

@class UIImageView, NSArray, NSMutableArray, NSLayoutConstraint, NSDate, EKCalendarDate, NSString, NSAttributedString, NSDictionary, UIColor, UIVisualEffect;
@protocol OS_dispatch_source;


#import "EKUITableViewCellWithPrimaryAndSecondaryFonts.h"
#import "EKUIOccurrenceTableViewCellLabel.h"
#import "ColorBarView.h"
#import "ColoredBackgroundView.h"

@interface EKUIOccurrenceTableViewCell : EKUITableViewCellWithPrimaryAndSecondaryFonts {
    EKUIOccurrenceTableViewCellLabel *_travelTextLabel;
    EKUIOccurrenceTableViewCellLabel *_primaryLabel;
    EKUIOccurrenceTableViewCellLabel *_secondaryLabel;
    EKUIOccurrenceTableViewCellLabel *_travelDepartureTimeLabel;
    EKUIOccurrenceTableViewCellLabel *_topTimeLabel;
    EKUIOccurrenceTableViewCellLabel *_bottomTimeLabel;
    EKUIOccurrenceTableViewCellLabel *_countdownLabel;
    ColorBarView *_colorBarView;
    ColoredBackgroundView *_coloredBackgroundView;
    UIImageView *_angleStripeBackgroundView;
    UIImageView *_accessoryImageView;
    NSArray *_ekUIOccurrenceTableViewCellConstraints;
    BOOL _areCurrentCellConstraintsForLargeText;
    BOOL _carplayMode;
    BOOL _includesTopTimeLabel;
    CGSize _sizeWhenLayerLastCalculated;
    NSMutableArray *_primaryVisualEffectViews;
    NSMutableArray *_secondaryVisualEffectViews;
    BOOL _travelTimeTemplate;
    BOOL _invitationTemplate;
    BOOL _singleLineAllDayTemplate;
    BOOL _singleLineAllDayWithImageTemplate;
    NSLayoutConstraint *_contentTop_to_travelTextBaseline_Constraint;
    NSLayoutConstraint *_contentTop_to_primaryTextBaseline_Constraint;
    NSLayoutConstraint *_contentBottom_to_bottomTextBaseline_Constraint;
    NSLayoutConstraint *_primaryTextBaseline_to_secondaryTextBaseline_Constraint;
    NSLayoutConstraint *_travelTextBaseline_to_primaryTextBaseLine_Constraint;
    NSLayoutConstraint *_horizontalDividerBarBottom_to_colorBarTop_Constraint;
    NSLayoutConstraint *_timeTextWidthConstraint;
    NSLayoutConstraint *_timeTextHorizontalPositioningConstraint;
    NSLayoutConstraint *_colorBarHorizontalPositioningConstraint;
    NSLayoutConstraint *_countdownLabelRightMarginConstraint;
    NSLayoutConstraint *_countdownLabelBaseling_to_contentBottom_Constraint;
    CGFloat _travelTime;
    NSDate *_eventStartDateIncludingTravelTime;
    EKCalendarDate *_eventEndDate;
    NSString *_eventTitle;
    NSAttributedString *_eventLocation;
    NSString *_topTimeString;
    NSString *_bottomTimeString;
    NSString *_countdownLabelString;
    NSString *_travelTextLabelString;
    NSString *_travelAddressString;
    NSString *_travelDepartureTimeString;
    NSDictionary *_secondaryStringDrawingAttributes;
    NSDictionary *_topTimeStringDrawingAttributes;
    NSDictionary *_bottomTimeStringDrawingAttributes;
    NSDictionary *_travelTextLabelStringDrawingAttributes;
    NSDictionary *_travelAddressStringDrawingAttributes;
    NSDictionary *_travelDepartureTimeStringDrawingAttributes;
    BOOL _isPast;
    BOOL _isAllDay;
    BOOL _isRecurring;
    BOOL _isBirthday;
    BOOL _tentative;
    BOOL _declined;
    BOOL _needsReply;
    BOOL _cancelled;
    BOOL _opaque;
    NSObject<OS_dispatch_source> *_countdownLabelUpdateTimer;
    BOOL _secondaryLabelShouldShowAlertDot;
}


@property (nonatomic) BOOL doesNotUseTemplate; // ivar: _doesNotUseTemplate
@property (retain, nonatomic) UIColor *eventCalendarColor; // ivar: _eventCalendarColor
@property (readonly, nonatomic) EKCalendarDate *eventStartDate; // ivar: _eventStartDate
@property (nonatomic) BOOL isFakeInvitation; // ivar: _isFakeInvitation
@property (nonatomic) BOOL isTemplateCell; // ivar: _isTemplateCell
@property (retain, nonatomic) UIColor *preferredBackgroundColor; // ivar: _preferredBackgroundColor
@property (retain, nonatomic) UIVisualEffect *primaryVisualEffect; // ivar: _primaryVisualEffect
@property (retain, nonatomic) UIVisualEffect *secondaryVisualEffect; // ivar: _secondaryVisualEffect


+(BOOL)drawsBackgroundForEvent:(id)arg0 ;
+(BOOL)requiresConstraintBasedLayout;
+(BOOL)vibrant;
+(CGFloat)_rightImageSpacing;
+(CGFloat)cellHeightForWidth:(CGFloat)arg0 ;
+(CGFloat)needsReplyStripeBackgroundAlpha;
+(CGFloat)singleLineCellHeightForWidth:(CGFloat)arg0 ;
+(CGFloat)tentativeStripeBackgroundAlpha;
+(CGFloat)travelTimeCellHeightForWidth:(CGFloat)arg0 ;
+(id)_allDayLocalizedString;
+(id)_needsReplyAngledStripeBackground:(id)arg0 ;
+(id)_nowLocalizedString;
+(id)_tentativeAngledStripeBackground:(id)arg0 ;
+(id)allReuseIdentifiers;
+(id)cancelledDeclinedColorBarColor;
+(id)needsReplyStripeColor;
+(id)normalBackgroundColor;
+(id)reuseIdentifierForEvent:(id)arg0 ;
+(id)reuseIdentifierForTemplate;
+(id)reuseIdentifierForTemplateInvitation;
+(id)reuseIdentifierForTemplateSingleLineAllDay;
+(id)reuseIdentifierForTemplateSingleLineAllDayWithImage;
+(id)reuseIdentifierForTemplateWithTravelTime;
+(id)tentativeStripeColor;
+(struct UIEdgeInsets )adjustedSeparatorInsets;
+(void)_clearCaches;
+(void)initialize;
-(BOOL)_eventIsNow;
-(BOOL)isAllDay;
-(BOOL)isBirthday;
-(BOOL)isCancelled;
-(BOOL)isDeclined;
-(BOOL)isPast;
-(BOOL)isTentative;
-(BOOL)needsReply;
-(CGFloat)_cornerRadius;
-(CGFloat)_leftMarginForTimeViewsFromTimeWidth:(CGFloat)arg0 ;
-(CGFloat)_rightMarginForTimeViewsFromTimeWidth:(CGFloat)arg0 ;
-(CGFloat)_verticalSpacingBottomToBaselineForBottomLabel;
-(CGFloat)_verticalSpacingPrimaryLabelToTimeLabel;
-(CGFloat)_verticalSpacingTopToBaselineForBottomLabel;
-(CGFloat)_verticalSpacingTopToBaselineForTopLabel;
-(CGFloat)_verticalSpacingTravelBaselineToPrimaryBaseline;
-(CGFloat)_widthForTimeViews;
-(CGFloat)needsReplyStripeBackgroundAlpha;
-(CGFloat)tentativeStripeBackgroundAlpha;
-(id)_birthdayIcon;
-(id)_createParentVisualEffectViewWithVisualEffect:(id)arg0 ;
-(id)_needsReplyDot;
-(id)_setUpLargeTextConstraints;
-(id)_setUpStandardConstraints;
-(id)_sharedNumberFormatter;
-(id)_textForBottomTimeLabel;
-(id)_textForCountdownLabelWithCurrentDate:(id)arg0 ;
-(id)_textForDepartureTimeLabel;
-(id)_textForTopTimeLabel;
-(id)accessoryImage;
-(id)birthdayIconColor;
-(id)cancelledDeclinedColorBarColor;
-(id)colorBarColor;
-(id)coloredBackgroundViewColor;
-(id)coloredBackgroundViewFilter;
-(id)coloredBackgroundViewFilterColor;
-(id)detailTextLabel;
-(id)imageView;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(id)invitationPrimaryTextColor;
-(id)needsReplyAngledStripeBackground;
-(id)needsReplyStripeColor;
-(id)normalBackgroundColor;
-(id)primaryPastTextColor;
-(id)primaryStrikethroughTextColor;
-(id)primaryTextColor;
-(id)reuseIdentifier;
-(id)secondaryPastTextColor;
-(id)secondaryStrikethroughTextColor;
-(id)secondaryTextColor;
-(id)tentativeAngledStripeBackground;
-(id)tentativeStripeColor;
-(id)textLabel;
-(id)topTimeColor;
-(void)_addSubview:(id)arg0 forVibrancy:(BOOL)arg1 usingPrimaryEffect:(BOOL)arg2 ;
-(void)_addVibrantSubview:(id)arg0 usingPrimaryEffect:(BOOL)arg1 ;
-(void)_countdownTimerFired;
-(void)_createViewsForReuseIdentifier:(id)arg0 ;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)_installCountdownTimerWithFireDate:(id)arg0 ;
-(void)_resetCountdownTimerBasedOnCurrentDateForStringGeneration:(id)arg0 ;
-(void)_setUpConstraints;
-(void)_uninstallCountdownTimer;
-(void)_updateAccessoryImage;
-(void)_updateBottomTimeLabel;
-(void)_updateColorBarView;
-(void)_updateColoredBackgroundViewColor;
-(void)_updateContentForSizeCategoryChange:(id)arg0 ;
-(void)_updateCountdownLabel;
-(void)_updateNumberOfLinesForLabel:(id)arg0 isRightAlignedInStandardLayout:(BOOL)arg1 ;
-(void)_updatePrimaryTextLabel;
-(void)_updateSecondaryTextLabel;
-(void)_updateTopTimeLabel;
-(void)_updateTravelDepartureTimeLabel;
-(void)_updateTravelTimeLabel;
-(void)contentCategorySizeChanged;
-(void)dealloc;
-(void)forceUpdateOfAllElements;
-(void)hideUnwantedItemsInCarplayMode;
-(void)layoutSubviews;
-(void)setCalendarColor:(id)arg0 ;
-(void)setColorBarLayerFilter:(id)arg0 ;
-(void)updateAngleBackgroundColor;
-(void)updateConfigurationUsingState:(id)arg0 ;
-(void)updateConstraints;
-(void)updateWithEvent:(id)arg0 calendar:(id)arg1 placedUnderDayWithStartDate:(id)arg2 opaque:(BOOL)arg3 drawsDimmedForPast:(BOOL)arg4 ;
-(void)updateWithEvent:(id)arg0 calendar:(id)arg1 placedUnderDayWithStartDate:(id)arg2 opaque:(BOOL)arg3 drawsDimmedForPast:(BOOL)arg4 includingTravelTime:(BOOL)arg5 ;
-(void)updateWithEvent:(id)arg0 calendar:(id)arg1 placedUnderDayWithStartDate:(id)arg2 opaque:(BOOL)arg3 drawsDimmedForPast:(BOOL)arg4 includingTravelTime:(BOOL)arg5 includingCountdown:(BOOL)arg6 ;
-(void)updateWithEvent:(id)arg0 calendar:(id)arg1 placedUnderDayWithStartDate:(id)arg2 opaque:(BOOL)arg3 drawsDimmedForPast:(BOOL)arg4 includingTravelTime:(BOOL)arg5 includingCountdown:(BOOL)arg6 includingTopTimeLabel:(BOOL)arg7 carplayMode:(BOOL)arg8 ;


@end


#endif