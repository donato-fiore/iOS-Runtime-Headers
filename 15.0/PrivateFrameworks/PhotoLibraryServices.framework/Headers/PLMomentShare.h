// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLMOMENTSHARE_H
#define PLMOMENTSHARE_H

@class NSString, NSDate, NSSet, NSData;
@protocol PLCloudDeletable;


#import "PLShare.h"

@interface PLMomentShare : PLShare <PLCloudDeletable>



@property (nonatomic) int assetCount;
@property (nonatomic) short cloudDeleteState;
@property (readonly) NSInteger cloudDeletionType;
@property (readonly, copy) NSString *cloudUUIDForDeletion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSDate *endDate;
@property (nonatomic) BOOL forceSyncAttempted;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSSet *momentShareAssets;
@property (retain, nonatomic) NSSet *momentShareMasters;
@property (copy, nonatomic) NSString *originatingScopeIdentifier;
@property (nonatomic) int photosCount;
@property (copy, nonatomic) NSData *previewData;
@property (nonatomic) BOOL shouldIgnoreBudgets;
@property (nonatomic) BOOL shouldNotifyOnUploadCompletion;
@property (copy, nonatomic) NSDate *startDate;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSData *thumbnailImageData;
@property (nonatomic) int uploadedPhotosCount;
@property (nonatomic) int uploadedVideosCount;
@property (nonatomic) int videosCount;


+(BOOL)supportsCPLScopeType:(NSInteger)arg0 ;
+(id)createOwnedShareWithUUID:(id)arg0 creationDate:(id)arg1 title:(id)arg2 inPhotoLibrary:(id)arg3 ;
+(id)entityName;
+(id)insertOrUpdateShareWithCPLScopeChange:(id)arg0 inPhotoLibrary:(id)arg1 ;
+(id)listOfSyncedProperties;
+(id)momentShareWithOriginatingScopeIdentifier:(id)arg0 inManagedObjectContext:(id)arg1 ;
+(id)momentSharesReferencedInUploadBatchContainer:(id)arg0 inPhotoLibrary:(id)arg1 ;
+(id)pickCuratedAssetUUIDsFromCollectionOfSourceAssets:(id)arg0 ;
+(id)scopeIdentifierPrefix;
+(void)forceSyncMomentShares:(id)arg0 photoLibrary:(id)arg1 ;
-(BOOL)_isOwnerInContacts;
-(BOOL)_shouldAutoAccept;
-(BOOL)isSyncableChange;
-(BOOL)supportsCloudUpload;
-(NSUInteger)estimateUploadSize;
-(id)_contactStore;
-(id)cplScopeChange;
-(void)_updateWithScopeChange:(id)arg0 ;
-(void)autoAcceptShareIfNecessary;
-(void)calculatePropertyValues;
-(void)prepareForDeletion;
-(void)publishWithCompletionHandler:(id)arg0 ;
-(void)trash;
-(void)willSave;


@end


#endif