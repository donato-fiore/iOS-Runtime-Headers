// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSTEACHABLEMOMENTSCONTAINERVIEW_H
#define CSTEACHABLEMOMENTSCONTAINERVIEW_H

@class SBUILegibilityLabel, UIView, UIImageView, NSString, _UILegibilitySettings, SBLockScreenDefaults, UIStatusBar;
@protocol SBFStatusBarManagerObserver, SBUIOptionalLegibility;


#import "CSCoverSheetViewBase.h"

@interface CSTeachableMomentsContainerView : CSCoverSheetViewBase <SBFStatusBarManagerObserver, SBUIOptionalLegibility>



@property (readonly, nonatomic) BOOL adjustsControlCenterTutorsVisibilityForAvailableSpace; // ivar: _adjustsControlCenterTutorsVisibilityForAvailableSpace
@property (retain, nonatomic) SBUILegibilityLabel *callToActionLabel; // ivar: _callToActionLabel
@property (retain, nonatomic) UIView *callToActionLabelContainerView; // ivar: _callToActionLabelContainerView
@property (retain, nonatomic) UIView *callToActionLabelPositionPlaceholderView; // ivar: _callToActionLabelPositionPlaceholderView
@property (retain, nonatomic) UIView *controlCenterGlyphContainerView; // ivar: _controlCenterGlyphContainerView
@property (retain, nonatomic) UIImageView *controlCenterGlyphView; // ivar: _controlCenterGlyphView
@property (retain, nonatomic) UIView *controlCenterGrabberContainerView; // ivar: _controlCenterGrabberContainerView
@property (retain, nonatomic) UIView *controlCenterGrabberEffectContainerView; // ivar: _controlCenterGrabberEffectContainerView
@property (retain, nonatomic) UIView *controlCenterGrabberPositionPlaceholderView; // ivar: _controlCenterGrabberPositionPlaceholderView
@property (retain, nonatomic) UIView *controlCenterGrabberView; // ivar: _controlCenterGrabberView
@property (retain, nonatomic) UIView *controlCenterTutorsContainerView; // ivar: _controlCenterTutorsContainerView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIView *homeAffordanceContainerView; // ivar: _homeAffordanceContainerView
@property (retain, nonatomic) UIView *homeAffordanceView; // ivar: _homeAffordanceView
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings; // ivar: _legibilitySettings
@property (retain, nonatomic) SBLockScreenDefaults *lockScreenDefaults; // ivar: _lockScreenDefaults
@property (readonly, nonatomic, getter=isStatusBarLayoutReady) BOOL statusBarLayoutIsReady;
@property (weak, nonatomic) UIStatusBar *statusBarToFollow; // ivar: _statusBarToFollow
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL usesStatusBarRelativeLayoutForControlCenterTutors; // ivar: _usesStatusBarRelativeLayoutForControlCenterTutors
@property (readonly, nonatomic) BOOL usesStatusBarRelativeLayoutForControlCenterTutorsY; // ivar: _usesStatusBarRelativeLayoutForControlCenterTutorsY


-(id)createCallToActionLabel;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)presentationRegions;
-(struct CGPoint )_grabberCenterForCointainerBounds:(struct CGRect )arg0 grabberTop:(CGFloat)arg1 grabberTopIsRelative:(BOOL)arg2 grabberSize:(struct CGSize )arg3 isSpaceConstrained:(*BOOL)arg4 ;
-(void)_addCallToActionLabel;
-(void)_addControlCenterTutors;
-(void)_layoutCallToActionLabel;
-(void)_layoutControlCenterGrabberAndGlyph;
-(void)_layoutHomeAffordanceContainer;
-(void)_preferredTextSizeChanged:(id)arg0 ;
-(void)_updateViewsForLegibilitySettings;
-(void)layoutSubviews;
-(void)statusBarManager:(id)arg0 didUpdateAvoidanceFrameForStatusBar:(id)arg1 withAnimationSettings:(id)arg2 isInteractive:(BOOL)arg3 ;


@end


#endif