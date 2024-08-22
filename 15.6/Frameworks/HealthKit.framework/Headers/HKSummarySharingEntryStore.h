// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKSUMMARYSHARINGENTRYSTORE_H
#define HKSUMMARYSHARINGENTRYSTORE_H

@class NSMutableDictionary, NSString, NSArray;
@protocol _HKXPCExportable, HKSummarySharingEntryStoreClientInterface, OS_dispatch_queue, HKSummarySharingEntryStoreDelegate;

#import <Foundation/Foundation.h>

#import "HKObserverSet.h"
#import "HKHealthStore.h"
#import "HKTaskServerProxyProvider.h"

@interface HKSummarySharingEntryStore : NSObject <_HKXPCExportable, HKSummarySharingEntryStoreClientInterface>

 {
    id *_updateHandler;
    NSObject<OS_dispatch_queue> *_resourceQueue;
    NSMutableDictionary *_fetchedEntriesByUUID;
    HKObserverSet *_observers;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HKSummarySharingEntryStoreDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HKHealthStore *healthStore; // ivar: _healthStore
@property (readonly, nonatomic) HKTaskServerProxyProvider *proxyProvider; // ivar: _proxyProvider
@property (readonly, nonatomic) NSArray *sharingEntries;
@property (readonly) Class superclass;


+(id)clientInterface;
+(id)serverInterface;
-(id)exportedInterface;
-(id)initWithHealthStore:(id)arg0 ;
-(id)remoteInterface;
-(void)_notifyObservers;
-(void)acceptInvitationWithUUID:(id)arg0 completion:(id)arg1 ;
-(void)addObserver:(id)arg0 ;
-(void)beginObservingReachabilityStatusForIdentifiers:(id)arg0 isInitialQuery:(BOOL)arg1 completion:(id)arg2 ;
-(void)clientRemote_reachabilityStatusDidUpdate:(id)arg0 error:(id)arg1 ;
-(void)clientRemote_sharingEntriesDidUpdate:(id)arg0 ;
-(void)connectionInterrupted;
-(void)connectionInvalidated;
-(void)declineInvitationWithUUID:(id)arg0 completion:(id)arg1 ;
-(void)fetchSharingEntriesWithCompletion:(id)arg0 ;
-(void)inviteSharingDataWithIdentifier:(id)arg0 firstName:(id)arg1 lastName:(id)arg2 authorizationCategories:(id)arg3 completion:(id)arg4 ;
-(void)inviteSharingDataWithIdentifier:(id)arg0 firstName:(id)arg1 lastName:(id)arg2 sharingAuthorizations:(id)arg3 completion:(id)arg4 ;
-(void)inviteSharingDataWithIdentifier:(id)arg0 firstName:(id)arg1 lastName:(id)arg2 sharingAuthorizations:(id)arg3 userWheelchairMode:(NSInteger)arg4 completion:(id)arg5 ;
-(void)leaveInvitationWithUUID:(id)arg0 completion:(id)arg1 ;
-(void)removeObserver:(id)arg0 ;
-(void)revokeInvitationWithUUID:(id)arg0 completion:(id)arg1 ;
-(void)updateAuthorizationIdentifiersForInvitationUUID:(id)arg0 authorizationIdentifiersToAdd:(id)arg1 authorizationIdentifiersToDelete:(id)arg2 completion:(id)arg3 ;
-(void)updateNotificationStatusWithUUID:(id)arg0 notificationStatus:(NSInteger)arg1 completion:(id)arg2 ;
-(void)updateSharingAuthorizationsForInvitationUUID:(id)arg0 sharingAuthorizationsToAdd:(id)arg1 sharingAuthorizationsToDelete:(id)arg2 completion:(id)arg3 ;
-(void)updateSharingAuthorizationsForInvitationUUID:(id)arg0 sharingAuthorizationsToAdd:(id)arg1 sharingAuthorizationsToDelete:(id)arg2 deleteOnCommit:(BOOL)arg3 completion:(id)arg4 ;


@end


#endif