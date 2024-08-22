// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MNARRIVALUPDATER_H
#define MNARRIVALUPDATER_H

@class GEOComposedRoute, NSMutableArray, NSTimer, NSString;
@protocol GEOPListStateCapturing, MNArrivalRegionTimerDelegate, MNEVChargingStateMonitorDelegate;

#import <Foundation/Foundation.h>

#import "MNObserverHashTable.h"
#import "MNLocation.h"
#import "MNEVChargingStateMonitor.h"
#import "MNDepartureUpdater.h"

@interface MNArrivalUpdater : NSObject <GEOPListStateCapturing, MNArrivalRegionTimerDelegate, MNEVChargingStateMonitorDelegate>

 {
    MNObserverHashTable *_safeDelegate;
    GEOComposedRoute *_route;
    MNLocation *_lastLocation;
    NSUInteger _arrivalLegIndex;
    NSMutableArray *_timeoutRegions;
    MNEVChargingStateMonitor *_evChargingStateMonitor;
    BOOL _isCharging;
    MNDepartureUpdater *_departureUpdater;
    NSTimer *_departureTimer;
    NSUInteger _stateCaptureHandle;
}


@property (nonatomic) NSUInteger arrivalState; // ivar: _arrivalState
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isApproachingWaypoint; // ivar: _isApproachingWaypoint
@property (readonly, nonatomic) BOOL isInPreArrivalRegion;
@property (readonly) Class superclass;


-(BOOL)_checkApproachingForLocation:(id)arg0 ;
-(BOOL)_checkArrival:(id)arg0 forLocation:(id)arg1 ;
-(BOOL)_checkPreArrival:(id)arg0 forLocation:(id)arg1 ;
-(BOOL)allowDepartureForLocation:(id)arg0 ;
-(CGFloat)_distanceToEndOfLeg:(id)arg0 fromLocation:(id)arg1 ;
-(id)captureStatePlistWithHints:(struct os_state_hints_s *)arg0 ;
-(id)init;
-(id)initWithRoute:(id)arg0 ;
-(void)_setArrivalForLegIndex:(NSUInteger)arg0 ;
-(void)_startMonitoringBatteryChargeForLegIndex:(NSUInteger)arg0 ;
-(void)_updateForDepartureFromWaypointWithReason:(NSUInteger)arg0 ;
-(void)arrivalRegionTimerDidFire:(id)arg0 ;
-(void)dealloc;
-(void)evChargingStateMonitor:(id)arg0 didChangeChargingState:(BOOL)arg1 ;
-(void)evChargingStateMonitor:(id)arg0 didReachTargetBatteryCharge:(id)arg1 ;
-(void)evChargingStateMonitorShouldShowChargingInfo:(id)arg0 ;
-(void)forceDepartureForCurrentLeg:(NSUInteger)arg0 ;
-(void)setDelegate:(id)arg0 ;
-(void)setIsCharging:(BOOL)arg0 location:(id)arg1 ;
-(void)updateForLocation:(id)arg0 ;
-(void)updateForRoute:(id)arg0 ;


@end


#endif