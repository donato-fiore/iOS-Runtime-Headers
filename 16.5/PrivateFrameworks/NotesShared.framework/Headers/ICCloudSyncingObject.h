// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICCLOUDSYNCINGOBJECT_H
#define ICCLOUDSYNCINGOBJECT_H

@class NSManagedObject, NSData, NSArray, Protocol, NSUUID, NSString, NSMutableDictionary, NSSet, NSDate, NSManagedObjectID, CKRecordID, CKRecord, CKShare;
@protocol ICCloudObject, ICLoggable, ICCloudSyncingObjectCryptoStrategy;


#import "TTOrderedSetVersionedDocument.h"
#import "ICCloudState.h"
#import "ICInvitation.h"
#import "ICMergeableDictionary.h"

@interface ICCloudSyncingObject : NSManagedObject <ICCloudObject, ICLoggable>



@property (retain, nonatomic) NSData *activityEventsData;
@property (readonly, nonatomic) TTOrderedSetVersionedDocument *activityEventsDocument; // ivar: _activityEventsDocument
@property (readonly, copy, nonatomic) NSArray *allChildCloudObjects;
@property (readonly, copy, nonatomic) NSArray *ancestorCloudObjects;
@property (readonly) BOOL canAuthenticate;
@property (readonly, nonatomic) BOOL canHaveCryptoStrategy;
@property (retain, nonatomic) id *checklistItemToActivityEventsStorage; // ivar: _checklistItemToActivityEventsStorage
@property (readonly, copy, nonatomic) NSArray *childCloudObjects;
@property (retain, nonatomic) ICCloudState *cloudState;
@property (retain, nonatomic) NSData *cryptoInitializationVector;
@property (nonatomic) NSInteger cryptoIterationCount;
@property (retain, nonatomic) NSData *cryptoSalt;
@property (readonly, nonatomic) NSObject<ICCloudSyncingObjectCryptoStrategy> *cryptoStrategy; // ivar: _cryptoStrategy
@property (retain, nonatomic) NSObject<ICCloudSyncingObjectCryptoStrategy> *cryptoStrategyForMergingEncryptedData; // ivar: _cryptoStrategyForMergingEncryptedData
@property (readonly, nonatomic) BOOL cryptoStrategyIsTransient;
@property (readonly, nonatomic) Protocol *cryptoStrategyProtocol;
@property (retain, nonatomic) NSData *cryptoTag;
@property (retain, nonatomic) NSData *cryptoWrappedKey;
@property (readonly, copy, nonatomic) NSUUID *currentReplicaID; // ivar: _currentReplicaID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSMutableDictionary *decryptedValues; // ivar: _decryptedValues
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSSet *deviceReplicaIDs;
@property (retain, nonatomic) NSData *encryptedValuesJSON;
@property NSInteger failedToSyncCount;
@property (readonly) BOOL hasPassphraseSet;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSInteger intrinsicNotesVersion;
@property (retain, nonatomic) ICInvitation *invitation;
@property (readonly) BOOL isAuthenticated;
@property (readonly, nonatomic) BOOL isDeprecated;
@property (readonly, nonatomic) BOOL isInICloudAccount;
@property (nonatomic) BOOL isPasswordProtected;
@property (nonatomic) BOOL isShareDirty;
@property (readonly, nonatomic) BOOL isUnsupported;
@property (readonly, nonatomic) BOOL isValidObject;
@property (readonly, nonatomic) BOOL isVisible;
@property (readonly, copy, nonatomic) NSString *loggingDescription;
@property (nonatomic) BOOL markedForDeletion;
@property (nonatomic, getter=isMergingUnappliedEncryptedRecord) BOOL mergingUnappliedEncryptedRecord; // ivar: mergingUnappliedEncryptedRecord
@property (nonatomic) NSInteger minimumSupportedNotesVersion;
@property (nonatomic) BOOL needsInitialFetchFromCloud;
@property (readonly, nonatomic) BOOL needsInitialFetchFromCloudCheckingParent;
@property (readonly, nonatomic) BOOL needsToBeDeletedFromCloud;
@property (nonatomic) BOOL needsToBeFetchedFromCloud;
@property (readonly, nonatomic) BOOL needsToBePushedToCloud;
@property (nonatomic) BOOL needsToLoadDecryptedValues; // ivar: _needsToLoadDecryptedValues
@property (nonatomic) BOOL needsToSaveUserSpecificRecord;
@property NSInteger numberOfPushAttemptsToWaitCount;
@property (nonatomic, readonly) NSDate *objc_shareTimestamp;
@property (readonly, nonatomic) NSManagedObjectID *objectID;
@property (readonly, nonatomic) NSMutableDictionary *participantHandlesToParticipants; // ivar: _participantHandlesToParticipants
@property (retain, nonatomic) NSString *passwordHint;
@property (retain, nonatomic) id *persistedActivityEventsStorage; // ivar: _persistedActivityEventsStorage
@property (readonly, nonatomic) NSData *primaryEncryptedData;
@property (retain, nonatomic) NSString *primitiveZoneOwnerName;
@property (readonly, copy, nonatomic) CKRecordID *recordID;
@property (readonly, copy, nonatomic) NSString *recordName;
@property (readonly, copy, nonatomic) NSString *recordType;
@property (readonly, copy, nonatomic) NSString *recordZoneName;
@property (readonly, nonatomic) ICMergeableDictionary *replicaIDToNotesVersion; // ivar: _replicaIDToNotesVersion
@property (retain, nonatomic) NSData *replicaIDToNotesVersionData;
@property (retain, nonatomic) CKRecord *serverRecord; // ivar: _serverRecord
@property (retain, nonatomic) NSData *serverRecordData;
@property (retain, nonatomic) CKShare *serverShare; // ivar: _serverShare
@property (readonly, nonatomic) CKShare *serverShareCheckingParent;
@property (retain, nonatomic) NSData *serverShareData;
@property (readonly, copy, nonatomic) NSDate *shareTimestamp;
@property (readonly, nonatomic) BOOL shouldBeIgnoredForSync;
@property (readonly, nonatomic) BOOL shouldSyncMinimumSupportedNotesVersion;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSData *unappliedEncryptedRecord;
@property (readonly, copy, nonatomic) CKRecordID *userSpecificRecordID;
@property (retain, nonatomic) CKRecord *userSpecificServerRecord; // ivar: _userSpecificServerRecord
@property (retain, nonatomic) NSData *userSpecificServerRecordData;
@property (readonly, nonatomic) BOOL wantsUserSpecificRecord;
@property (retain, nonatomic) NSString *zoneOwnerName;


