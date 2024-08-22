// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSYSTEMSTATUSBATTERYDATAPROVIDER_H
#define SBSYSTEMSTATUSBATTERYDATAPROVIDER_H

@class STBatteryStatusDomainPublisher, BCBatteryDeviceController, NSString;
@protocol BCBatteryDeviceObserving, BSInvalidatable;

#import <Foundation/Foundation.h>


@interface SBSystemStatusBatteryDataProvider : NSObject <BCBatteryDeviceObserving, BSInvalidatable>



@property (readonly, nonatomic) STBatteryStatusDomainPublisher *batteryDataPublisher; // ivar: _batteryDataPublisher
@property (readonly, nonatomic) BCBatteryDeviceController *batteryDeviceController; // ivar: _batteryDeviceController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL shouldExposeNotChargingState; // ivar: _shouldExposeNotChargingState
@property (readonly) Class superclass;


-(BOOL)_isInNotChargingState;
-(id)init;
-(void)_noteNotChargingStatusChanged;
-(void)_registerForNotifications;
-(void)_updateData;
-(void)_updateShouldExposeNotChargingState;
-(void)connectedDevicesDidChange:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif