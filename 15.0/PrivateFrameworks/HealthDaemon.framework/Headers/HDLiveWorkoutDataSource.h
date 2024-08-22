// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDLIVEWORKOUTDATASOURCE_H
#define HDLIVEWORKOUTDATASOURCE_H

@class HKDataFlowLink, HKWorkoutDataSourceConfiguration, NSLock, NSString, NSUUID;
@protocol HKLiveWorkoutDataSourceServerInterface, HKDataFlowLinkProcessor, HDWorkoutDataSource, HDWorkoutDataDestination, HDWorkoutDataAccumulator;


#import "HDStandardTaskServer.h"
#import "HDProfile.h"
#import "HDWorkoutBasicDataSource.h"

@interface HDLiveWorkoutDataSource : HDStandardTaskServer <HKLiveWorkoutDataSourceServerInterface, HKDataFlowLinkProcessor, HDWorkoutDataSource, HDWorkoutDataDestination>

 {
    HDProfile *_profile;
    HKDataFlowLink *_workoutDataFlowLink;
    HKWorkoutDataSourceConfiguration *_dataSourceConfiguration;
    HDWorkoutBasicDataSource *_basicDataSource;
    NSLock *_lock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<HDWorkoutDataAccumulator> *workoutDataAccumulator;
@property (readonly) NSUInteger workoutDataDestinationState;
@property (readonly) HKDataFlowLink *workoutDataFlowLink;
@property (readonly, copy) NSUUID *workoutDataProcessorUUID;


+(BOOL)validateConfiguration:(id)arg0 client:(id)arg1 error:(*id)arg2 ;
+(Class)configurationClass;
+(id)requiredEntitlements;
+(id)taskIdentifier;
-(id)exportedInterface;
-(id)initWithUUID:(id)arg0 configuration:(id)arg1 client:(id)arg2 delegate:(id)arg3 ;
-(id)remoteInterface;
-(void)addMetadata:(id)arg0 dataSource:(id)arg1 ;
-(void)addSamples:(id)arg0 dataSource:(id)arg1 ;
-(void)addWorkoutEvents:(id)arg0 dataSource:(id)arg1 ;
-(void)connectionInvalidated;
-(void)remote_setDataSourceConfiguration:(id)arg0 ;
-(void)remote_startTaskServerIfNeeded;
-(void)updateWorkoutConfiguration:(id)arg0 dataSource:(id)arg1 ;
-(void)workoutDataDestination:(id)arg0 didChangeFromState:(NSUInteger)arg1 toState:(NSUInteger)arg2 ;
-(void)workoutDataDestination:(id)arg0 didUpdateConfiguration:(id)arg1 ;
-(void)workoutDataDestination:(id)arg0 requestsDataFrom:(id)arg1 to:(id)arg2 ;
-(void)workoutDataDestination:(id)arg0 requestsFinalDataFrom:(id)arg1 to:(id)arg2 completion:(id)arg3 ;


@end


#endif