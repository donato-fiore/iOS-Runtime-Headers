// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MNEVCHARGINGSTATEMONITOR_H
#define MNEVCHARGINGSTATEMONITOR_H

@class NSDate, NSTimer, NSMeasurement;
@protocol VGVirtualGarageObserver, MNEVChargingStateMonitorDelegate;

#import <Foundation/Foundation.h>


@interface MNEVChargingStateMonitor : NSObject <VGVirtualGarageObserver>

 {
    BOOL _isCharging;
    BOOL _shouldShowChargingInfo;
    NSDate *_arrivalDate;
    NSTimer *_timer;
}


@property (weak, nonatomic) NSObject<MNEVChargingStateMonitorDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSMeasurement *targetBatteryCharge; // ivar: _targetBatteryCharge


-(id)initWithTargetBatteryCharge:(id)arg0 ;
-(void)_consumeUpdatedVirtualGarage:(id)arg0 forceDelegateCallback:(BOOL)arg1 ;
-(void)_notifyShouldShowChargingInfo;
-(void)_startTimer;
-(void)dealloc;
-(void)updateForArrival;
-(void)updateForLocation:(id)arg0 ;
-(void)virtualGarageDidUpdate:(id)arg0 ;


@end


#endif