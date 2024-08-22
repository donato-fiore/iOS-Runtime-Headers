// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLDISCRETIONARYENERGYMONITOR_H
#define PLDISCRETIONARYENERGYMONITOR_H

@class NSDictionary, NSMutableDictionary, NSDate, NSMutableArray;
@protocol OS_dispatch_source, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PLDiscretionaryIntervalManager.h"

@interface PLDiscretionaryEnergyMonitor : NSObject

@property CGFloat accumulatedCPUEnergy; // ivar: _accumulatedCPUEnergy
@property CGFloat accumulatedNetworkEnergy; // ivar: _accumulatedNetworkEnergy
@property (copy, nonatomic) id *completionBlock; // ivar: _completionBlock
@property BOOL debugMode; // ivar: _debugMode
@property (retain) PLDiscretionaryIntervalManager *intervalManager; // ivar: _intervalManager
@property BOOL isCharging; // ivar: _isCharging
@property (retain, nonatomic) NSDictionary *lastPowerlogResponse; // ivar: _lastPowerlogResponse
@property (nonatomic) CGFloat lastReportedCPUEnergy; // ivar: _lastReportedCPUEnergy
@property (nonatomic) CGFloat lastReportedNetworkEnergy; // ivar: _lastReportedNetworkEnergy
@property (nonatomic) CGFloat lastReportedTotalEnergy; // ivar: _lastReportedTotalEnergy
@property (retain) NSMutableDictionary *mockData; // ivar: _mockData
@property CGFloat powerlogEnergyDiff; // ivar: _powerlogEnergyDiff
@property CGFloat powerlogEnergyLast; // ivar: _powerlogEnergyLast
@property CGFloat powerlogEnergyPrevious; // ivar: _powerlogEnergyPrevious
@property (retain, nonatomic) NSObject<OS_dispatch_source> *powerlogQueryTimer; // ivar: _powerlogQueryTimer
@property (retain) NSDate *powerlogTimestampLast; // ivar: _powerlogTimestampLast
@property (retain) NSDate *powerlogTimestampPrevious; // ivar: _powerlogTimestampPrevious
@property (retain, nonatomic) NSObject<OS_dispatch_source> *quickEnergyAccumulatorTimer; // ivar: _quickEnergyAccumulatorTimer
@property (retain, nonatomic) NSMutableArray *quickEnergySnapshots; // ivar: _quickEnergySnapshots
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(CGFloat)getDiscretionaryEnergyBudget;
-(CGFloat)getPowerlogEnergySum:(id)arg0 ;
-(id)createPowerlogQueryTimer;
-(id)createQuickEnergyAccumulatorTimer;
-(id)initWithCompletionBlock:(id)arg0 ;
-(id)initWithDebugMode:(BOOL)arg0 andMockData:(id)arg1 andCompletionBlock:(id)arg2 ;
-(void)accumulateQuickEnergy;
-(void)generateEnergyReport;
-(void)incrementCPUEnergy:(CGFloat)arg0 ;
-(void)incrementNetworkEnergy:(CGFloat)arg0 ;
-(void)logEnergyReport:(id)arg0 ;
-(void)logPowerlogResponse:(id)arg0 ;
-(void)logQuickEnergySnapshots;
-(void)queryPowerlogForDiscretionaryEnergy;
-(void)reportChargingStatus:(BOOL)arg0 ;
-(void)reportStartEvent:(id)arg0 withInfo:(id)arg1 ;
-(void)reportStopEvent:(id)arg0 withInfo:(id)arg1 ;
-(void)runCompletionBlockWithEnergyResponse:(id)arg0 ;
-(void)setStateForNotification:(id)arg0 withState:(id)arg1 ;
-(void)setupNotificationListeners;
-(void)testHighVolumeStartStopReporting:(id)arg0 withInfo:(id)arg1 withNumIterations:(CGFloat)arg2 ;
-(void)updateMockData:(id)arg0 ;


@end


#endif