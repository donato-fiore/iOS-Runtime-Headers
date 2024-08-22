// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDWORKOUTBASICDATASOURCE_H
#define HDWORKOUTBASICDATASOURCE_H

@class NSLock, HKDataFlowLink, NSUUID, HKWorkoutConfiguration, NSSet, NSString;
@protocol HDQuantitySeriesObserver, HKDataFlowLinkProcessor, HDClientDataCollectionObservationStateMonitorDelegate, HDWorkoutDataSource;

#import <Foundation/Foundation.h>

#import "HDProfile.h"
#import "HDHealthStoreClient.h"
#import "HDDataCollectionAssertion.h"
#import "HDClientDataCollectionObservationStateMonitor.h"

@interface HDWorkoutBasicDataSource : NSObject <HDQuantitySeriesObserver, HKDataFlowLinkProcessor, HDClientDataCollectionObservationStateMonitorDelegate, HDWorkoutDataSource>

 {
    HDProfile *_profile;
    HDHealthStoreClient *_client;
    NSLock *_lock;
    HKDataFlowLink *_workoutDataFlowLink;
    NSUUID *_workoutDataProcessorUUID;
    HKWorkoutConfiguration *_workoutConfiguration;
    NSSet *_sampleTypesToCollect;
    HDDataCollectionAssertion *_collectionAssertion;
    HDClientDataCollectionObservationStateMonitor *_clientStateMonitor;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSSet *sampleTypesToCollect;
@property (readonly) Class superclass;
@property (readonly) HKDataFlowLink *workoutDataFlowLink;
@property (readonly, copy) NSUUID *workoutDataProcessorUUID;


-(id)initWithConfiguration:(id)arg0 client:(id)arg1 ;
-(id)transactionalQuantityInsertHandlerForProfile:(SEL)arg0 journaled:(id)arg1 count:(BOOL)arg2 ;
-(void)dataCollectionObservationStateDidChangeForClient:(id)arg0 ;
-(void)dealloc;
-(void)profile:(id)arg0 didDiscardSeriesOfType:(id)arg1 ;
-(void)setWorkoutConfiguration:(id)arg0 ;
-(void)workoutDataDestination:(id)arg0 didBeginActivity:(id)arg1 ;
-(void)workoutDataDestination:(id)arg0 didChangeFromState:(NSUInteger)arg1 toState:(NSUInteger)arg2 ;
-(void)workoutDataDestination:(id)arg0 didEndActivity:(id)arg1 ;
-(void)workoutDataDestination:(id)arg0 didUpdateConfiguration:(id)arg1 ;
-(void)workoutDataDestination:(id)arg0 requestsDataFrom:(id)arg1 to:(id)arg2 ;
-(void)workoutDataDestination:(id)arg0 requestsFinalDataFrom:(id)arg1 to:(id)arg2 completion:(id)arg3 ;


@end


#endif