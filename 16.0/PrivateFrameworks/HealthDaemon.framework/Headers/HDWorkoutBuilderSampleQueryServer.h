// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDWORKOUTBUILDERSAMPLEQUERYSERVER_H
#define HDWORKOUTBUILDERSAMPLEQUERYSERVER_H

@class NSUUID, NSString;
@protocol HDTaskServerObserver, HDWorkoutBuilderServerSampleObserer, HDDatabaseProtectedDataObserver;


#import "HDQueryServer.h"
#import "HDWorkoutBuilderServer.h"

@interface HDWorkoutBuilderSampleQueryServer : HDQueryServer <HDTaskServerObserver, HDWorkoutBuilderServerSampleObserer, HDDatabaseProtectedDataObserver>

 {
    BOOL _hasFinishedHistoricalFetch;
    BOOL _hasDeliveredInitialResults;
    BOOL _deliverQuantities;
    NSUUID *_workoutBuilderIdentifier;
    HDWorkoutBuilderServer *_workoutBuilderServer;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)validateConfiguration:(id)arg0 client:(id)arg1 error:(*id)arg2 ;
+(Class)queryClass;
+(id)requiredEntitlements;
-(BOOL)_shouldExecuteWhenProtectedDataIsUnavailable;
-(BOOL)_shouldObserveDatabaseProtectedDataAvailability;
-(id)initWithUUID:(id)arg0 configuration:(id)arg1 client:(id)arg2 delegate:(id)arg3 ;
-(void)_queue_start;
-(void)database:(id)arg0 protectedDataDidBecomeAvailable:(BOOL)arg1 ;
-(void)didCreateTaskServer:(id)arg0 ;
-(void)didInvalidateTaskServer:(id)arg0 ;
-(void)workoutBuilderServer:(id)arg0 addedQuantities:(id)arg1 ;
-(void)workoutBuilderServer:(id)arg0 addedSamples:(id)arg1 ;


@end


#endif