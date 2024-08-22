// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBDASHBOARDSETUPVIEW_H
#define SBDASHBOARDSETUPVIEW_H

@class UIView, UILabel, UIStackView, UIImageView, SBFTouchPassThroughView, SBUILegibilityLabel, SBUICallToActionLabel, NSArray, NSString, CADisplayLink, CSHomeAffordanceView, UIButton, _UILegibilitySettings;
@protocol CAAnimationDelegate, OS_dispatch_source;


#import "SBCursiveTextView.h"

@interface SBDashBoardSetupView : UIView <CAAnimationDelegate>

 {
    UILabel *_titleLabel;
    UIStackView *_activationLockStackView;
    UIImageView *_activationLockImage;
    UILabel *_activationLockWarningLabel;
    UILabel *_activationLockDetailLabel;
    UILabel *_storeRestrictedTitleLabel;
    UILabel *_storeRestrictedBodyLabel;
    UILabel *_storeRestrictedLinkLabel;
    UIView *_storeRestrictedContainer;
    UILabel *_securityResearchDeviceTitleLabel;
    UIView *_securityResearchDeviceContainer;
    UIImageView *_securityResearchHeaderIcon;
    UILabel *_securityResearchSubtitleLabel;
    SBFTouchPassThroughView *_homeAffordanceContainer;
    UIView *_homeAffordanceCallToActionContainer;
    SBUILegibilityLabel *_homeAffordanceCallToActionLabel;
    SBUICallToActionLabel *_homeButtonCallToActionLabel;
    NSObject<OS_dispatch_source> *_homeButtonCallToActionTimer;
    NSArray *_activationInfoViewConstraints;
    NSString *_currentLanguage;
    SBCursiveTextView *_cursiveTextView;
    CGFloat _startTime;
    CGFloat _customDelayDuration;
    CADisplayLink *_displayLink;
    BOOL _isStoreRestricted;
    BOOL _isSecurityResearchDevice;
}


@property (retain, nonatomic) UIView *activationInfoView; // ivar: _activationInfoView
@property (nonatomic, getter=isActivationLocked) BOOL activationLocked; // ivar: _activationLocked
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CSHomeAffordanceView *homeAffordanceView; // ivar: _homeAffordanceView
@property (readonly, nonatomic) UIButton *infoButton; // ivar: _infoButton
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings; // ivar: _legibilitySettings
@property (retain, nonatomic) UIView *regulatoryInfoView; // ivar: _regulatoryInfoView
@property (readonly) Class superclass;


-(BOOL)_actsLikeStoreRestricted;
-(BOOL)_isShowingModalTakeoverUI;
-(CGFloat)setTitleString:(id)arg0 forLanguage:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 usingHomeAffordance:(BOOL)arg1 isStoreRestricted:(BOOL)arg2 isSecurityResearchDevice:(BOOL)arg3 ;
-(void)_addActivationLockLabels;
-(void)_addHomeAffordance;
-(void)_addHomeAffordanceCallToAction;
-(void)_addHomeButtonCallToAction;
-(void)_addInfoButton;
-(void)_addResetAnimationForKeyPath:(id)arg0 onLayer:(id)arg1 dispatchGroup:(id)arg2 ;
-(void)_addSecurityResearchLabels;
-(void)_addStoreRestrictedLabels;
-(void)_addTitleLabel;
-(void)_adjustTitleVisibilityForInfoViews;
-(void)_animateCursiveForTimePassed;
-(void)_animateHomeAffordanceCallToActionToActive:(BOOL)arg0 withDispatchGroup:(id)arg1 ;
-(void)_animateHomeAffordanceToActive:(BOOL)arg0 withDispatchGroup:(id)arg1 ;
-(void)_animateHomeButtonCallToActionToActive:(BOOL)arg0 withDispatchGroup:(id)arg1 ;
-(void)_animateView:(id)arg0 toActive:(BOOL)arg1 withDispatchGroup:(id)arg2 ;
-(void)_createDisplayLink;
-(void)_layoutActivationInfoView;
-(void)_layoutHomeAffordance;
-(void)_layoutHomeAffordanceCallToAction;
-(void)_layoutHomeButtonCallToAction;
-(void)_layoutRegulatoryInfo;
-(void)_onDisplayLink:(id)arg0 ;
-(void)_removeDisplayLink;
-(void)_removeNormalAnimationForKeyPath:(id)arg0 onLayer:(id)arg1 ;
-(void)_removeResetAnimationForKeyPath:(id)arg0 onLayer:(id)arg1 ;
-(void)_setupActivationInfoConstraintsIfNeeded;
-(void)_setupConstraints;
-(void)_updateLegibilitySettings;
-(void)animateComponents:(NSUInteger)arg0 toActive:(BOOL)arg1 withCompletion:(id)arg2 ;
-(void)animationDidStop:(id)arg0 finished:(BOOL)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setActivationLockWarningString:(id)arg0 detailString:(id)arg1 forLanguage:(id)arg2 ;
-(void)setCallToActionString:(id)arg0 forLanguage:(id)arg1 ;
-(void)setStoreRestrictedStrings:(id)arg0 bodyString:(id)arg1 linkString:(id)arg2 forLanguage:(id)arg3 ;


@end


#endif