// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSPERSISTENTCLOUDKITCONTAINER_H
#define NSPERSISTENTCLOUDKITCONTAINER_H

@class NSString;
@protocol NSCloudKitMirroringDelegateProgressProvider;


#import "NSPersistentContainer.h"
#import "NSManagedObjectContext.h"

@interface NSPersistentCloudKitContainer : NSPersistentContainer <NSCloudKitMirroringDelegateProgressProvider>

 {
    NSInteger _operationTimeout;
    NSManagedObjectContext *_metadataContext;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)discoverDefaultContainerIdentifier;
-(BOOL)assignManagedObjects:(id)arg0 toCloudKitRecordZone:(id)arg1 inPersistentStore:(id)arg2 error:(*id)arg3 ;
-(BOOL)canDeleteRecordForManagedObjectWithID:(id)arg0 ;
-(BOOL)canModifyManagedObjectsInStore:(id)arg0 ;
-(BOOL)canUpdateRecordForManagedObjectWithID:(id)arg0 ;
-(BOOL)initializeCloudKitSchemaWithOptions:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)fetchSharesInPersistentStore:(id)arg0 error:(*id)arg1 ;
-(id)fetchSharesMatchingObjectIDs:(id)arg0 error:(*id)arg1 ;
-(id)initWithName:(id)arg0 managedObjectModel:(id)arg1 ;
-(id)recordForManagedObjectID:(id)arg0 ;
-(id)recordIDForManagedObjectID:(id)arg0 ;
-(id)recordIDsForManagedObjectIDs:(id)arg0 ;
-(id)recordsForManagedObjectIDs:(id)arg0 ;
-(void)_loadStoreDescriptions:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)acceptShareInvitationsFromMetadata:(id)arg0 intoPersistentStore:(id)arg1 completion:(id)arg2 ;
-(void)acceptShareInvitationsFromURLs:(id)arg0 intoPersistentStore:(id)arg1 completion:(id)arg2 ;
-(void)dealloc;
-(void)eventUpdated:(id)arg0 ;
-(void)fetchParticipantsMatchingLookupInfos:(id)arg0 intoPersistentStore:(id)arg1 completion:(id)arg2 ;
-(void)persistUpdatedShare:(id)arg0 inPersistentStore:(id)arg1 completion:(id)arg2 ;
-(void)purgeObjectsAndRecordsInZoneWithID:(id)arg0 inPersistentStore:(id)arg1 completion:(id)arg2 ;
-(void)setPersistentStoreDescriptions:(id)arg0 ;
-(void)shareManagedObjects:(id)arg0 toShare:(id)arg1 completion:(id)arg2 ;


@end


#endif