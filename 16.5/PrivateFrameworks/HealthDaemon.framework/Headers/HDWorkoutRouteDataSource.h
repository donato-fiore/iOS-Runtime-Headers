// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDWORKOUTROUTEDATASOURCE_H
#define HDWORKOUTROUTEDATASOURCE_H

@class HKDataFlowLink, HKUnit, HKQuantity, NSUUID, NSString;
@protocol HDWorkoutSessionObserver, HDLocationEventDelegate, HKDataFlowLinkProcessor, HKWorkoutRouteDataSourceServerInterface, HDWorkoutDataSource, OS_dispatch_queue;


#import "HDStandardTaskServer.h"
#import "HDWorkoutSessionServer.h"
#import "HDLocationDataCollector.h"

@interface HDWorkoutRouteDataSource : HDStandardTaskServer <HDWorkoutSessionObserver, HDLocationEventDelegate, HKDataFlowLinkProcessor, HKWorkoutRouteDataSourceServerInterface, HDWorkoutDataSource>

 {
    HDWorkoutSessionServer *_sessionServer;
    HDLocationDataCollector *_locationDataCollector;
    HKDataFlowLink *_workoutDataFlowLink;
    HKUnit *_elevationUnit;
    HKQuantity *_currentElevation;
    HKQuantity *_latestAltitude;
    NSUUID *_workoutUUID;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;
@property (readonly) HKDataFlowLink *workoutDataFlowLink;
@property (readonly, copy) NSUUID *workoutDataProcessorUUID;


+(id)requiredEntitlements;
+(id)taskIdentifier;
-(id)_queue_createLocationDataCollectorWithConfiguration:(id)arg0 workoutUUID:(id)arg1 ;
-(id)_unitTest_locationDataCollector;
-(id)exportedInterface;
-(id)initWithUUID:(id)arg0 configuration:(id)arg1 client:(id)arg2 delegate:(id)arg3 ;
-(id)remoteInterface;
-(void)altitudeUpdated:(CGFloat)arg0 ;
-(void)connectionInvalidated;
-(void)elevationUpdated:(NSUInteger)arg0 ;
-(void)remote_setupWithSessionIdentifier:(id)arg0 ;
-(void)workoutDataDestination:(id)arg0 didBeginActivity:(id)arg1 ;
-(void)workoutDataDestination:(id)arg0 didChangeFromState:(NSUInteger)arg1 toState:(NSUInteger)arg2 ;
-(void)workoutDataDestination:(id)arg0 didEndActivity:(id)arg1 ;
-(void)workoutDataDestination:(id)arg0 didUpdateConfiguration:(id)arg1 ;
-(void)workoutDataDestination:(id)arg0 requestsDataFrom:(id)arg1 to:(id)arg2 ;
-(void)workoutDataDestination:(id)arg0 requestsFinalDataFrom:(id)arg1 to:(id)arg2 completion:(id)arg3 ;
-(void)workoutRouteUpdated:(id)arg0 ;
-(void)workoutSession:(id)arg0 didChangeToState:(NSInteger)arg1 fromState:(NSInteger)arg2 date:(id)arg3 ;
-(void)workoutSession:(id)arg0 didFailWithError:(id)arg1 ;
-(void)workoutSession:(id)arg0 didGenerateEvent:(id)arg1 ;


@end


#endif