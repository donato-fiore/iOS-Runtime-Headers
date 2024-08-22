// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BRCDOCUMENTITEM_H
#define BRCDOCUMENTITEM_H

@class NSDictionary, NSSet, NSData, NSString, NSError;
@protocol BRCTopLevelShareable;


#import "BRCLocalItem.h"
#import "BRCAliasItem.h"
#import "BRCDirectoryItem.h"
#import "BRCDocumentItem.h"
#import "BRCLocalVersion.h"
#import "BRCDesiredVersion.h"

@interface BRCDocumentItem : BRCLocalItem <BRCTopLevelShareable>



@property (readonly, nonatomic) BRCAliasItem *asBRAlias;
@property (readonly, nonatomic) BRCDirectoryItem *asDirectory;
@property (readonly, nonatomic) BRCDocumentItem *asDocument;
@property (readonly, nonatomic) NSDictionary *conflictLoserState;
@property (readonly, nonatomic) BRCLocalVersion *currentVersion; // ivar: _currentVersion
@property (readonly, nonatomic) BRCDesiredVersion *desiredVersion; // ivar: _desiredVersion
@property (readonly, nonatomic) unsigned short downloadStatus;
@property (readonly, nonatomic) BOOL hasLocalContent;
@property (readonly, nonatomic) BOOL isAutomaticallyEvictable;
@property (readonly, nonatomic) BOOL isDownloadRequested;
@property (readonly, nonatomic) BOOL isDownloadRequestedForThumbnail;
@property (readonly, nonatomic) BOOL isEvictable;
@property (readonly, nonatomic) BOOL isVisibleIniCloudDrive;
@property (retain, nonatomic) NSSet *liveConflictLoserEtags; // ivar: _liveConflictLoserEtags
@property (retain, nonatomic) NSData *liveThumbnailSignature; // ivar: _liveThumbnailSignature
@property (readonly, nonatomic) unsigned int queryItemStatus;
@property (readonly, nonatomic) NSSet *resolvedConflictLoserEtags; // ivar: _resolvedConflictLoserEtags
@property (readonly, nonatomic) BOOL shouldAutomaticallyDownloadThumbnail; // ivar: _shouldAutomaticallyDownloadThumbnail
@property (readonly, nonatomic) BOOL shouldBeGreedy;
@property (readonly, nonatomic) BOOL shouldHaveThumbnail;
@property (readonly, nonatomic) BOOL shouldTransferThumbnail;
@property (readonly, nonatomic) NSString *unsaltedBookmarkData;
@property (readonly, nonatomic) NSError *uploadError;


