// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDMOCKWORKOUTDATADESTINATION_H
#define HDMOCKWORKOUTDATADESTINATION_H

@class HKDataFlowLink, NSUUID, NSMutableArray, NSString, HKWorkoutConfiguration;
@protocol HKDataFlowLinkProcessor, HDWorkoutDataDestination, HDWorkoutDataAccumulator;

#import <Foundation/Foundation.h>

#import "HDProfile.h"

@interface HDMockWorkoutDataDestination : NSObject <HKDataFlowLinkProcessor, HDWorkoutDataDestination>

 {
    HKDataFlowLink *_workoutDataFlowLink;
    NSUUID *_dataProcessorUUID;
}


@property (retain, nonatomic) NSMutableArray *dataSources; // ivar: _dataSources
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy) id *eventHandler; // ivar: _eventHandler
@property (readonly) NSUInteger hash;
@property (copy) id *metadataHandler; // ivar: _metadataHandler
@property (retain, nonatomic) HDProfile *profile; // ivar: _profile
@property (copy) id *sampleHandler; // ivar: _sampleHandler
@property (readonly) Class superclass;
@property (copy) id *updateconfigurationHandler; // ivar: _updateconfigurationHandler
@property (retain, nonatomic) HKWorkoutConfiguration *workoutConfiguration; // ivar: _workoutConfiguration
@property (readonly, nonatomic) NSObject<HDWorkoutDataAccumulator> *workoutDataAccumulator; // ivar: workoutDataAccumulator
@property NSUInteger workoutDataDestinationState; // ivar: _workoutDataDestinationState
@property (readonly) HKDataFlowLink *workoutDataFlowLink;
@property (readonly, copy) NSUUID *workoutDataProcessorUUID;


-(id)initWithQueue:(id)arg0 profile:(id)arg1 workoutConfiguration:(id)arg2 ;
-(void)addMetadata:(id)arg0 dataSource:(id)arg1 ;
-(void)addSamples:(id)arg0 dataSource:(id)arg1 ;
-(void)addWorkoutEvents:(id)arg0 dataSource:(id)arg1 ;
-(void)updateWorkoutConfiguration:(id)arg0 dataSource:(id)arg1 ;


@end


#endif