// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLDISCRETIONARYINTERVALMANAGER_H
#define PLDISCRETIONARYINTERVALMANAGER_H

@class NSMutableDictionary;
@protocol OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "PLDiscretionaryEnergyMonitor.h"

@interface PLDiscretionaryIntervalManager : NSObject

@property (retain) NSMutableDictionary *activityNameToInvolvedIdentifiers; // ivar: _activityNameToInvolvedIdentifiers
@property (weak, nonatomic) PLDiscretionaryEnergyMonitor *discretionaryEnergyMonitor; // ivar: _discretionaryEnergyMonitor
@property (retain) NSMutableDictionary *identifierToDiscretionaryIntervals; // ivar: _identifierToDiscretionaryIntervals
@property (retain) NSMutableDictionary *mockData; // ivar: _mockData
@property (retain, nonatomic) NSObject<OS_dispatch_source> *openIntervalTimer; // ivar: _openIntervalTimer
@property (retain, nonatomic) NSObject<OS_dispatch_source> *powerlogReportTimer; // ivar: _powerlogReportTimer
@property (nonatomic) BOOL quickEnergyEnabled; // ivar: _quickEnergyEnabled


-(id)coalesceIntervals:(id)arg0 ;
-(id)createOpenIntervalTimer;
-(id)createPowerlogReportTimer;
-(id)initWithEnergyMonitor:(id)arg0 andMockData:(id)arg1 ;
-(void)disableQuickEnergy;
-(void)enableQuickEnergy;
-(void)handleOpenIntervalTimer;
-(void)handlePowerlogReportTimer;
-(void)handleStartEvent:(id)arg0 withInfo:(id)arg1 ;
-(void)handleStopEvent:(id)arg0 withInfo:(id)arg1 ;
-(void)logActivityNameToInvolvedIdentifiers;
-(void)logDiscretionaryIntervals;
-(void)reportIntervalsToPowerlog;
-(void)reportQuickEnergyForInterval:(id)arg0 withIdentifier:(id)arg1 andAdjustSnapshotToNow:(BOOL)arg2 ;


@end


#endif