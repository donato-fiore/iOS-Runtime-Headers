// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSMAGSAFEACCESSORYSLEEVEVIEWCONTROLLER_H
#define CSMAGSAFEACCESSORYSLEEVEVIEWCONTROLLER_H

@class BCBatteryDeviceController, BrightnessSystemClient, SBFLockScreenDateViewController, NSString, _UILegibilitySettings;
@protocol BCBatteryDeviceObserving, SBFDateProviding;


#import "CSMagSafeAccessoryViewController.h"
#import "CSMagSafeAccessorySleeveView.h"

@interface CSMagSafeAccessorySleeveViewController : CSMagSafeAccessoryViewController <BCBatteryDeviceObserving>



@property (retain, nonatomic) BCBatteryDeviceController *batteryDeviceController; // ivar: _batteryDeviceController
@property (retain, nonatomic) BrightnessSystemClient *brightnessClient; // ivar: _brightnessClient
@property (nonatomic) BOOL chargingAnimationVisible; // ivar: _chargingAnimationVisible
@property (retain, nonatomic) NSObject<SBFDateProviding> *dateProvider; // ivar: _dateProvider
@property (retain, nonatomic) SBFLockScreenDateViewController *dateViewController; // ivar: _dateViewController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings; // ivar: _legibilitySettings
@property (retain, nonatomic) SBFLockScreenDateViewController *secondaryDateViewController; // ivar: _secondaryDateViewController
@property (retain, nonatomic) CSMagSafeAccessorySleeveView *sleeveView; // ivar: _sleeveView
@property (readonly) Class superclass;
@property (nonatomic) CGRect visibleBounds; // ivar: _visibleBounds


-(BOOL)handleEvent:(id)arg0 ;
-(BOOL)hasChargingAnimation;
-(BOOL)isStatic;
-(BOOL)showingChargingAnimation;
-(CGFloat)animationDurationBeforeDismissal;
-(CGFloat)chargingAnimationDuration;
-(id)_legibilitySettingsForAccessory:(id)arg0 ;
-(id)accessoryView;
-(id)initWithAccessory:(id)arg0 ;
-(void)_removeOverrideFloor;
-(void)_updateOverrideFloor;
-(void)connectedDevicesDidChange:(id)arg0 ;
-(void)transitionChargingViewVisible:(BOOL)arg0 chargingInfo:(id)arg1 ;
-(void)updateFont:(id)arg0 textColor:(id)arg1 vibrancyConfiguration:(id)arg2 numberingSystem:(id)arg3 ;
-(void)updateViewWithBatteryCharging:(BOOL)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif