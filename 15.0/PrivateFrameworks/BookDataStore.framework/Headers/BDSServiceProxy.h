// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BDSSERVICEPROXY_H
#define BDSSERVICEPROXY_H

@class NSXPCConnection, NSString;
@protocol NSXPCProxyCreating, BDSServiceProtocol, BDSServiceProtocol><NSXPCProxyCreating;

#import <Foundation/Foundation.h>


@interface BDSServiceProxy : NSObject <NSXPCProxyCreating, BDSServiceProtocol>



@property (readonly, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (nonatomic) BOOL connectionHealthy; // ivar: _connectionHealthy
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<BDSServiceProtocol><NSXPCProxyCreating> *remoteObjectProxy; // ivar: _remoteObjectProxy
@property (readonly) Class superclass;


-(id)init;
-(id)remoteObjectProxyWithErrorHandler:(id)arg0 ;
-(id)updateReadingNowWithCompletion:(id)arg0 ;
-(id)updateWantToReadAndReadingNowWithJaliscoUpdateSuccessful:(BOOL)arg0 completion:(id)arg1 ;
-(id)updateWantToReadWithCompletion:(id)arg0 ;
-(void)addStoreItem:(id)arg0 completion:(id)arg1 ;
-(void)addStoreItems:(id)arg0 completion:(id)arg1 ;
-(void)assetDetailForAssetID:(id)arg0 completion:(id)arg1 ;
-(void)assetDetailsForAssetIDs:(id)arg0 completion:(id)arg1 ;
-(void)assetReviewForAssetReviewID:(id)arg0 completion:(id)arg1 ;
-(void)assetReviewsForAssetReviewIDs:(id)arg0 completion:(id)arg1 ;
-(void)audiobookStoreEnabledWithCompletion:(id)arg0 ;
-(void)collectionDetailForCollectionID:(id)arg0 completion:(id)arg1 ;
-(void)collectionDetailsForCollectionIDs:(id)arg0 completion:(id)arg1 ;
-(void)collectionMemberForCollectionMemberID:(id)arg0 completion:(id)arg1 ;
-(void)currentAssetDetailCloudSyncVersions:(id)arg0 ;
-(void)currentCloudSyncVersions:(id)arg0 ;
-(void)currentCollectionDetailCloudSyncVersions:(id)arg0 ;
-(void)currentCollectionMemberCloudSyncVersions:(id)arg0 ;
-(void)currentReadingNowDetailCloudSyncVersions:(id)arg0 ;
-(void)deleteAssetDetailForAssetID:(id)arg0 completion:(id)arg1 ;
-(void)deleteAssetReviewForAssetReviewID:(id)arg0 completion:(id)arg1 ;
-(void)deleteAssetReviewForAssetReviewIDs:(id)arg0 completion:(id)arg1 ;
-(void)deleteCloudDataWithCompletion:(id)arg0 ;
-(void)deleteCollectionDetailForCollectionID:(id)arg0 completion:(id)arg1 ;
-(void)deleteCollectionDetailForCollectionIDs:(id)arg0 completion:(id)arg1 ;
-(void)deleteCollectionMemberForCollectionMemberID:(id)arg0 completion:(id)arg1 ;
-(void)deleteCollectionMemberForCollectionMemberIDs:(id)arg0 completion:(id)arg1 ;
-(void)deleteItemsWithStoreIDs:(id)arg0 completion:(id)arg1 ;
-(void)deleteReadingNowDetailForAssetID:(id)arg0 completion:(id)arg1 ;
-(void)deleteStoreItemWithStoreID:(id)arg0 completion:(id)arg1 ;
-(void)deleteStoreItemsWithStoreIDs:(id)arg0 completion:(id)arg1 ;
-(void)deleteUserDatumForKey:(id)arg0 completion:(id)arg1 ;
-(void)dissociateCloudDataFromSyncWithCompletion:(id)arg0 ;
-(void)fetchAssetDetailsForUnsyncedTastes:(id)arg0 ;
-(void)fetchAssetDetailsIncludingDeleted:(BOOL)arg0 completion:(id)arg1 ;
-(void)fetchAssetReviewsForUserID:(id)arg0 includingDeleted:(BOOL)arg1 completion:(id)arg2 ;
-(void)fetchCollectionDetailsIncludingDeleted:(BOOL)arg0 completion:(id)arg1 ;
-(void)fetchCollectionMembersInCollectionID:(id)arg0 completion:(id)arg1 ;
-(void)fetchCollectionMembersIncludingDeleted:(BOOL)arg0 completion:(id)arg1 ;
-(void)fetchFinishedAssetCountByYearWithCompletion:(id)arg0 ;
-(void)fetchFinishedDatesByAssetIDForYear:(NSInteger)arg0 completion:(id)arg1 ;
-(void)fetchMaxSortOrderInCollectionID:(id)arg0 completion:(id)arg1 ;
-(void)fetchMostRecentAudiobookWithCompletion:(id)arg0 ;
-(void)fetchStoreItemsIncludingDeleted:(BOOL)arg0 completion:(id)arg1 ;
-(void)fetchUserDataIncludingDeleted:(BOOL)arg0 completion:(id)arg1 ;
-(void)formXPCConnection;
-(void)getAssetDetailChangesSince:(id)arg0 completion:(id)arg1 ;
-(void)getAssetReviewChangesSince:(id)arg0 completion:(id)arg1 ;
-(void)getCollectionDetailChangesSince:(id)arg0 completion:(id)arg1 ;
-(void)getCollectionMemberChangesSince:(id)arg0 completion:(id)arg1 ;
-(void)getReadingNowDetailChangesSince:(id)arg0 completion:(id)arg1 ;
-(void)getStoreItemChangesSince:(id)arg0 completion:(id)arg1 ;
-(void)getUserDataChangesSince:(id)arg0 completion:(id)arg1 ;
-(void)hideItemsWithStoreIDs:(id)arg0 completion:(id)arg1 ;
-(void)readingNowDetailsForAssetIDs:(id)arg0 completion:(id)arg1 ;
-(void)resolvedAssetDetailForAssetID:(id)arg0 completion:(id)arg1 ;
-(void)resolvedUserDataValueForKey:(id)arg0 completion:(id)arg1 ;
-(void)scheduleRestart;
-(void)setAssetDetail:(id)arg0 completion:(id)arg1 ;
-(void)setAssetDetails:(id)arg0 completion:(id)arg1 ;
-(void)setAssetReview:(id)arg0 completion:(id)arg1 ;
-(void)setAssetReviews:(id)arg0 completion:(id)arg1 ;
-(void)setCloudSyncPaused:(BOOL)arg0 ;
-(void)setCollectionDetail:(id)arg0 completion:(id)arg1 ;
-(void)setCollectionDetails:(id)arg0 completion:(id)arg1 ;
-(void)setCollectionMember:(id)arg0 completion:(id)arg1 ;
-(void)setCollectionMembers:(id)arg0 completion:(id)arg1 ;
-(void)setEnableCloudSync:(BOOL)arg0 enableReadingNowSync:(BOOL)arg1 ;
-(void)setEnableCollectionSync:(BOOL)arg0 ;
-(void)setEnableSecureUserDataCloudSync:(BOOL)arg0 ;
-(void)setItemHidden:(BOOL)arg0 forStoreID:(id)arg1 completion:(id)arg2 ;
-(void)setReadingNowDetails:(id)arg0 completion:(id)arg1 ;
-(void)setUserData:(id)arg0 completion:(id)arg1 ;
-(void)setUserDataValue:(id)arg0 forKey:(id)arg1 completion:(id)arg2 ;
-(void)setUserDatum:(id)arg0 completion:(id)arg1 ;
-(void)shutdown;
-(void)signalFetchChangesTransaction:(id)arg0 ;
-(void)storeItemForStoreID:(id)arg0 completion:(id)arg1 ;
-(void)updateBitrateForItemWithAdamID:(id)arg0 completion:(id)arg1 ;
-(void)updateFamilyPolitely:(BOOL)arg0 reason:(NSInteger)arg1 completion:(id)arg2 ;
-(void)updatePolitely:(BOOL)arg0 reason:(NSInteger)arg1 completion:(id)arg2 ;
-(void)userDataValueForKey:(id)arg0 completion:(id)arg1 ;
-(void)userDatumForKey:(id)arg0 completion:(id)arg1 ;
-(void)userDatumIncludingDeleted:(BOOL)arg0 forKey:(id)arg1 completion:(id)arg2 ;


@end


#endif