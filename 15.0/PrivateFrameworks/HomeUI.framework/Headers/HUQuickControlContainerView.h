// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUQUICKCONTROLCONTAINERVIEW_H
#define HUQUICKCONTROLCONTAINERVIEW_H

@class UIView, UILayoutGuide, NSLayoutConstraint, NSArray, PCDisambiguationContext, NSOrderedSet, NSString, UIButton, PLPillControl, UIImageView, NSAttributedString;
@protocol HFProxControlActivityClientDelegate, HUQuickControlContainerViewDelegate, PCActivity, OS_dispatch_source;


#import "HUQuickControlAuxiliaryHostView.h"
#import "HUQuickControlButtonRowView.h"
#import "HUControlHostView.h"
#import "HUQuickControlSummaryView.h"

@interface HUQuickControlContainerView : UIView <HFProxControlActivityClientDelegate>



@property (retain, nonatomic) UIView *activeControlView; // ivar: _activeControlView
@property (retain, nonatomic) HUQuickControlAuxiliaryHostView *auxiliaryHostView; // ivar: _auxiliaryHostView
@property (retain, nonatomic) HUQuickControlButtonRowView *buttonRowView; // ivar: _buttonRowView
@property (retain, nonatomic) UILayoutGuide *cardViewLayoutGuide; // ivar: _cardViewLayoutGuide
@property (nonatomic) CGFloat chromeTransitionProgress; // ivar: _chromeTransitionProgress
@property (retain, nonatomic) NSLayoutConstraint *compactControlBottomConstraint; // ivar: _compactControlBottomConstraint
@property (retain, nonatomic) NSArray *contentConstraints; // ivar: _contentConstraints
@property (retain, nonatomic) UILayoutGuide *contentToAuxiliarySpacingLayoutGuide; // ivar: _contentToAuxiliarySpacingLayoutGuide
@property (retain, nonatomic) HUControlHostView *controlHostView; // ivar: _controlHostView
@property (retain, nonatomic) NSLayoutConstraint *controlHostViewTopConstraintToView; // ivar: _controlHostViewTopConstraintToView
@property (nonatomic) CGFloat controlTransitionProgress; // ivar: _controlTransitionProgress
@property (retain, nonatomic) UILayoutGuide *controlViewLayoutGuide; // ivar: _controlViewLayoutGuide
@property (retain, nonatomic) UILayoutGuide *controlViewPreferredFrameLayoutGuide; // ivar: _controlViewPreferredFrameLayoutGuide
@property (nonatomic) BOOL controlViewSupportsTransformTransition; // ivar: _controlViewSupportsTransformTransition
@property (retain, nonatomic) PCDisambiguationContext *currentDisambiguationContext; // ivar: _currentDisambiguationContext
@property (retain, nonatomic) NSOrderedSet *currentUserActivities; // ivar: _currentUserActivities
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<HUQuickControlContainerViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIButton *detailsButton; // ivar: _detailsButton
@property (retain, nonatomic) PLPillControl *disambiguationButton; // ivar: _disambiguationButton
@property (retain, nonatomic) NSLayoutConstraint *disambiguationButtonHeightConstraint; // ivar: _disambiguationButtonHeightConstraint
@property (retain, nonatomic) UIImageView *disambiguationButtonLeadingImageView; // ivar: _disambiguationButtonLeadingImageView
@property (retain, nonatomic) NSAttributedString *disambiguationButtonPrimaryText; // ivar: _disambiguationButtonPrimaryText
@property (retain, nonatomic) NSString *disambiguationButtonSecondaryText; // ivar: _disambiguationButtonSecondaryText
@property (retain, nonatomic) NSLayoutConstraint *disambiguationButtonTopConstraint; // ivar: _disambiguationButtonTopConstraint
@property (nonatomic) NSUInteger edgesForExtendedLayout; // ivar: _edgesForExtendedLayout
@property (nonatomic) BOOL hasActivePhoneCall; // ivar: _hasActivePhoneCall
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat initialSourceViewScale; // ivar: _initialSourceViewScale
@property (nonatomic) BOOL isDisambiguationButtonAnimating; // ivar: _isDisambiguationButtonAnimating
@property (readonly, nonatomic) BOOL isExternallyAnimating; // ivar: _isExternallyAnimating
@property (retain, nonatomic) NSObject<PCActivity> *lastActivity; // ivar: _lastActivity
@property (retain, nonatomic) NSArray *maxHeightConstraints; // ivar: _maxHeightConstraints
@property (retain, nonatomic) NSObject<OS_dispatch_source> *phoneCallStatusUpdateTimer; // ivar: _phoneCallStatusUpdateTimer
@property (readonly, nonatomic) CGRect presentedControlFrame;
@property (nonatomic) BOOL shouldShowActiveControl; // ivar: _shouldShowActiveControl
@property (nonatomic) BOOL shouldShowDetailsButton; // ivar: _shouldShowDetailsButton
@property (readonly, nonatomic) CGRect sourceRect; // ivar: _sourceRect
@property (retain, nonatomic) UILayoutGuide *standardViewportFromParentGuide; // ivar: _standardViewportFromParentGuide
@property (retain, nonatomic) HUQuickControlSummaryView *summaryView; // ivar: _summaryView
@property (readonly) Class superclass;
@property (retain, nonatomic) UILayoutGuide *topToSummarySpacingLayoutGuide; // ivar: _topToSummarySpacingLayoutGuide


