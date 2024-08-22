// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFSETTINGSINTENTHANDLER_H
#define WFSETTINGSINTENTHANDLER_H

@class NSString;
@protocol WFSetAirplaneModeIntentHandling, WFSetWiFiIntentHandling, WFSetBluetoothIntentHandling, WFSetCellularDataIntentHandling, WFSetLowPowerModeIntentHandling, WFSetBrightnessIntentHandling, WFSetFlashlightIntentHandling, WFSetAppearanceIntentHandling, WFSetOrientationLockIntentHandling;

#import <Foundation/Foundation.h>


@interface WFSettingsIntentHandler : NSObject <WFSetAirplaneModeIntentHandling, WFSetWiFiIntentHandling, WFSetBluetoothIntentHandling, WFSetCellularDataIntentHandling, WFSetLowPowerModeIntentHandling, WFSetBrightnessIntentHandling, WFSetFlashlightIntentHandling, WFSetAppearanceIntentHandling, WFSetOrientationLockIntentHandling>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)createSettingsClientForIntent:(id)arg0 completionHandler:(id)arg1 ;
-(void)handleSetAirplaneMode:(id)arg0 completion:(id)arg1 ;
-(void)handleSetAppearance:(id)arg0 completion:(id)arg1 ;
-(void)handleSetBluetooth:(id)arg0 completion:(id)arg1 ;
-(void)handleSetBrightness:(id)arg0 completion:(id)arg1 ;
-(void)handleSetCellularData:(id)arg0 completion:(id)arg1 ;
-(void)handleSetFlashlight:(id)arg0 completion:(id)arg1 ;
-(void)handleSetLowPowerMode:(id)arg0 completion:(id)arg1 ;
-(void)handleSetOrientationLock:(id)arg0 completion:(id)arg1 ;
-(void)handleSetWiFi:(id)arg0 completion:(id)arg1 ;
-(void)performSettingIntent:(id)arg0 completionHandler:(id)arg1 ;
-(void)resolveOperationForSetAirplaneMode:(id)arg0 withCompletion:(id)arg1 ;
-(void)resolveOperationForSetAppearance:(id)arg0 withCompletion:(id)arg1 ;
-(void)resolveOperationForSetBluetooth:(id)arg0 withCompletion:(id)arg1 ;
-(void)resolveOperationForSetCellularData:(id)arg0 withCompletion:(id)arg1 ;
-(void)resolveOperationForSetFlashlight:(id)arg0 withCompletion:(id)arg1 ;
-(void)resolveOperationForSetLowPowerMode:(id)arg0 withCompletion:(id)arg1 ;
-(void)resolveOperationForSetWiFi:(id)arg0 withCompletion:(id)arg1 ;
-(void)resolveStateForSetAirplaneMode:(id)arg0 withCompletion:(id)arg1 ;
-(void)resolveStateForSetBluetooth:(id)arg0 withCompletion:(id)arg1 ;
-(void)resolveStateForSetCellularData:(id)arg0 withCompletion:(id)arg1 ;
-(void)resolveStateForSetFlashlight:(id)arg0 withCompletion:(id)arg1 ;
-(void)resolveStateForSetLowPowerMode:(id)arg0 withCompletion:(id)arg1 ;
-(void)resolveStateForSetWiFi:(id)arg0 withCompletion:(id)arg1 ;
-(void)resolveStyleForSetAppearance:(id)arg0 withCompletion:(id)arg1 ;
-(void)resolveValueForSetBrightness:(id)arg0 withCompletion:(id)arg1 ;
-(void)resolveValueForSetFlashlight:(id)arg0 withCompletion:(id)arg1 ;


@end


#endif