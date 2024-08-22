// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MNEVCHARGINGSTATEMONITOR_H
#define MNEVCHARGINGSTATEMONITOR_H

@class NSDate, NSTimer, NSString, NSMeasurement;
@protocol MNVirtualGarageManagerObserver, MNEVChargingStateMonitorDelegate;

#import <Foundation/Foundation.h>


@interface MNEVChargingStateMonitor : NSObject <MNVirtualGarageManagerObserver>

 {
    BOOL _isCharging;
    BOOL _shouldShowChargingInfo;
    NSDate *_arrivalDate;
    NSTimer *_timer;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MNEVChargingStateMonitorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSMeasurement *targetBatteryCharge; // ivar: _targetBatteryCharge


-(id)initWithTargetBatteryCharge:(id)arg0 ;
-(void)_notifyShouldShowChargingInfo;
-(void)_startTimer;
-(void)_updateForVehicle:(id)arg0 forceDelegateCallback:(BOOL)arg1 ;
-(void)dealloc;
-(void)updateForArrival;
-(void)updateForLocation:(id)arg0 ;
-(void)virtualGarageManager:(id)arg0 didUpdateSelectedVehicle:(id)arg1 ;


@end


#endif