// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBLOCKSCREENBATTERYCHARGINGVIEWCONTROLLER_H
#define SBLOCKSCREENBATTERYCHARGINGVIEWCONTROLLER_H

@class CSCoverSheetViewControllerBase, CSBatteryChargingView, NSTimer, NSMutableArray, BCBatteryDeviceController, NSString;
@protocol BCBatteryDeviceObserving, SBLockScreenBatteryChargingViewControllerDelegate;



@interface SBLockScreenBatteryChargingViewController : CSCoverSheetViewControllerBase <BCBatteryDeviceObserving>

 {
    BOOL _shouldDisplayBattery;
    CSBatteryChargingView *_chargingView;
    NSTimer *_visibilityTimer;
    NSMutableArray *_connectedDevices;
    BCBatteryDeviceController *_batteryDeviceController;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBLockScreenBatteryChargingViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)batteryVisible;
-(NSInteger)presentationStyle;
-(id)chargingView;
-(id)initForDisplayOfBattery:(BOOL)arg0 ;
-(void)_clearVisibilityTimer;
-(void)_visibilityTimerFired:(id)arg0 ;
-(void)connectedDevicesDidChange:(id)arg0 ;
-(void)dealloc;
-(void)loadView;
-(void)prepareForDismissalWithAnimation:(BOOL)arg0 ;
-(void)presentWithAnimation:(BOOL)arg0 ;
-(void)showChargeLevelWithBatteryVisible:(BOOL)arg0 ;


@end


#endif