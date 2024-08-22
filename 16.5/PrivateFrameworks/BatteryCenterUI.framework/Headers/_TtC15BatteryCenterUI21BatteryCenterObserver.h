// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC15BATTERYCENTERUI21BATTERYCENTEROBSERVER_H
#define _TTC15BATTERYCENTERUI21BATTERYCENTEROBSERVER_H

@protocol BCBatteryDeviceObserving;

#import <Foundation/Foundation.h>


@interface _TtC15BatteryCenterUI21BatteryCenterObserver : NSObject <BCBatteryDeviceObserving>

 {
    ? dispatchQueue;
    ? batteryController;
    ? subject;
}




-(id)init;
-(void)connectedDevicesDidChange:(id)arg0 ;


@end


#endif