+(BOOL)hasAnySharedObjectInContext:(id)arg0 ;
+(BOOL)needsToReFetchServerRecordValue:(id)arg0 ;
+(BOOL)supportsActivityEvents;
+(BOOL)supportsNotesVersionTracking;
+(BOOL)supportsUserSpecificRecords;
+(NSInteger)currentNotesVersion;
+(id)allCloudObjectIDsInContext:(id)arg0 passingTest:(id)arg1 ;
+(id)allPasswordProtectedObjectsInContext:(id)arg0 ;
+(id)assetForData:(id)arg0 ;
+(id)assetForTemporaryURL:(id)arg0 ;
+(id)assetForURL:(id)arg0 ;
+(id)bundleIdentifiersWithReplicaID;
+(id)cloudObjectWithIdentifier:(id)arg0 context:(id)arg1 ;
+(id)dataForAsset:(id)arg0 ;
+(id)deletedByThisDeviceOperationQueue;
+(id)deletedByThisDeviceSet;
+(id)existingCloudObjectForRecordID:(id)arg0 accountID:(id)arg1 context:(id)arg2 ;
+(id)failureCountQueue;
+(id)keyPathsForValuesAffectingCanBeSharedViaICloud;
+(id)keyPathsForValuesAffectingCloudAccount;
+(id)keyPathsForValuesAffectingIsSharedReadOnly;
+(id)keyPathsForValuesAffectingIsSharedViaICloud;
+(id)keyPathsForValuesAffectingNeedsToBeDeletedFromCloud;
+(id)keyPathsForValuesAffectingNeedsToBePushedToCloud;
+(id)keyPathsForValuesAffectingServerShareCheckingParent;
+(id)keyPathsForValuesAffectingZoneOwnerName;
+(id)newCloudObjectForRecord:(id)arg0 accountID:(id)arg1 context:(id)arg2 ;
+(id)newObjectWithIdentifier:(id)arg0 context:(id)arg1 ;
+(id)newPlaceholderObjectForRecordName:(id)arg0 accountID:(id)arg1 context:(id)arg2 ;
+(id)numberOfPushAttemptsToWaitByIdentifier;
+(id)objectWithRecordID:(id)arg0 accountID:(id)arg1 context:(id)arg2 ;
+(id)objectsWithRecordID:(id)arg0 context:(id)arg1 ;
+(id)predicateForDeprecatedObjects;
+(id)predicateForFetchedFromCloudObjects;
+(id)predicateForInCloudObjects;
+(id)predicateForObjectsWithIdentifiers:(id)arg0 ;
+(id)predicateForPasswordProtectedObjects;
+(id)predicateForVisibleObjects;
+(id)recordSystemFieldsTransformer;
+(id)shareSystemFieldsTransformer;
+(id)temporaryAssetDirectoryURL;
+(id)temporaryAssets;
+(id)versionsByOperationQueue;
+(id)versionsByRecordIDByOperation;
+(void)deleteAllTemporaryAssetFilesForAllObjects;
+(void)deleteTemporaryAssetFilesForOperation:(id)arg0 ;
+(void)deleteTemporaryFilesForAsset:(id)arg0 ;
+(void)enumerateAllCloudObjectsInContext:(id)arg0 batchSize:(NSUInteger)arg1 saveAfterBatch:(BOOL)arg2 usingBlock:(id)arg3 ;
+(void)enumerateAllCloudObjectsInContext:(id)arg0 predicate:(id)arg1 sortDescriptors:(id)arg2 relationshipKeyPathsForPrefetching:(id)arg3 batchSize:(NSUInteger)arg4 saveAfterBatch:(BOOL)arg5 usingBlock:(id)arg6 ;
+(void)objc_removeAllCloudSyncingObjectActivityEventsForUnsharedObjectsInContext:(id)arg0 ;
+(void)removeAllCloudSyncingObjectActivityEventsForUnsharedObjectsInContext:(id)arg0 ;
+(void)resetAllDeletedByThisDeviceProperties;
-(BOOL)allowsExporting;
-(BOOL)allowsImporting;
-(BOOL)canBeRootShareObject;
-(BOOL)canBeSharedViaICloud;
-(BOOL)canCurrentUserShare;
-(BOOL)canKeyDecrypt:(id)arg0 ;
-(BOOL)didFailToSaveUserSpecificRecordWithID:(id)arg0 accountID:(id)arg1 error:(id)arg2 ;
-(BOOL)encryptFileFromURL:(id)arg0 toURL:(id)arg1 ;
-(BOOL)hasAllMandatoryFields;
-(BOOL)hasInvitees;
-(BOOL)hasSuccessfullyPushedLatestVersionToCloud;
-(BOOL)isDeletable;
-(BOOL)isEncryptableKeyBinaryData:(id)arg0 ;
-(BOOL)isInCloud;
-(BOOL)isOwnedByCurrentUser;
-(BOOL)isPassphraseCorrect:(id)arg0 ;
-(BOOL)isPubliclyShared;
-(BOOL)isPubliclySharedOrHasInvitees;
-(BOOL)isSharedReadOnly;
-(BOOL)isSharedRootObject;
-(BOOL)isSharedThroughParent;
-(BOOL)isSharedViaICloud;
-(BOOL)mergeCloudKitRecord:(id)arg0 accountID:(id)arg1 approach:(NSInteger)arg2 ;
-(BOOL)mergeCloudKitRecord:(id)arg0 accountID:(id)arg1 approach:(NSInteger)arg2 mergeableFieldState:(id)arg3 ;
-(BOOL)mergeDataFromUserSpecificRecord:(id)arg0 accountID:(id)arg1 ;
-(BOOL)needsToDeleteShare;
-(BOOL)needsToFetchAfterServerRecordChanged:(id)arg0 ;
-(BOOL)objectFailedToBePushedToCloudWithOperation:(id)arg0 recordID:(id)arg1 error:(id)arg2 ;
-(BOOL)shouldBeDeletedFromLocalDatabase;
-(BOOL)supportsDeletionByTTL;
-(BOOL)supportsEncryptedValuesDictionary;
-(BOOL)trustsTimestampsFromReplicaID:(id)arg0 ;
-(BOOL)updateDeviceReplicaIDsToCurrentNotesVersionIfNeeded;
-(BOOL)validateIdentifier:(*id)arg0 error:(*id)arg1 ;
-(BOOL)wasCreatedByCurrentUser;
-(BOOL)wasRecentlyDeletedByThisDevice;
-(NSInteger)databaseScope;
-(NSInteger)intrinsicNotesVersionForScenario:(NSUInteger)arg0 ;
-(NSInteger)isPushingSameOrLaterThanVersion:(NSInteger)arg0 ;
-(NSInteger)versionForOperation:(id)arg0 ;
-(NSUInteger)mergeActivityEventsDocument:(id)arg0 ;
-(NSUInteger)mergeReplicaIDToNotesVersion:(id)arg0 ;
-(id)associatedNoteParticipants;
-(id)cloudAccount;
-(id)cryptoMainKey;
-(id)cryptoPassphraseVerifier;
-(id)decryptedValueForKey:(id)arg0 ;
-(id)deserializedUnappliedRecord;
-(id)ic_loggingIdentifier;
-(id)ic_loggingValues;
-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;
-(id)makeCloudKitRecordForApproach:(NSInteger)arg0 ;
-(id)makeCloudKitRecordForApproach:(NSInteger)arg0 mergeableFieldState:(id)arg1 ;
-(id)makeUserSpecificCloudKitRecordForApproach:(NSInteger)arg0 ;
-(id)mergeDecryptedValue:(id)arg0 withOldValue:(id)arg1 forKey:(id)arg2 ;
-(id)newlyCreatedRecord;
-(id)notesVersionForReplicaID:(id)arg0 ;
-(id)objc_timestampForChecklistItemWithIdentifier:(id)arg0 ;
-(id)objc_userIDForChecklistItemWithIdentifier:(id)arg0 ;
-(id)objectsToBeDeletedBeforeThisObject;
-(id)parentCloudObject;
-(id)parentCloudObjectForMinimumSupportedVersionPropagation;
-(id)parentCloudObjectModificationDate;
-(id)parentEncryptableObject;
-(id)participantForHandle:(id)arg0 ;
-(id)participantForUserID:(id)arg0 ;
-(id)persistAddParticipantActivityEventForObject:(id)arg0 participant:(id)arg1 ;
-(id)persistCopyActivityEventForObject:(id)arg0 originalObject:(id)arg1 fromParentObject:(id)arg2 toParentObject:(id)arg3 ;
-(id)persistCreateActivityEventForObject:(id)arg0 inParentObject:(id)arg1 ;
-(id)persistDeleteActivityEventForObject:(id)arg0 fromParentObject:(id)arg1 ;
-(id)persistMentionActivityEventForObject:(id)arg0 mentionAttachments:(id)arg1 ;
-(id)persistMoveActivityEventForObject:(id)arg0 fromParentObject:(id)arg1 toParentObject:(id)arg2 ;
-(id)persistRemoveParticipantActivityEventForObject:(id)arg0 participant:(id)arg1 ;
-(id)persistRenameActivityEventForObject:(id)arg0 ;
-(id)persistToggleChecklistItemActivityEventForObject:(id)arg0 todo:(id)arg1 ;
-(id)primaryEncryptedDataFromRecord:(id)arg0 ;
-(id)primitiveValueForEncryptableKey:(id)arg0 ;
-(id)serializedValuesToEncrypt;
-(id)shareDescription;
-(id)shareDescriptionForShareParticipants:(id)arg0 ;
-(id)shareTitle;
-(id)shareType;
-(id)sharedOwnerName;
-(id)sharedRootObject;
-(id)shortLoggingDescription;
-(id)timestampForChecklistItemWithIdentifier:(id)arg0 ;
-(id)unwrappedKey;
-(id)userIDForChecklistItemWithIdentifier:(id)arg0 ;
-(id)userSpecificRecordType;
-(id)validatedCreateCryptoStrategy;
-(id)valueForEncryptableKey:(id)arg0 ;
-(void)addEmailAddressesAndPhoneNumbersToAttributeSet:(id)arg0 ;
-(void)assignToPersistentStore:(id)arg0 ;
-(void)awakeFromFetch;
-(void)awakeFromInsert;
-(void)clearChangeCount;
-(void)clearReplicaIDsToNotesVersion;
-(void)clearServerRecord;
-(void)decrementFailureCounts;
-(void)deleteChangeTokensAndReSync;
-(void)deleteFromLocalDatabase;
-(void)deserializeAndMergeValues:(id)arg0 ;
-(void)didAcceptShare:(id)arg0 ;
-(void)didDeleteUserSpecificRecordID:(id)arg0 ;
-(void)didFetchUserSpecificRecord:(id)arg0 accountID:(id)arg1 force:(BOOL)arg2 ;
-(void)didSaveUserSpecificRecord:(id)arg0 ;
-(void)didTurnIntoFault;
-(void)fixBrokenReferences;
-(void)incrementFailureCounts;
-(void)initializeCryptoProperties;
-(void)markForDeletion;
-(void)markShareDirtyIfNeeded;
-(void)mergeCryptoFieldsFromRecord:(id)arg0 ;
-(void)mergeCryptoTagAndInitializationVectorFromRecord:(id)arg0 ;
-(void)mergeEncryptedDataFromRecord:(id)arg0 ;
-(void)mergeUnappliedEncryptedRecord;
-(void)objc_removeAllCloudSyncingObjectActivityEvents;
-(void)objectWasDeletedFromCloud;
-(void)objectWasDeletedFromCloudByAnotherDevice;
-(void)objectWasFetchedButDoesNotExistInCloud;
-(void)objectWasFetchedFromCloudWithRecord:(id)arg0 accountID:(id)arg1 ;
-(void)objectWasFetchedFromCloudWithRecord:(id)arg0 accountID:(id)arg1 force:(BOOL)arg2 ;
-(void)objectWasPushedToCloudWithOperation:(id)arg0 serverRecord:(id)arg1 ;
-(void)objectWillBePushedToCloudWithOperation:(id)arg0 ;
-(void)prepareUnappliedRecordForSerialization:(id)arg0 ;
-(void)redactAuthorAttributionsToCurrentUser;
-(void)removeAllCloudSyncingObjectActivityEvents;
-(void)requireMinimumSupportedVersionAndPropagateToChildObjects:(NSInteger)arg0 ;
-(void)resetFailureCounts;
-(void)resetToIntrinsicNotesVersionAndPropagateToChildObjects;
-(void)rewrapAndDivergeKeyUsingPassphrase:(id)arg0 ;
-(void)saveAndClearDecryptedData;
-(void)saveAndClearDecryptedDataIfNecessary;
-(void)saveToUnappliedEncryptedRecord:(id)arg0 ;
-(void)setCryptoMainKey:(id)arg0 ;
-(void)setDecryptedValue:(id)arg0 forKey:(id)arg1 ;
-(void)setInCloud:(BOOL)arg0 ;
-(void)setNotesVersion:(id)arg0 forReplicaID:(id)arg1 ;
-(void)setPrimitiveValue:(id)arg0 forEncryptableKey:(id)arg1 ;
-(void)setValue:(id)arg0 forEncryptableKey:(id)arg1 ;
-(void)setVersion:(NSInteger)arg0 forOperation:(id)arg1 ;
-(void)setWasRecentlyDeletedByThisDevice:(BOOL)arg0 ;
-(void)unitTest_injectCryptoStrategy:(id)arg0 ;
-(void)unmarkForDeletion;
-(void)updateChangeCount;
-(void)updateChangeCountsForUnsavedParentReferences;
-(void)updateParentReferenceIfNecessary;
-(void)willSave;
-(void)willUpdateDeviceReplicaIDsToNotesVersion:(NSInteger)arg0 ;


@end


#endif