+(BOOL)requiresConstraintBasedLayout;
-(BOOL)_isDisambiguationButtonVisible;
-(BOOL)_isPhoneCallStatusUpdateTimerActive;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg0 ;
-(BOOL)_shouldShowControlView;
-(BOOL)_shouldShowDisambiguationButtonForUserActivities:(id)arg0 disambiguationContext:(id)arg1 ;
-(BOOL)_useCompactHeightLayout;
-(id)initWithFrame:(struct CGRect )arg0 delegate:(id)arg1 sourceRect:(struct CGRect )arg2 ;
-(struct CGAffineTransform )_controlHostTransform;
-(struct CGAffineTransform )_controlHostTransformForPresentationProgress:(CGFloat)arg0 ;
-(struct CGAffineTransform )sourceViewTransformForPresentationProgress:(CGFloat)arg0 ;
-(struct CGPoint )_controlHostCenter;
-(struct CGPoint )_controlHostCenterForPresentationProgress:(CGFloat)arg0 ;
-(struct CGSize )_presentedControlHostSize;
-(void)_configureCardViewLayoutGuideConstraints:(id)arg0 ;
-(void)_configureControlViewLayoutGuideConstraints:(id)arg0 ;
-(void)_configureDisambiguationButtonConstraints:(id)arg0 ;
-(void)_configureDisambiguationForActivities:(id)arg0 disambiguationContext:(id)arg1 ;
-(void)_configureRegularHeightConstraints:(id)arg0 ;
-(void)_detailsButtonTapped:(id)arg0 ;
-(void)_disambiguationButtonTapped:(id)arg0 ;
-(void)_disambiguationButtonTouchDown:(id)arg0 ;
-(void)_disambiguationButtonTouchUp:(id)arg0 ;
-(void)_invalidatePhoneCallStatusUpdateTimer;
-(void)_startPhoneCallStatusUpdateTimer;
-(void)_updateCompactControlBottomConstraint;
-(void)_updateDetailsButtonVisibility;
-(void)_updateDisambiguationButtonVisible:(BOOL)arg0 ;
-(void)_updateLayoutMargins;
-(void)dealloc;
-(void)didUpdateActivities:(id)arg0 forProxControlID:(id)arg1 disambiguationContext:(id)arg2 ;
-(void)externalAnimationsBegan;
-(void)externalAnimationsEnded;
-(void)hideAuxiliaryView;
-(void)layoutMarginsDidChange;
-(void)layoutSubviews;
-(void)showAuxiliaryView:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateConstraints;
-(void)willMoveToWindow:(id)arg0 ;


@end


#endif