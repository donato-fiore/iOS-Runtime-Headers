// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VNREQUESTPERFORMER_H
#define VNREQUESTPERFORMER_H

@class NSMutableArray, NSMutableDictionary, NSMutableSet;
@protocol VNRequestCancelling, VNTrackerProviding;

#import <Foundation/Foundation.h>


@interface VNRequestPerformer : NSObject <VNRequestCancelling, VNTrackerProviding>

 {
    os_unfair_lock_s _requestLock;
    NSMutableArray *_requestsInFlight;
    NSMutableArray *_requestsPending;
    NSMutableDictionary *_sequencedRequestObservations;
    NSMutableSet *_trackerKeys;
}




-(BOOL)_performOrderedRequests:(id)arg0 inContext:(id)arg1 error:(*id)arg2 ;
-(BOOL)_performRequests:(id)arg0 onBehalfOfRequest:(id)arg1 inContext:(id)arg2 error:(*id)arg3 ;
-(BOOL)_validateAndPrepareRequests:(id)arg0 error:(*id)arg1 ;
-(BOOL)performDependentRequests:(id)arg0 onBehalfOfRequest:(id)arg1 inContext:(id)arg2 error:(*id)arg3 ;
-(BOOL)performRequests:(id)arg0 inContext:(id)arg1 error:(*id)arg2 ;
-(id)dependencyAnalyzedRequestsForRequests:(id)arg0 withPerformingContext:(id)arg1 error:(*id)arg2 ;
-(id)init;
-(id)orderedRequestsForRequests:(id)arg0 ;
-(id)previousSequencedObservationsForRequest:(id)arg0 ;
-(id)trackerWithOptions:(id)arg0 error:(*id)arg1 ;
-(void)cancelAllRequests;
-(void)dealloc;
-(void)recordSequencedObservationsForRequest:(id)arg0 ;
-(void)releaseTracker:(id)arg0 ;


@end


#endif