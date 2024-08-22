// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BCCLOUDKITDATABASECONTROLLER_H
#define BCCLOUDKITDATABASECONTROLLER_H

@class NSString, NSURL, NSMutableSet, BUCoalescingCallBlock, CKContainer, CKDatabase, NSArray, NSMutableDictionary, NSData, CKServerChangeToken, CKRecordID, NSMapTable;
@protocol BCCloudDataPrivacyDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface BCCloudKitDatabaseController : NSObject <BCCloudDataPrivacyDelegate>

 {
    os_unfair_lock_s _zoneObserversLock;
}


@property (retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue; // ivar: _accessQueue
@property (retain, nonatomic) NSString *appBundleIdentifier; // ivar: _appBundleIdentifier
@property (copy, nonatomic) NSURL *archiveURL; // ivar: _archiveURL
@property (nonatomic) BOOL attachedToContainer; // ivar: _attachedToContainer
@property (nonatomic) CGFloat backOffInterval; // ivar: _backOffInterval
@property (retain, nonatomic) NSMutableSet *changedRecordZoneIDs; // ivar: _changedRecordZoneIDs
@property (retain, nonatomic) BUCoalescingCallBlock *coalescedArchive; // ivar: _coalescedArchive
@property (retain, nonatomic) BUCoalescingCallBlock *coalescedZoneFetch; // ivar: _coalescedZoneFetch
@property (retain, nonatomic) CKContainer *container; // ivar: _container
@property (copy, nonatomic) NSString *containerIdentifier; // ivar: _containerIdentifier
@property (retain, nonatomic) CKDatabase *database; // ivar: _database
@property (copy, nonatomic) NSArray *desiredRecordZoneIDs; // ivar: _desiredRecordZoneIDs
@property (nonatomic) BOOL fetchRecordZoneChangesSuccess; // ivar: _fetchRecordZoneChangesSuccess
@property (nonatomic) BOOL hasSubscription; // ivar: _hasSubscription
@property (retain, nonatomic) NSMutableDictionary *observers; // ivar: _observers
@property (retain, nonatomic) NSData *recordIDSalt; // ivar: _recordIDSalt
@property (retain, nonatomic) NSMutableDictionary *recordZones; // ivar: _recordZones
@property (retain, nonatomic) CKServerChangeToken *serverChangeToken; // ivar: _serverChangeToken
@property (nonatomic) BOOL serverFetchPostponed; // ivar: _serverFetchPostponed
@property (copy, nonatomic) NSString *subscriptionID; // ivar: _subscriptionID
@property (retain, nonatomic) NSMutableDictionary *tokenStores; // ivar: _tokenStores
@property (retain, nonatomic) CKRecordID *userRecordID; // ivar: _userRecordID
@property (retain, nonatomic) NSMapTable *zoneObservers; // ivar: _zoneObservers


+(id)decodeRecordFromSystemFields:(id)arg0 ;
+(id)encodeRecordSystemFields:(id)arg0 ;
+(void)startInternetConnectionReachabilityNotifier;
-(BOOL)establishedSalt;
-(id)initWithSubscriptionID:(id)arg0 appBundleIdentifier:(id)arg1 archiveURL:(id)arg2 ;
-(id)p_archiveToData;
-(id)p_unarchiveFromData:(id)arg0 ;
-(id)recordNameFromRecordType:(id)arg0 identifier:(id)arg1 ;
-(id)saltedAndHashedIDFromLocalID:(id)arg0 ;
-(void)_deleteRecordZonesWithIDs:(id)arg0 qualityOfService:(NSInteger)arg1 completion:(id)arg2 ;
-(void)addObserver:(id)arg0 recordType:(id)arg1 ;
-(void)addObserver:(id)arg0 zoneID:(id)arg1 ;
-(void)attachToZones:(id)arg0 completion:(id)arg1 ;
// -(void)connectUserTo:(id)arg0 container:(id)arg1 updateSubscription:(BOOL)arg2 completion:(id)arg3 subscriptionCompletion:(unk)arg4  ;
-(void)detach;
-(void)detachWithError:(id)arg0 completion:(id)arg1 ;
-(void)fetchChangesWithCompletion:(id)arg0 ;
-(void)fetchRecordForRecordID:(id)arg0 completion:(id)arg1 ;
-(void)getAttached:(id)arg0 ;
-(void)p_createRecordIDSaltWithCompletion:(id)arg0 ;
-(void)p_createRecordZones:(id)arg0 completionHandler:(id)arg1 ;
-(void)p_fetchDatabaseChanges:(id)arg0 ;
-(void)p_fetchRecordZoneChanges:(id)arg0 optionsByRecordZoneID:(id)arg1 completionHandler:(id)arg2 ;
-(void)p_fetchRecordZoneChangesForRecordZoneIDs:(id)arg0 completionHandler:(id)arg1 ;
-(void)p_fetchZoneChanges:(id)arg0 ;
-(void)p_informObserversOfAttachmentChange;
-(void)p_informObserversOfCompletedFetchOfZone:(id)arg0 ;
-(void)p_informObserversOfRecordsChanged:(id)arg0 ;
-(void)p_informObserversOfRecordsChanged:(id)arg0 forRecordType:(id)arg1 ;
-(void)p_informObserversOfSaltVersionIdentifierChanged:(id)arg0 forZones:(id)arg1 completion:(id)arg2 ;
-(void)p_internetReachabilityChanged:(id)arg0 ;
-(void)p_scheduleArchiveWithCompletion:(id)arg0 ;
-(void)p_subscribeWithCompletion:(id)arg0 ;
-(void)p_unarchive;
-(void)p_unsubscribeToContainer:(id)arg0 ;
-(void)p_updateRetryParametersFromFetchZoneChangesOperationError:(id)arg0 ;
-(void)recordZoneWithName:(id)arg0 completionHandler:(id)arg1 ;
-(void)registerServerChangeTokenStore:(id)arg0 forZoneID:(id)arg1 ;
-(void)removeObserver:(id)arg0 ;
-(void)removeObserver:(id)arg0 recordType:(id)arg1 ;
-(void)unregisterServerChangeTokenStore:(id)arg0 ;
-(void)willAttachToContainer:(id)arg0 serviceMode:(BOOL)arg1 completion:(id)arg2 ;
-(void)zonesTemporarilyUnreadableWithError:(id)arg0 completion:(id)arg1 ;
-(void)zonesUnreadableDueToMissingD2DEncryptionIdentity:(id)arg0 completion:(id)arg1 ;


@end


#endif