// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDDATAAGGREGATOR_H
#define HDDATAAGGREGATOR_H

@class NSMapTable, NSDate, NSString, HKObjectType;
@protocol HDHealthDaemonReadyObserver;

#import <Foundation/Foundation.h>

#import "HDDataAggregatorConfiguration.h"
#import "HDDataCollectionManager.h"

@interface HDDataAggregator : NSObject <HDHealthDaemonReadyObserver>

 {
    os_unfair_lock_s _lock;
    os_unfair_lock_s _configurationLock;
    NSMapTable *_lock_collectorRegistry;
    HDDataAggregatorConfiguration *_lock_configuration;
    uint8_t _hasStartedCollectors;
    BOOL _lock_canStartCollectors;
    NSDate *_unitTest_lastObliterationDate;
}


@property (copy) HDDataAggregatorConfiguration *configuration;
@property (readonly, weak, nonatomic) HDDataCollectionManager *dataCollectionManager; // ivar: _dataCollectionManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) HKObjectType *objectType;
@property (readonly) Class superclass;


-(BOOL)didPersistObjects:(id)arg0 lastDatum:(id)arg1 collector:(id)arg2 error:(*id)arg3 ;
-(BOOL)doesDatumPredateDatabaseObliteration:(id)arg0 ;
-(BOOL)persistForCollector:(id)arg0 usedDatums:(id)arg1 source:(id)arg2 device:(id)arg3 error:(*id)arg4 persistenceHandler:(id)arg5 ;
-(BOOL)persistObjects:(id)arg0 usedDatums:(id)arg1 collector:(id)arg2 source:(id)arg3 device:(id)arg4 resolveAssociations:(BOOL)arg5 error:(*id)arg6 ;
-(id)allCollectors;
-(id)configurationForCollector:(id)arg0 ;
-(id)diagnosticDescription;
-(id)initWithDataCollectionManager:(id)arg0 ;
-(void)daemonReady:(id)arg0 ;
-(void)dataCollector:(id)arg0 didChangeState:(id)arg1 ;
-(void)dataCollector:(id)arg0 didCollectSensorData:(id)arg1 device:(id)arg2 ;
-(void)dataCollector:(id)arg0 didCollectSensorDatum:(id)arg1 device:(id)arg2 ;
-(void)recomputeCollectorConfiguration;
-(void)registerDataCollector:(id)arg0 state:(id)arg1 ;
-(void)requestAggregationThroughDate:(id)arg0 mode:(NSInteger)arg1 options:(NSUInteger)arg2 completion:(id)arg3 ;
-(void)resume;
-(void)unitTest_setLastObliterationDate:(id)arg0 ;
-(void)unregisterDataCollector:(id)arg0 ;


@end


#endif