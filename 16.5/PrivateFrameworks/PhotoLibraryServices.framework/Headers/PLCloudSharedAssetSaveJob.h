// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLCLOUDSHAREDASSETSAVEJOB_H
#define PLCLOUDSHAREDASSETSAVEJOB_H

@class NSMutableArray, NSArray, NSString, MSASAssetCollection, NSDictionary;


#import "PLCloudSharingJob.h"
#import "AssetCollectionInfo.h"

@interface PLCloudSharedAssetSaveJob : PLCloudSharingJob {
    BOOL _replacingOriginalWithDerivative;
    AssetCollectionInfo *_currentAssetCollectionInfo;
    NSMutableArray *_pendingDownloadNotifications;
}


@property (retain, nonatomic) NSArray *assetCollectionInfos; // ivar: _assetCollectionInfos
@property (retain, nonatomic) NSString *cloudAlbumGUID; // ivar: _cloudAlbumGUID
@property (retain, nonatomic) NSArray *cloudAssetGUIDsToDelete; // ivar: _cloudAssetGUIDsToDelete
@property (retain, nonatomic) NSString *cloudPersonID; // ivar: _cloudPersonID
@property (retain, nonatomic) MSASAssetCollection *currentCloudAssetCollection; // ivar: _currentCloudAssetCollection
@property (retain, nonatomic) NSString *currentCloudAssetGUID; // ivar: _currentCloudAssetGUID
@property (nonatomic) NSUInteger currentCloudAssetMediaAssetType; // ivar: _currentCloudAssetMediaAssetType
@property (retain, nonatomic) NSString *currentFilePath; // ivar: _currentFilePath
@property (nonatomic) BOOL isPhotoIris; // ivar: _isPhotoIris
@property (nonatomic) BOOL isVideo; // ivar: _isVideo
@property (nonatomic) NSInteger jobType; // ivar: _jobType
@property (retain, nonatomic) NSDictionary *mstreamdInfoDictionary; // ivar: _mstreamdInfoDictionary


+(BOOL)_lightweightReimportCacheDirectoryExists;
+(id)_dcimDirectoryForFileURL:(id)arg0 ;
+(id)_lightweightReimportPhotoCloudSharingAlbumInfoForAlbumWithCloudGUID:(id)arg0 cloudPersonID:(id)arg1 ;
+(id)newCloudSharedAssetSaveJobFromAProcessThatIsNotAssetsd;
+(id)nextDCIMSaveFileURLForCloudPersonID:(id)arg0 cloudAlbumGUID:(id)arg1 fileExtension:(id)arg2 assetUUID:(id)arg3 ;
+(id)pathForInFlightAssetCollectionWithGUID:(id)arg0 mediaAssetType:(NSUInteger)arg1 ;
+(void)assetsdProcessMetadataForAssetCollections:(id)arg0 inAlbum:(id)arg1 personID:(id)arg2 info:(id)arg3 libraryServicesManager:(id)arg4 ;
+(void)deleteCloudSharedAssetsWithCloudGUIDs:(id)arg0 info:(id)arg1 ;
+(void)downloadPendingAssetsForPersonID:(id)arg0 info:(id)arg1 ;
+(void)processMetadataForAssetCollections:(id)arg0 inAlbum:(id)arg1 personID:(id)arg2 info:(id)arg3 ;
+(void)replaceRecentlyUploadedOriginalWithDerivativeForCollection:(id)arg0 inAlbum:(id)arg1 personID:(id)arg2 ;
+(void)saveCloudSharedAssetAtPath:(id)arg0 forAssetCollection:(id)arg1 mediaAssetType:(NSUInteger)arg2 albumGUID:(id)arg3 personID:(id)arg4 info:(id)arg5 shouldPrioritize:(BOOL)arg6 ;
-(BOOL)_processInflightAsset:(id)arg0 mediaAssetType:(NSUInteger)arg1 ;
-(BOOL)_processSaveAssetWithPlaceholderKind:(short)arg0 inLibrary:(id)arg1 withAssetDataFilePath:(id)arg2 ;
-(BOOL)isProcessingThumbnail;
-(NSInteger)daemonOperation;
-(NSUInteger)_insertionIndexForAsset:(id)arg0 inAlbum:(id)arg1 ;
-(id)_createPlaceHolderInSharedAlbum:(id)arg0 ;
-(id)description;
-(id)initFromXPCObject:(id)arg0 libraryServicesManager:(id)arg1 ;
-(id)initWithAssetsdClient:(id)arg0 ;
-(short)attemptLightweightReimportAssetDataInLibrary:(id)arg0 ;
-(short)placeHolderKindFromAssetMetadataType:(NSUInteger)arg0 ;
-(void)_addDownloadNotification:(id)arg0 ;
-(void)_incrementDerivativesCount:(NSInteger)arg0 thumbnailsCount:(NSInteger)arg1 ;
// -(void)_performSaveTransactionAndWaitOnLibrary:(id)arg0 transaction:(id)arg1 completion:(unk)arg2  ;
-(void)_prefetchLimitForDerivatives:(*NSInteger)arg0 thumbnails:(*NSInteger)arg1 ;
-(void)_processInFlightCommentsForAsset:(id)arg0 inAlbum:(id)arg1 inPhotoLibrary:(id)arg2 ;
-(void)_updateAsset:(id)arg0 withImageFileURL:(id)arg1 ;
-(void)_updatePhotoIrisPropertiesIfNecessaryForAsset:(id)arg0 inManagedObjectContext:(id)arg1 ;
-(void)dealloc;
-(void)encodeToXPCObject:(id)arg0 ;
-(void)executeDaemonOperationDownloadPendingAssetsJobType;
-(void)executeDaemonOperationReplaceRecentlyUploadedOriginalJobType;
-(void)executeDaemonOperationSaveAssetMetadataForCollectionsJobType;
-(void)run;
-(void)runDaemonSide;
-(void)setupSaveAssetMetadataForCollectionsJobForAssetCollections:(id)arg0 album:(id)arg1 personID:(id)arg2 info:(id)arg3 ;


@end


#endif