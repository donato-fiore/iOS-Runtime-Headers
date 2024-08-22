// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDACCESSORYFIRMWAREUPDATEMANAGERWINGMAN_H
#define HMDACCESSORYFIRMWAREUPDATEMANAGERWINGMAN_H

@class UARPController;
@protocol HMDAccessoryFirmwareUpdateManagerWingman;

#import <Foundation/Foundation.h>


@interface HMDAccessoryFirmwareUpdateManagerWingman : NSObject <HMDAccessoryFirmwareUpdateManagerWingman>



@property (readonly, nonatomic) CGFloat registerDelay; // ivar: _registerDelay
@property (readonly, nonatomic) UARPController *uarpController; // ivar: _uarpController


-(id)init;
-(id)newAccessoryFirmwareUpdateSessionWithHAPAccessory:(id)arg0 uarpAccessory:(id)arg1 accessoryFirmwareUpdateManager:(id)arg2 logEventManager:(id)arg3 ;


@end


#endif