// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDFITNESSMACHINEDATAPRODUCER_H
#define HDFITNESSMACHINEDATAPRODUCER_H

@class HKQuantity, NSString;
@protocol HDWorkoutDataAccumulatorObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "_HDFTMProducerMetricTracker.h"
#import "HDEurotasData.h"
#import "HDProfile.h"

@interface HDFitnessMachineDataProducer : NSObject <HDWorkoutDataAccumulatorObserver>

 {
    NSObject<OS_dispatch_queue> *_queue;
    NSUInteger _sessionIdentifier;
    HKQuantity *_totalActiveEnergy;
    HKQuantity *_totalBasalEnergy;
    HKQuantity *_latestHeartRate;
    HKQuantity *_averageHeartRate;
    _HDFTMProducerMetricTracker *_heartRateTracker;
    BOOL _heartRateEnabled;
    HDEurotasData *_previousEurotasData;
    HDProfile *_profile;
}


@property (readonly, nonatomic) BOOL attached;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithProfile:(id)arg0 ;
-(void)attachHealthServiceSession:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)deliverFinalValuesAndDetachWithCompletion:(id)arg0 ;
-(void)detachHealthServiceSession;
-(void)pauseCurrentSession;
-(void)resumeCurrentSession;
-(void)sendInitialValues;
-(void)workoutDataAccumulator:(id)arg0 didUpdateStatistics:(id)arg1 ;


@end


#endif