// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLBACKGROUNDJOBSTATUSCENTER_H
#define PLBACKGROUNDJOBSTATUSCENTER_H

@class NSMutableArray, NSMutableSet, NSString, NSDictionary;
@protocol PLBackgroundJobServiceObserver;

#import <Foundation/Foundation.h>


@interface PLBackgroundJobStatusCenter : NSObject <PLBackgroundJobServiceObserver>

 {
    NSMutableArray *_registrationEventsQueue;
    NSMutableArray *_runningEventsQueue;
    NSMutableSet *_workersResponsibleForRegistration;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSDictionary *statusDumpDictionary;
@property (readonly) Class superclass;


-(id)init;
-(void)_addRegistrationEventToQueue:(id)arg0 ;
-(void)_addRunningEventToQueue:(id)arg0 ;
-(void)_recordNonRegistrationEvent;
-(void)_recordRegistrationEventToState:(NSUInteger)arg0 ;
-(void)backgroundJobServiceDidChangeStateFrom:(NSUInteger)arg0 to:(NSUInteger)arg1 ;
-(void)recordFinishingWorker:(id)arg0 ;
-(void)recordStartingWorker:(id)arg0 withJobCount:(NSUInteger)arg1 ;
-(void)recordStoppingWorker:(id)arg0 withRemainingJobCount:(NSUInteger)arg1 ;
-(void)recordWorkerHasPendingJobs:(id)arg0 ;


@end


#endif