// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SBTRANSIENTOVERLAYPRESENTEDENTITY_H
#define _SBTRANSIENTOVERLAYPRESENTEDENTITY_H

@protocol BSInvalidatable;

#import <Foundation/Foundation.h>

#import "SBTransientOverlayBackgroundWindow.h"
#import "SBPresentationObservationToken.h"
#import "SBFluidDismissalState.h"
#import "SBTransientOverlayViewController.h"
#import "SBTransientOverlayWindow.h"

@interface _SBTransientOverlayPresentedEntity : NSObject

@property (retain, nonatomic) SBTransientOverlayBackgroundWindow *backgroundWindow; // ivar: _backgroundWindow
@property (retain, nonatomic) SBPresentationObservationToken *bannerLongLookPresentationObservationToken; // ivar: _bannerLongLookPresentationObservationToken
@property (retain, nonatomic) NSObject<BSInvalidatable> *bannerLongLookWindowLevelAssertion; // ivar: _bannerLongLookWindowLevelAssertion
@property (readonly, nonatomic) CGFloat baseWindowLevel; // ivar: _baseWindowLevel
@property (retain, nonatomic) SBPresentationObservationToken *controlCenterPresentationObservationToken; // ivar: _controlCenterPresentationObservationToken
@property (retain, nonatomic) NSObject<BSInvalidatable> *controlCenterWindowLevelAssertion; // ivar: _controlCenterWindowLevelAssertion
@property (retain, nonatomic) NSObject<BSInvalidatable> *disableAutoUnlockAssertion; // ivar: _disableAutoUnlockAssertion
@property (nonatomic, getter=isDismissing) BOOL dismissing; // ivar: _dismissing
@property (retain, nonatomic) SBFluidDismissalState *fluidDismissalState; // ivar: _fluidDismissalState
@property (nonatomic) BOOL hasFinishedWindowInitialization; // ivar: _hasFinishedWindowInitialization
@property (nonatomic) BOOL hasPreservedInputViews; // ivar: _hasPreservedInputViews
@property (retain, nonatomic) NSObject<BSInvalidatable> *proximityEnabledAssertion; // ivar: _proximityEnabledAssertion
@property (nonatomic, getter=isRotating) BOOL rotating; // ivar: _rotating
@property (retain, nonatomic) SBPresentationObservationToken *siriPresentationObservationToken; // ivar: _siriPresentationObservationToken
@property (retain, nonatomic) NSObject<BSInvalidatable> *siriWindowLevelAssertion; // ivar: _siriWindowLevelAssertion
@property (readonly, nonatomic) SBTransientOverlayViewController *viewController; // ivar: _viewController
@property (retain, nonatomic) NSObject<BSInvalidatable> *wallpaperAnimationSuspensionAssertion; // ivar: _wallpaperAnimationSuspensionAssertion
@property (readonly, nonatomic) SBTransientOverlayWindow *window; // ivar: _window


-(id)initWithViewController:(id)arg0 window:(id)arg1 baseWindowLevel:(CGFloat)arg2 ;


@end


#endif