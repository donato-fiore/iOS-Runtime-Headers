// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDSUMMARYSHARINGENTRYIDSMANAGER_H
#define HDSUMMARYSHARINGENTRYIDSMANAGER_H

@class NSOperationQueue, NSMutableDictionary, NSString, HKObserverSet;
@protocol HDProfileReadyObserver, IDSIDQueryControllerDelegate, HDIDSInvitationManagerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HDProfile.h"
#import "HDIDSReachabilityOperation.h"
#import "HDIDSInvitationManager.h"

@interface HDSummarySharingEntryIDSManager : NSObject <HDProfileReadyObserver, IDSIDQueryControllerDelegate, HDIDSInvitationManagerDelegate>

 {
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_reachabilityQueue;
    NSOperationQueue *_operationQueue;
    HDIDSReachabilityOperation *_reachabilityOperation;
    NSMutableDictionary *_reachabilityStatusByIdentifier;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HDIDSInvitationManager *invitationManager; // ivar: _invitationManager
@property (retain, nonatomic) HKObserverSet *observers; // ivar: _observers
@property (readonly) Class superclass;


-(id)initWithProfile:(id)arg0 ;
-(void)acceptInvitationWithUUID:(id)arg0 completion:(id)arg1 ;
-(void)addObserver:(id)arg0 ;
-(void)beginObservingReachabilityStatusForIdentifiers:(id)arg0 isInitialQuery:(BOOL)arg1 ;
-(void)declineInvitationWithUUID:(id)arg0 completion:(id)arg1 ;
-(void)invalidateAndWait;
-(void)invitationManager:(id)arg0 didAcceptInvitation:(id)arg1 ;
-(void)invitationManager:(id)arg0 didDeclineInvitation:(id)arg1 ;
-(void)invitationManager:(id)arg0 didReceiveInvitation:(id)arg1 ;
-(void)invitationManager:(id)arg0 didRescindInvitation:(id)arg1 ;
-(void)inviteSharingDataWithIdentifier:(id)arg0 firstName:(id)arg1 lastName:(id)arg2 sharingAuthorizations:(id)arg3 userWheelchairMode:(NSInteger)arg4 completion:(id)arg5 ;
-(void)leaveInvitationWithUUID:(id)arg0 completion:(id)arg1 ;
-(void)profileDidBecomeReady:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)revokeInvitationWithUUID:(id)arg0 completion:(id)arg1 ;
-(void)userTappedWithIdentifier:(id)arg0 reachabilityStatus:(BOOL)arg1 completion:(id)arg2 ;
-(void)validateContactsUserIdentifiersForService:(id)arg0 completion:(id)arg1 ;


@end


#endif