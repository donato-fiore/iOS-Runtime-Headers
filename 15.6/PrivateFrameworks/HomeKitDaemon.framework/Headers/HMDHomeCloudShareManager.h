// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDHOMECLOUDSHAREMANAGER_H
#define HMDHOMECLOUDSHAREMANAGER_H

@class CKContainer, NSPersistentCloudKitContainer, NSPersistentStore;

#import <Foundation/Foundation.h>

#import "HMDManagedObjectContext.h"

@interface HMDHomeCloudShareManager : NSObject {
    os_unfair_lock_s _lock;
    CKContainer *_ckContainer;
    HMDManagedObjectContext *_moc;
    NSPersistentCloudKitContainer *_container;
    NSPersistentStore *_sharedStore;
    NSPersistentStore *_privateStore;
}




-(id)_addAccessForUser:(id)arg0 home:(id)arg1 ;
-(id)_addParticipant:(id)arg0 share:(id)arg1 homeModelID:(id)arg2 ;
-(id)_createShareForHome:(id)arg0 ;
-(id)_existingShareForHomeWithModelID:(id)arg0 ;
-(id)_fetchParticipantForUser:(id)arg0 ;
-(id)_fetchShareMetadataForInvitation:(id)arg0 ;
-(id)_fetchShareWithRecordID:(id)arg0 ;
-(id)_pushUpdatedShare:(id)arg0 ;
-(id)_removeParticipant:(id)arg0 share:(id)arg1 ;
-(id)_shareForHome:(id)arg0 ;
-(id)acceptShareInvitation:(id)arg0 ;
-(id)addAccessForUser:(id)arg0 home:(id)arg1 ;
-(id)initWithContainer:(id)arg0 sharedStore:(id)arg1 privateStore:(id)arg2 moc:(id)arg3 ;
-(void)_removeAccessForUser:(id)arg0 home:(id)arg1 ;
-(void)removeAccessForUser:(id)arg0 home:(id)arg1 ;
-(void)removeShareForHome:(id)arg0 ;


@end


#endif