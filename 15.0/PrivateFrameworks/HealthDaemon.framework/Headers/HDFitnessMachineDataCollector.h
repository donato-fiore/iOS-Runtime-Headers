// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDFITNESSMACHINEDATACOLLECTOR_H
#define HDFITNESSMACHINEDATACOLLECTOR_H

@class NSMapTable, NSMutableDictionary, NSDate, NSMutableArray, NSSet, NSString, HKDevice, HKSource, CMFitnessMachine, HKObserverSet;
@protocol HDDataCollector, HDMetricsCollector, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HDDataCollectorConfiguration.h"
#import "HDProfile.h"

@interface HDFitnessMachineDataCollector : NSObject <HDDataCollector, HDMetricsCollector>

 {
    NSUInteger _fitnessMachineType;
    NSMapTable *_aggregators;
    NSObject<OS_dispatch_queue> *_queue;
    HDDataCollectorConfiguration *_configuration;
    NSMutableDictionary *_previousDatums;
    NSMutableDictionary *_previousWorkoutMetrics;
    NSDate *_approximatedStartDate;
    NSMutableArray *_bufferedCharacteristics;
    NSSet *_localDevicePreferredObjectTypes;
    NSMutableDictionary *_bufferedMetrics;
    NSString *_machineBrand;
    HKDevice *_device;
    HKSource *_source;
    CMFitnessMachine *_cmFitnessMachine;
    HDProfile *_profile;
    HKObserverSet *_metricsCollectorObservers;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSDate *machinePreferredUntilDate; // ivar: _machinePreferredUntilDate
@property (readonly) Class superclass;


-(CGFloat)preferredAggregationIntervalForAggregator:(id)arg0 ;
-(id)identifierForDataAggregator:(id)arg0 ;
-(id)initWithFitnessMachineType:(NSUInteger)arg0 profile:(id)arg1 ;
-(id)sourceForDataAggregator:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)beginCollectionForDataAggregator:(id)arg0 lastPersistedSensorDatum:(id)arg1 ;
-(void)dataAggregator:(id)arg0 wantsCollectionWithConfiguration:(id)arg1 ;
-(void)handleDataCharacteristic:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)setMachineBrand:(id)arg0 ;
-(void)setMachineStartDate:(id)arg0 ;
-(void)tearDown;
-(void)unitTest_processDatumsByMetric:(id)arg0 ;


@end


#endif