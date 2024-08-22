// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLPHOTOSTREAMSHELPER_H
#define PLPHOTOSTREAMSHELPER_H


#import <Foundation/Foundation.h>


@interface PLPhotoStreamsHelper : NSObject {
    BOOL _appHasPolledOnceThisForegroundSession;
}




+(BOOL)_photoStreamsEnabled;
+(BOOL)photoStreamsEnabledForPhotoLibraryBundle:(id)arg0 ;
+(BOOL)photoStreamsEnabledForPhotoLibraryURL:(id)arg0 ;
+(BOOL)writeBreadcrumbContent:(id)arg0 forHashString:(id)arg1 ;
+(id)iCloudServiceAccount;
+(id)sharedPhotoStreamsHelper;
+(void)deletePhotoStreamAssetsWithLibraryServiceManager:(id)arg0 withReason:(id)arg1 jobStreamID:(id)arg2 completion:(id)arg3 ;
-(BOOL)dequeueAssetsForPSPublishing:(id)arg0 ;
-(BOOL)enqueueAssetForPSPublishing:(id)arg0 fullPath:(id)arg1 fileSize:(id)arg2 reenqueueCount:(NSUInteger)arg3 publicGlobalUUID:(*id)arg4 ;
-(BOOL)isValidUploadAsset:(id)arg0 type:(id)arg1 fileSize:(id)arg2 ;
-(BOOL)removeBreadcrumbsForHashString:(id)arg0 ;
-(BOOL)shouldPublishScreenShots;
-(NSInteger)_serverIntegerLimitForKey:(id)arg0 debugDefaultKey:(id)arg1 ;
-(NSInteger)friendsLimit;
-(NSInteger)imageLimitForFriendStream;
-(NSInteger)imageLimitForOwnStream;
-(NSInteger)maxPixelSizeForDerivative;
-(id)derivedAssetForMasterAsset:(id)arg0 ;
-(id)imageLimitsByAssetType;
-(id)init;
-(id)lastPhotoStreamUpdateDate;
-(id)pathToSavedMetadataForAssetHash:(id)arg0 streamID:(id)arg1 createIntermediateDirs:(BOOL)arg2 ;
-(id)pause_mstreamd;
-(id)photoStreamsPublishStreamID;
-(id)psHashAsString:(id)arg0 ;
-(id)psHashForData:(id)arg0 ;
-(id)temporaryPathForConvertedAssetWithUUID:(id)arg0 ;
-(id)temporaryPathForRecentlyUploadedAsset:(id)arg0 ;
-(struct CGSize )derivedAssetSizeForMasterSizeWidth:(CGFloat)arg0 height:(CGFloat)arg1 ;
-(void)_accountStoreDidChange:(id)arg0 ;
-(void)_appDidEnterBackground:(id)arg0 ;
-(void)_clearPhotoStreamAccountSettings;
-(void)cleanupPhotoStreamMetadataForAssetsWithUUIDs:(id)arg0 forStreamID:(id)arg1 ;
-(void)clearCachedAccountState;
-(void)dealloc;
-(void)enumerateMasterHashesAndPublicGlobalUUIDsForAssets:(id)arg0 withBlock:(id)arg1 ;
-(void)fetchMPSStateWithLibrary:(id)arg0 completion:(id)arg1 ;
-(void)handleMPSStateIfNecessaryInLibrary:(id)arg0 ;
-(void)initiateDeletionOfOriginalAssets:(id)arg0 ;
-(void)initiateDeletionOfPhotoStreamAssets:(id)arg0 ;
-(void)pollForNewSubscriptionContent;
-(void)pollForNewSubscriptionContentOncePerAppForegroundSession;
-(void)resetServerState;
-(void)resume_mstreamd:(id)arg0 ;
-(void)savePhotoStreamMetadata:(id)arg0 forAsset:(id)arg1 ;
-(void)writeDidEnqueueBreadcrumbForHash:(id)arg0 imagePath:(id)arg1 ;
-(void)writeDidPublishBreadcrumbforHash:(id)arg0 imagePath:(id)arg1 ;
-(void)writeWillEnqueueBreadcrumbForHash:(id)arg0 imagePath:(id)arg1 ;


@end


#endif