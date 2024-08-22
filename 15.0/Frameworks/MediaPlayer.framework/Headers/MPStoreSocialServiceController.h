// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPSTORESOCIALSERVICECONTROLLER_H
#define MPSTORESOCIALSERVICECONTROLLER_H

@class NSOperationQueue, NSMutableSet;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MPStoreSocialServiceController : NSObject {
    NSOperationQueue *_operationQueue;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableSet *_transientStates;
}




+(id)_internalErrorForHTTPResponseCode:(NSInteger)arg0 ;
-(NSInteger)transientFollowPendingRequestStateForPerson:(id)arg0 ;
-(NSInteger)transientFollowStateForPerson:(id)arg0 ;
-(id)_newOperationForRemovingFollower:(id)arg0 completion:(id)arg1 ;
-(id)_transientStateForPerson:(id)arg0 shouldCreate:(BOOL)arg1 ;
-(id)init;
-(void)_handleTransientStateForPersonDidChangeNotification:(id)arg0 ;
-(void)_notifyTransientStatesDidChangeWithSnapshot:(id)arg0 ;
-(void)_performTransientFollowPendingRequestState:(NSInteger)arg0 onPerson:(id)arg1 completion:(id)arg2 ;
-(void)_performTransientFollowState:(NSInteger)arg0 onPerson:(id)arg1 completion:(id)arg2 ;
-(void)_populateTransientStatesSnapshot:(id)arg0 ;
-(void)_queue_transientStatesDidChange;
-(void)_transientStatesDidChange;
-(void)acceptAllFollowRequestsWithCompletion:(id)arg0 ;
-(void)acceptFollowRequestFromPerson:(id)arg0 completion:(id)arg1 ;
-(void)blockPerson:(id)arg0 completion:(id)arg1 ;
-(void)cancelFollowRequestOnPerson:(id)arg0 completion:(id)arg1 ;
-(void)declineFollowRequestFromPerson:(id)arg0 completion:(id)arg1 ;
-(void)followPerson:(id)arg0 completion:(id)arg1 ;
-(void)removeFollower:(id)arg0 completion:(id)arg1 ;
-(void)requestFollowPerson:(id)arg0 completion:(id)arg1 ;
-(void)unblockPerson:(id)arg0 completion:(id)arg1 ;
-(void)unfollowPerson:(id)arg0 completion:(id)arg1 ;


@end


#endif