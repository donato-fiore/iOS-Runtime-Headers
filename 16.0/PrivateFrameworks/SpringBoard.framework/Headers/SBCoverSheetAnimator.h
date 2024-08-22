// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBCOVERSHEETANIMATOR_H
#define SBCOVERSHEETANIMATOR_H

@class UIWindow, SBFolderController, SBIconZoomAnimator, SBHUnlockSettings;

#import <Foundation/Foundation.h>

#import "SBWindowSelfHostWrapper.h"
#import "SBSceneManager.h"
#import "SBLockToAppStatusBarAnimator.h"
#import "SBWallpaperController.h"

@interface SBCoverSheetAnimator : NSObject

@property (weak, nonatomic) UIWindow *coverSheetWindow; // ivar: _coverSheetWindow
@property (retain, nonatomic) SBWindowSelfHostWrapper *coverSheetWindowHostWrapper; // ivar: _coverSheetWindowHostWrapper
@property (retain, nonatomic) SBFolderController *folderController; // ivar: _folderController
@property (retain, nonatomic) UIWindow *hostingWindow; // ivar: _hostingWindow
@property (retain, nonatomic) SBIconZoomAnimator *iconAnimator; // ivar: _iconAnimator
@property (retain, nonatomic) SBSceneManager *sceneManager; // ivar: _sceneManager
@property (retain, nonatomic) SBLockToAppStatusBarAnimator *statusBarAnimator; // ivar: _statusBarAnimator
@property (retain, nonatomic) UIWindow *switcherWindow; // ivar: _switcherWindow
@property (nonatomic, getter=isTransitioning) BOOL transitioning; // ivar: _transitioning
@property (retain, nonatomic) SBHUnlockSettings *unlockSettings; // ivar: _unlockSettings
@property (retain, nonatomic) SBWallpaperController *wallpaperController; // ivar: _wallpaperController


-(id)initWithCoverSheetWindow:(id)arg0 sceneManager:(id)arg1 hostingWindow:(id)arg2 switcherWindow:(id)arg3 wallpaperController:(id)arg4 folderController:(id)arg5 unlockSettings:(id)arg6 ;
-(void)_prepareIconAnimatorIncludingLockScreen:(BOOL)arg0 ;
-(void)_setWallpaperToLocked:(BOOL)arg0 duration:(CGFloat)arg1 ;
-(void)_updateCoverSheetHosting;
-(void)animateToCoverSheet:(BOOL)arg0 animated:(BOOL)arg1 withCompletion:(id)arg2 ;


@end


#endif