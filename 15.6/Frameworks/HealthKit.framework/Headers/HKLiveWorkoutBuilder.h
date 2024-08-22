// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKLIVEWORKOUTBUILDER_H
#define HKLIVEWORKOUTBUILDER_H

@class NSArray;
@protocol HKLiveWorkoutBuilderDelegate;


#import "HKWorkoutBuilder.h"
#import "HKLiveWorkoutDataSource.h"
#import "HKWorkoutSession.h"

@interface HKLiveWorkoutBuilder : HKWorkoutBuilder {
    HKLiveWorkoutDataSource *_dataSource;
    NSArray *_additionalDataSources;
}


@property (retain) NSArray *additionalDataSources;
@property (retain) HKLiveWorkoutDataSource *dataSource;
@property (weak) NSObject<HKLiveWorkoutBuilderDelegate> *delegate; // ivar: _delegate
@property (readonly) CGFloat elapsedTime;
@property BOOL shouldCollectWorkoutEvents;
@property (readonly, weak) HKWorkoutSession *workoutSession; // ivar: _workoutSession


-(id)_privateDelegate;
-(id)initWithHealthStore:(id)arg0 builderConfiguration:(id)arg1 builderIdentifier:(id)arg2 ;
-(id)initWithHealthStore:(id)arg0 session:(id)arg1 builderConfiguration:(id)arg2 builderIdentifier:(id)arg3 ;
-(void)_resourceQueue_updateElapsedTimeCache;
-(void)_resourceQueue_updateEvents:(id)arg0 ;
-(void)clientRemote_didUpdateMetadata:(id)arg0 ;
-(void)clientRemote_didUpdateStatistics:(id)arg0 ;
-(void)connectionInterrupted;
-(void)stateMachine:(id)arg0 didEnterState:(id)arg1 date:(id)arg2 error:(id)arg3 ;


@end


#endif