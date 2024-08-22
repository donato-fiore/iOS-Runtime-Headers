// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NCNOTIFICATIONLISTSECTIONREVEALHINTVIEW_H
#define NCNOTIFICATIONLISTSECTIONREVEALHINTVIEW_H

@class UIView, NSString, _UILegibilitySettings, SBUILegibilityLabel;
@protocol NCLegibilitySettingsAdjusting, PLContentSizeCategoryAdjusting;



@interface NCNotificationListSectionRevealHintView : UIView <NCLegibilitySettingsAdjusting, PLContentSizeCategoryAdjusting>



@property (nonatomic) BOOL adjustsFontForContentSizeCategory; // ivar: _adjustsFontForContentSizeCategory
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isForceRevealed) BOOL forceRevealed; // ivar: _forceRevealed
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat hintingAlpha; // ivar: _hintingAlpha
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings; // ivar: _legibilitySettings
@property (copy, nonatomic) NSString *preferredContentSizeCategory;
@property (retain, nonatomic) SBUILegibilityLabel *revealHintTitle; // ivar: _revealHintTitle
@property (nonatomic) CGFloat revealPercentage; // ivar: _revealPercentage
@property (readonly) Class superclass;


+(CGFloat)minimumViewHeight;
-(BOOL)adjustForContentSizeCategoryChange;
-(CGFloat)_alphaValueBasedOnRevealPercentage;
-(CGFloat)_hintTitleDisplacementForRevealPercentage:(CGFloat)arg0 ;
-(id)_labelFont;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_configureRevealHintTitleIfNecessary;
-(void)_layoutRevealHintTitle;
-(void)_updateAlpha;
-(void)adjustForLegibilitySettingsChange:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif