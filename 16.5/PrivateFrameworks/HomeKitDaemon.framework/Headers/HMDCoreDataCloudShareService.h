// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDCOREDATACLOUDSHARESERVICE_H
#define HMDCOREDATACLOUDSHARESERVICE_H

@class CKContainer, NSPersistentCloudKitContainer, NSString, NSPersistentStore;
@protocol HMFLogging;

#import <Foundation/Foundation.h>

#import "HMDManagedObjectContext.h"

@interface HMDCoreDataCloudShareService : NSObject <HMFLogging>

 {
    os_unfair_lock_s _lock;
    CKContainer *_ckContainer;
}


@property (readonly) NSPersistentCloudKitContainer *container; // ivar: _container
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) HMDManagedObjectContext *managedObjectContext; // ivar: _managedObjectContext
@property (readonly) NSPersistentStore *privateStore; // ivar: _privateStore
@property (readonly) NSPersistentStore *sharedStore; // ivar: _sharedStore
@property (readonly) Class superclass;


+(id)logCategory;
-(id)_acceptShareInvitation:(id)arg0 ;
-(id)_addParticipant:(id)arg0 share:(id)arg1 ;
-(id)_auditUsersForRevokedAccessWithAccountHandles:(id)arg0 share:(id)arg1 ;
-(id)_fetchParticipantForAccountHandle:(id)arg0 ;
-(id)_fetchParticipantsForAccountHandles:(id)arg0 ;
-(id)_fetchShareMetadataForInvitation:(id)arg0 ;
-(id)_grantAccessForUserWithAccountHandle:(id)arg0 share:(id)arg1 ;
-(id)_pushUpdatedShare:(id)arg0 ;
-(id)_removeParticipant:(id)arg0 share:(id)arg1 ;
-(id)_revokeAccessForUserWithAccountHandle:(id)arg0 share:(id)arg1 ;
-(id)acceptShareInvitation:(id)arg0 ;
-(id)acceptShareInvitationsFromMetadata:(id)arg0 intoPersistentStore:(id)arg1 ;
-(id)auditUsersForRevokedAccessWithAccountHandles:(id)arg0 share:(id)arg1 ;
-(id)ckContainer;
-(id)fetchShareWithRecordID:(id)arg0 ;
-(id)grantAccessForUserWithAccountHandle:(id)arg0 share:(id)arg1 ;
-(id)initWithContainer:(id)arg0 sharedStore:(id)arg1 privateStore:(id)arg2 moc:(id)arg3 ;
-(id)revokeAccessForUserWithAccountHandle:(id)arg0 share:(id)arg1 ;
-(void)_acceptShareInvitationsFromMetadata:(id)arg0 intoPersistentStore:(id)arg1 completion:(id)arg2 ;
-(void)_fetchShareMetadataForInvitation:(id)arg0 completion:(id)arg1 ;
-(void)_fetchShareWithRecordID:(id)arg0 completion:(id)arg1 ;
-(void)_pushUpdatedShare:(id)arg0 completion:(id)arg1 ;


@end


#endif