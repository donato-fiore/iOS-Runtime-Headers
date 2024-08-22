// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CSQUICKACTIONSVIEWCONTROLLER_H
#define CSQUICKACTIONSVIEWCONTROLLER_H

@class SBUIFlashlightController, SBLockScreenDefaults, NSString;
@protocol CSQuickActionsDelegate, SBUIFlashlightObserver, CSCameraPrewarming, SBFLockOutStatusProvider;


#import "CSCoverSheetViewControllerBase.h"
#import "CSLockScreenSettings.h"
#import "CSCoverSheetViewController.h"

@interface CSQuickActionsViewController : CSCoverSheetViewControllerBase <CSQuickActionsDelegate, SBUIFlashlightObserver>

 {
    SBUIFlashlightController *_flashlight;
    CSLockScreenSettings *_prototypeSettings;
    SBLockScreenDefaults *_lockScreenDefaults;
}


@property (nonatomic) BOOL animatingToCamera; // ivar: _animatingToCamera
@property (retain, nonatomic) NSObject<CSCameraPrewarming> *cameraPrewarmer; // ivar: _cameraPrewarmer
@property (weak, nonatomic) CSCoverSheetViewController *coverSheetViewController; // ivar: _coverSheetViewController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<SBFLockOutStatusProvider> *lockOutController; // ivar: _lockOutController
@property (readonly) Class superclass;
@property (nonatomic) BOOL suppressingVisibleChanges; // ivar: _suppressingVisibleChanges


+(BOOL)deviceSupportsButtons;
+(Class)viewClass;
-(BOOL)_isFlashlightOn;
-(BOOL)_shouldPrelaunchOnTouch;
-(BOOL)_shouldPrewarmOnTouch;
-(BOOL)_supportsCamera;
-(BOOL)allowsCameraPress;
-(BOOL)allowsFlashlight;
-(BOOL)allowsFlashlightInteraction;
-(BOOL)handleEvent:(id)arg0 ;
-(BOOL)hasCamera;
-(BOOL)hasFlashlight;
-(BOOL)isPortrait;
-(NSInteger)presentationPriority;
-(NSInteger)presentationStyle;
-(NSInteger)presentationType;
-(id)init;
-(id)initWithLockScreenDefaults:(id)arg0 ;
-(id)quickActionsView;
-(id)quickActionsViewIfLoaded;
-(void)_addStateCaptureHandlers;
-(void)_deviceBlockStateDidChangeNotification:(id)arg0 ;
-(void)_featureLockStateDidChangeNotification:(id)arg0 ;
-(void)_launchCamera;
-(void)_resetIdleTimer;
-(void)_setupFlashlight;
-(void)_tearDownFlashlight;
-(void)_tearDownFlashlightIfOff;
-(void)_toggleFlashlight;
-(void)_updateFlashlightButtonAvailability;
-(void)_updateFlashlightButtonAvailabilityRespectingSuppression:(BOOL)arg0 ;
-(void)_updateFlashlightButtonState;
-(void)dealloc;
-(void)fireActionForButton:(id)arg0 ;
-(void)flashlightAvailabilityDidChange:(BOOL)arg0 ;
-(void)flashlightLevelDidChange:(NSUInteger)arg0 ;
-(void)loadView;
-(void)touchBeganForButton:(id)arg0 ;
-(void)touchEndedForButton:(id)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif