// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MNVEHICLEMONITOR_H
#define MNVEHICLEMONITOR_H

@protocol MNVehicleMonitorDelegate;

#import <Foundation/Foundation.h>


@interface MNVehicleMonitor : NSObject {
    int _vehicleConnectedToken;
    int _vehicleDisconnectedToken;
    BOOL _isMonitoring;
}


@property (weak, nonatomic) NSObject<MNVehicleMonitorDelegate> *delegate; // ivar: _delegate


-(void)dealloc;
-(void)startMonitoring;
-(void)stopMonitoring;


@end


#endif