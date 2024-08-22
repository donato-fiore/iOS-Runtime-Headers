// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VNREQUESTPERFORMER_H
#define VNREQUESTPERFORMER_H

@class NSMutableArray, NSMutableDictionary;
@protocol VNRequestCancelling;

#import <Foundation/Foundation.h>


@interface VNRequestPerformer : NSObject <VNRequestCancelling>

 {
    os_unfair_lock_s _requestLock;
    NSMutableArray *_requestsInFlight;
    NSMutableArray *_requestsPending;
    NSMutableDictionary *_sequencedRequestObservations;
}




+(id)_requestPerformingQueuePriorityGroup1;
+(id)_requestPerformingQueuePriorityGroup2;
-(BOOL)_performOrderedRequests:(id)arg0 inContext:(id)arg1 error:(*id)arg2 ;
-(BOOL)_performRequests:(id)arg0 onBehalfOfRequest:(id)arg1 inContext:(id)arg2 error:(*id)arg3 ;
-(BOOL)_validateAndPrepareRequests:(id)arg0 error:(*id)arg1 ;
-(BOOL)performDependentRequests:(id)arg0 onBehalfOfRequest:(id)arg1 inContext:(id)arg2 error:(*id)arg3 ;
-(BOOL)performRequests:(id)arg0 inContext:(id)arg1 error:(*id)arg2 ;
-(id)dependencyAnalyzedRequestsForRequests:(id)arg0 withPerformingContext:(id)arg1 error:(*id)arg2 ;
-(id)init;
-(id)orderedRequestsForRequests:(id)arg0 ;
-(id)previousSequencedObservationsForRequest:(id)arg0 ;
-(void)_groupOrderedRequests:(id)arg0 ordinality:(id)arg1 ordinalityAndPriorityGroups:(id)arg2 ;
-(void)_groupsRequestsWithTheSameOrdinality:(id)arg0 priorityGroup1:(id)arg1 priorityGroup2:(id)arg2 ;
-(void)cancelAllRequests;
-(void)recordSequencedObservationsForRequest:(id)arg0 ;


@end


#endif