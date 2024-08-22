// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BCBATTERYDEVICECONTROLLER_H
#define BCBATTERYDEVICECONTROLLER_H

@class NSArray, NSString;
@protocol BCBatteryDeviceObservable;

#import <Foundation/Foundation.h>


@interface BCBatteryDeviceController : NSObject <BCBatteryDeviceObservable>



@property (readonly, copy, nonatomic) NSArray *connectedDevices;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_sharedPowerSourceController;
-(id)init;
-(void)addBatteryDeviceObserver:(id)arg0 queue:(id)arg1 ;
-(void)removeBatteryDeviceObserver:(id)arg0 ;


@end


#endif