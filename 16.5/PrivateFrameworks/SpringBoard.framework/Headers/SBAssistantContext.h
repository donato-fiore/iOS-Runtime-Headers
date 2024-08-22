// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBASSISTANTCONTEXT_H
#define SBASSISTANTCONTEXT_H

@class CSCoverSheetViewController, SBFTraitsArbiter, SBFZStackResolver;
@protocol FBSDisplayLayoutPublishing, SBLockScreenEnvironment, SBAssistantOrientationAccomodating, SBTransientOverlayPresenting;

#import <Foundation/Foundation.h>

#import "SBAlertItemsController.h"
#import "SBControlCenterController.h"
#import "SBCoverSheetPresentationManager.h"
#import "SBFloatingDockController.h"
#import "SBIconController.h"
#import "SBLockScreenManager.h"
#import "SBModalAlertPresentationCoordinator.h"
#import "SBSwitcherController.h"
#import "SBSystemApertureController.h"
#import "SBSystemGestureManager.h"
#import "SBWallpaperController.h"
#import "SBWindowHidingManager.h"

@interface SBAssistantContext : NSObject

@property (retain, nonatomic) SBAlertItemsController *alertItemsController; // ivar: _alertItemsController
@property (retain, nonatomic) SBControlCenterController *controlCenterController; // ivar: _controlCenterController
@property (retain, nonatomic) SBCoverSheetPresentationManager *coverSheetPresentationManager; // ivar: _coverSheetPresentationManager
@property (retain, nonatomic) CSCoverSheetViewController *coverSheetViewController; // ivar: _coverSheetViewController
@property (retain, nonatomic) NSObject<FBSDisplayLayoutPublishing> *displayLayoutPublisher; // ivar: _displayLayoutPublisher
@property (retain, nonatomic) SBFloatingDockController *floatingDockController; // ivar: _floatingDockController
@property (retain, nonatomic) SBIconController *iconController; // ivar: _iconController
@property (retain, nonatomic) NSObject<SBLockScreenEnvironment> *lockScreenEnvironment; // ivar: _lockScreenEnvironment
@property (retain, nonatomic) SBLockScreenManager *lockScreenManager; // ivar: _lockScreenManager
@property (retain, nonatomic) SBModalAlertPresentationCoordinator *modalAlertPresentationCoordinator; // ivar: _modalAlertPresentationCoordinator
@property (retain, nonatomic) NSObject<SBAssistantOrientationAccomodating> *orientationAccomodation; // ivar: _orientationAccomodation
@property (retain, nonatomic) SBSwitcherController *switcherController; // ivar: _switcherController
@property (retain, nonatomic) SBSystemApertureController *systemApertureController; // ivar: _systemApertureController
@property (retain, nonatomic) SBSystemGestureManager *systemGestureManager; // ivar: _systemGestureManager
@property (retain, nonatomic) SBFTraitsArbiter *traitsArbiter; // ivar: _traitsArbiter
@property (retain, nonatomic) NSObject<SBTransientOverlayPresenting> *transientOverlayPresenter; // ivar: _transientOverlayPresenter
@property (retain, nonatomic) SBWallpaperController *wallpaperController; // ivar: _wallpaperController
@property (retain, nonatomic) SBWindowHidingManager *windowHidingManager; // ivar: _windowHidingManager
@property (retain, nonatomic) SBFZStackResolver *zStackResolver; // ivar: _zStackResolver


+(id)contextForWindowScene:(id)arg0 ;


@end


#endif