+(BOOL)isDocumentAutomaticallyEvictableWithExtension:(id)arg0 ;
+(BOOL)isDocumentAutomaticallyEvictableWithName:(id)arg0 ;
+(BOOL)shouldDocumentBeGreedyWithName:(id)arg0 ;
+(BOOL)supportsSecureCoding;
+(id)anyReverseAliasInAppLibrary:(id)arg0 toRelativePath:(id)arg1 ;
+(id)anyReverseAliasWithUnsaltedBookmarkData:(id)arg0 inAppLibrary:(id)arg1 ;
+(id)reverseAliasEnumeratorWithRelativePath:(id)arg0 ;
+(id)reverseAliasEnumeratorWithUnsaltedBookmarkData:(id)arg0 session:(id)arg1 ;
-(BOOL)_deleteFromDB:(id)arg0 keepAliases:(BOOL)arg1 ;
-(BOOL)_insertInDB:(id)arg0 dbRowID:(NSUInteger)arg1 ;
-(BOOL)_isInterestingUpdateForNotifs;
-(BOOL)_needsSyncBubbleRecomputeForError:(id)arg0 origError:(id)arg1 ;
-(BOOL)_nukePackageItemsFromDB:(id)arg0 ;
-(BOOL)_updateInDB:(id)arg0 diffs:(NSUInteger)arg1 ;
-(BOOL)changedAtRelativePath:(id)arg0 scanPackage:(BOOL)arg1 ;
-(BOOL)contentRecordNeedsForceAllFieldsWhenDeadInServerTruth:(BOOL)arg0 ;
-(BOOL)evictInTask:(id)arg0 options:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)hasShareIDAndIsOwnedByMe;
-(BOOL)isDocument;
-(BOOL)isDocumentBeingCopiedToNewZone;
-(BOOL)isFault;
-(BOOL)isPackage;
-(BOOL)isShareableItem;
-(BOOL)markLatestSyncRequestAcknowledgedInZone:(id)arg0 ;
-(BOOL)startDownloadInTask:(id)arg0 options:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)supportsServerSideAssetCopies;
-(BOOL)updateFromFSAtPath:(id)arg0 parentGlobalID:(id)arg1 ;
-(BOOL)updateLocationAndMetaFromFSAtPath:(id)arg0 parentGlobalID:(id)arg1 ;
-(BOOL)updateXattrInfoFromPath:(id)arg0 error:(*id)arg1 ;
-(BOOL)validateLoggingToFile:(struct __sFILE *)arg0 ;
-(NSUInteger)diffAgainstLocalItem:(id)arg0 ;
-(NSUInteger)diffAgainstServerItem:(id)arg0 ;
-(id)_filenameOverrideForPath:(id)arg0 ;
-(id)_initFromPQLResultSet:(id)arg0 session:(id)arg1 db:(id)arg2 error:(*id)arg3 ;
-(id)_initWithLocalItem:(id)arg0 ;
-(id)_initWithRelativePath:(id)arg0 parentGlobalID:(id)arg1 ;
-(id)_initWithServerItem:(id)arg0 dbRowID:(NSUInteger)arg1 ;
-(id)aliasItemID;
-(id)anyReverseAliasInAppLibrary:(id)arg0 ;
-(id)asShareableItem;
-(id)baseContentsRecord;
-(id)contentsRecordID;
-(id)descriptionWithContext:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)reverseAliasEnumerator;
-(id)setOfAppLibraryIDsWithReverseAliases;
-(id)syncContextUsedForTransfers;
-(int)updateDesiredVersionWithServerItem:(id)arg0 diffs:(NSUInteger)arg1 options:(unsigned int)arg2 needsSave:(*BOOL)arg3 ;
-(int)updateDesiredVersionWithServerItem:(id)arg0 options:(unsigned int)arg1 needsSave:(*BOOL)arg2 ;
-(void)_insertTombstoneForPreviousZoneGlobalID;
-(void)_markAsDeadTombstoneWithPreviousGlobalID;
-(void)_updateLiveConflictLoserFromFSAtPath:(id)arg0 ;
-(void)_updateReadThrottleIfNeededForRowID:(NSUInteger)arg0 forCreation:(BOOL)arg1 ;
-(void)_updateRecursivePropertiesInDB:(id)arg0 dbRowID:(NSUInteger)arg1 diffs:(NSUInteger)arg2 ;
-(void)_updateUploadJobIfNeededWithDiffs:(NSUInteger)arg0 ;
-(void)addResolvedConflictLoserEtag:(id)arg0 ;
-(void)appDidResolveConflictLoserWithEtag:(id)arg0 ;
-(void)clearDesiredVersion;
-(void)clearFromStage;
-(void)clearVersionSignatures:(NSUInteger)arg0 isPackage:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)forceVersionConflictByClearkingCKInfo;
-(void)forceiWorkConflictEtag:(id)arg0 ;
-(void)forceiWorkSharingInfoResend;
-(void)handleUnknownItemError;
-(void)learnItemID:(id)arg0 serverItem:(id)arg1 path:(id)arg2 markLost:(BOOL)arg3 ;
-(void)learnThumbnailSignatureFromLiveVersion:(id)arg0 ;
-(void)markCrossZoneMovedForServerAssetCopyWithParentItem:(id)arg0 path:(id)arg1 ;
-(void)markDead;
-(void)markForceNeedsSyncUp;
-(void)markForceUpload;
-(void)markItemForgottenByServer;
-(void)markLatestSyncRequestRejectedInZone:(id)arg0 ;
-(void)markLiveFromStageWithPath:(id)arg0 ;
-(void)markNeedsReading;
-(void)markNeedsUploadOrSyncingUp;
-(void)markOverQuotaWithError:(id)arg0 ;
-(void)markUploadedWithRecord:(id)arg0 ;
-(void)removeLiveConflictLoserEtag:(id)arg0 ;
-(void)stageFaultForCreation:(BOOL)arg0 name:(id)arg1 size:(id)arg2 isPackage:(BOOL)arg3 ;
-(void)stageFaultForCreation:(BOOL)arg0 serverItem:(id)arg1 ;
-(void)updateContentsCKInfoAndDeviceIDFromServerItem:(id)arg0 ;
-(void)updateVersionMetadataFromServerItem:(id)arg0 preventVersionDiffs:(BOOL)arg1 ;


@end


#endif