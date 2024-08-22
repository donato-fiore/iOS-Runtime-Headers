// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CMODOMETERPROXY_H
#define CMODOMETERPROXY_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CMOdometer.h"

@interface CMOdometerProxy : NSObject {
    NSObject<OS_dispatch_queue> *fInternalQueue;
    NSObject<OS_dispatch_queue> *fCallbackQueue;
    *void fLocationdConnection;
    id *fHandler;
    NSInteger fGpsAvailability;
}


@property CGFloat averageSpeed; // ivar: _averageSpeed
@property CGFloat cyclingStartDate; // ivar: _cyclingStartDate
@property (nonatomic) CMOdometer *odometer; // ivar: _odometer
@property CGFloat startDate; // ivar: _startDate
@property CGFloat totalCyclingDistance; // ivar: _totalCyclingDistance
@property CGFloat totalDistance; // ivar: _totalDistance


-(id)initWithOdometer:(id)arg0 ;
-(void)_startCyclingWorkoutDistanceUpdatesWithHandler:(id)arg0 ;
-(void)_startDaemonConnection;
-(void)_startOdometerUpdatesWithHandler:(id)arg0 ;
-(void)_stopCyclingWorkoutDistanceUpdates;
-(void)_stopOdometerUpdates;
-(void)_teardown;
-(void)dealloc;


@end


#endif