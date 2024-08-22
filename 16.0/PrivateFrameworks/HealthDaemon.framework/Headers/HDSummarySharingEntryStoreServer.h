// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDSUMMARYSHARINGENTRYSTORESERVER_H
#define HDSUMMARYSHARINGENTRYSTORESERVER_H

@class NSString;
@protocol HKSummarySharingEntryStoreServerInterface, HDSummarySharingEntryObserver, HDSummarySharingEntryIDSManagerReachabilityObserver, HDProfileReadyObserver;


#import "HDStandardTaskServer.h"
#import "HDSummarySharingEntryIDSManager.h"
#import "HDSummarySharingEntryManager.h"
#import "HDSharingAuthorizationManager.h"

@interface HDSummarySharingEntryStoreServer : HDStandardTaskServer <HKSummarySharingEntryStoreServerInterface, HDSummarySharingEntryObserver, HDSummarySharingEntryIDSManagerReachabilityObserver, HDProfileReadyObserver>

 {
    HDSummarySharingEntryIDSManager *_summarySharingEntryIDSManager;
    HDSummarySharingEntryManager *_sharingEntryManager;
    HDSharingAuthorizationManager *_sharingAuthorizationManager;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)requiredEntitlements;
+(id)taskIdentifier;
-(id)exportedInterface;
-(id)initWithUUID:(id)arg0 configuration:(id)arg1 client:(id)arg2 delegate:(id)arg3 ;
-(id)remoteInterface;
-(void)connectionInvalidated;
-(void)dealloc;
-(void)profileDidBecomeReady:(id)arg0 ;
-(void)remote_acceptInvitationWithUUID:(id)arg0 completion:(id)arg1 ;
-(void)remote_beginObservingReachabilityStatusForIdentifiers:(id)arg0 isInitialQuery:(BOOL)arg1 ;
-(void)remote_declineInvitationWithUUID:(id)arg0 completion:(id)arg1 ;
-(void)remote_fetchSharingEntriesWithCompletionHandler:(id)arg0 ;
-(void)remote_inviteSharingDataWithIdentifier:(id)arg0 firstName:(id)arg1 lastName:(id)arg2 sharingAuthorizations:(id)arg3 userWheelchairMode:(NSInteger)arg4 completion:(id)arg5 ;
-(void)remote_leaveInvitationWithUUID:(id)arg0 completion:(id)arg1 ;
-(void)remote_revokeInvitationWithUUID:(id)arg0 completion:(id)arg1 ;
-(void)remote_unpauseInvitationWithUUID:(id)arg0 completion:(id)arg1 ;
-(void)remote_updateAuthorizationIdentifiersForInvitationUUID:(id)arg0 sharingAuthorizationsToAdd:(id)arg1 sharingAuthorizationsToDelete:(id)arg2 deleteOnCommit:(BOOL)arg3 completion:(id)arg4 ;
-(void)remote_updateNotificationStatusWithUUID:(id)arg0 notificationStatus:(NSInteger)arg1 completion:(id)arg2 ;
-(void)sharingEntriesDidUpdate:(id)arg0 ;
-(void)summarySharingEntryIDSManager:(id)arg0 didUpdateReachabilityStatus:(id)arg1 error:(id)arg2 ;


@end


#endif