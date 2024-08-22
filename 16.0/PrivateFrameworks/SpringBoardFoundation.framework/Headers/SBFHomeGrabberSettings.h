// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBFHOMEGRABBERSETTINGS_H
#define SBFHOMEGRABBERSETTINGS_H

@class PTSettings;


#import "SBFFluidBehaviorSettings.h"
#import "SBFAnimationSettings.h"

@interface SBFHomeGrabberSettings : PTSettings

@property (nonatomic) NSInteger autoHideOverride; // ivar: _autoHideOverride
@property (nonatomic) CGFloat autoHideTime; // ivar: _autoHideTime
@property (nonatomic) CGFloat autoHideTimeOnAppRequest; // ivar: _autoHideTimeOnAppRequest
@property (nonatomic) CGFloat bounceHitTestOutsetSides; // ivar: _bounceHitTestOutsetSides
@property (nonatomic) CGFloat bounceHitTestOutsetTop; // ivar: _bounceHitTestOutsetTop
@property (nonatomic) CGFloat coverSheetHomeAffordanceCursorBottomEdgeInset; // ivar: _coverSheetHomeAffordanceCursorBottomEdgeInset
@property (nonatomic) CGFloat coverSheetHomeAffordanceCursorLeftEdgeInset; // ivar: _coverSheetHomeAffordanceCursorLeftEdgeInset
@property (nonatomic) CGFloat coverSheetHomeAffordanceCursorRightEdgeInset; // ivar: _coverSheetHomeAffordanceCursorRightEdgeInset
@property (nonatomic) CGFloat coverSheetHomeAffordanceCursorTopEdgeInset; // ivar: _coverSheetHomeAffordanceCursorTopEdgeInset
@property (nonatomic) CGFloat coverSheetSuppressAnimationForPointerBottomEdgeInset; // ivar: _coverSheetSuppressAnimationForPointerBottomEdgeInset
@property (nonatomic) CGFloat coverSheetSuppressAnimationForPointerLeftEdgeInset; // ivar: _coverSheetSuppressAnimationForPointerLeftEdgeInset
@property (nonatomic) CGFloat coverSheetSuppressAnimationForPointerRightEdgeInset; // ivar: _coverSheetSuppressAnimationForPointerRightEdgeInset
@property (nonatomic) CGFloat coverSheetSuppressAnimationForPointerTopEdgeInset; // ivar: _coverSheetSuppressAnimationForPointerTopEdgeInset
@property (nonatomic) CGFloat delayForUnhideOnAppRequest; // ivar: _delayForUnhideOnAppRequest
@property (nonatomic) CGFloat delayForUnhideOnTouch; // ivar: _delayForUnhideOnTouch
@property (retain, nonatomic) SBFFluidBehaviorSettings *edgeProtectAnimationSettings; // ivar: _edgeProtectAnimationSettings
@property (nonatomic) NSInteger edgeProtectOverride; // ivar: _edgeProtectOverride
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (retain, nonatomic) SBFAnimationSettings *forcedProminentToThinAnimationSettings; // ivar: _forcedProminentToThinAnimationSettings
@property (retain, nonatomic) SBFAnimationSettings *hideAnimationSettings; // ivar: _hideAnimationSettings
@property (retain, nonatomic) SBFAnimationSettings *hideForHomeGestureOwnershipAnimationSettings; // ivar: _hideForHomeGestureOwnershipAnimationSettings
@property (retain, nonatomic) SBFAnimationSettings *initialLumaResponseAnimationSettings; // ivar: _initialLumaResponseAnimationSettings
@property (nonatomic) NSInteger initializationStyle; // ivar: _initializationStyle
@property (retain, nonatomic) SBFAnimationSettings *lumaResponseAnimationSettings; // ivar: _lumaResponseAnimationSettings
@property (retain, nonatomic) SBFAnimationSettings *prominentToThinAnimationSettings; // ivar: _prominentToThinAnimationSettings
@property (nonatomic) BOOL removeViewOnHide; // ivar: _removeViewOnHide
@property (nonatomic) BOOL resetAutoHideTimeOnRotation; // ivar: _resetAutoHideTimeOnRotation
@property (retain, nonatomic) SBFAnimationSettings *rotationFadeInAnimationSettings; // ivar: _rotationFadeInAnimationSettings
@property (retain, nonatomic) SBFAnimationSettings *rotationFadeOutAnimationSettings; // ivar: _rotationFadeOutAnimationSettings
@property (retain, nonatomic) SBFAnimationSettings *thinToProminentAnimationSettings; // ivar: _thinToProminentAnimationSettings
@property (retain, nonatomic) SBFAnimationSettings *unhideAnimationSettings; // ivar: _unhideAnimationSettings
@property (retain, nonatomic) SBFAnimationSettings *unhideForHomeGestureOwnershipAnimationSettings; // ivar: _unhideForHomeGestureOwnershipAnimationSettings


+(id)settingsControllerModule;
-(struct UIEdgeInsets )coverSheetHomeAffordanceCursorEdgeInsets;
-(struct UIEdgeInsets )coverSheetSuppressAnimationForPointerInsets;
-(void)setDefaultValues;


@end


#endif