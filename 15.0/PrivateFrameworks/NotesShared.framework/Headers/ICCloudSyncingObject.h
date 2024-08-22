// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICCLOUDSYNCINGOBJECT_H
#define ICCLOUDSYNCINGOBJECT_H

@class NSManagedObject, NSData, NSArray, NSUUID, NSString, NSMutableDictionary, NSSet, CKRecord, CKShare;
@protocol ICCloudObject, ICLoggable;


#import "TTOrderedSetVersionedDocument.h"
#import "ICCloudState.h"
#import "ICMergeableDictionary.h"

@interface ICCloudSyncingObject : NSManagedObject <ICCloudObject, ICLoggable>



@property (retain, nonatomic) NSData *activityEventsData;
@property (readonly, nonatomic) TTOrderedSetVersionedDocument *activityEventsDocument; // ivar: _activityEventsDocument
@property (readonly, copy, nonatomic) NSArray *allChildCloudObjects;
@property (readonly, copy, nonatomic) NSArray *ancestorCloudObjects;
@property (readonly, nonatomic) BOOL canSyncPasswordProtectionFields;
@property (retain, nonatomic) id *checklistItemToActivityEventsStorage; // ivar: _checklistItemToActivityEventsStorage
@property (readonly, copy, nonatomic) NSArray *childCloudObjects;
@property (retain, nonatomic) ICCloudState *cloudState;
@property (retain, nonatomic) NSData *cryptoInitializationVector;
@property (nonatomic) NSInteger cryptoIterationCount;
@property (retain, nonatomic) NSData *cryptoSalt;
@property (retain, nonatomic) NSData *cryptoTag;
@property (retain, nonatomic) NSData *cryptoWrappedKey;
@property (readonly, copy, nonatomic) NSUUID *currentReplicaID; // ivar: _currentReplicaID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSMutableDictionary *decryptedValues; // ivar: _decryptedValues
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSSet *deviceReplicaIDs;
@property (retain, nonatomic) NSData *encryptedValuesJSON;
@property NSInteger failedToSyncCount;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSInteger intrinsicNotesVersion;
@property (nonatomic) BOOL isPasswordProtected;
@property (readonly, nonatomic) BOOL isUnsupported;
@property (readonly, nonatomic) BOOL isVisible;
@property (nonatomic) BOOL markedForDeletion;
@property (nonatomic, getter=isMergingUnappliedEncryptedRecord) BOOL mergingUnappliedEncryptedRecord; // ivar: mergingUnappliedEncryptedRecord
@property (nonatomic) NSInteger minimumSupportedNotesVersion;
@property (nonatomic) BOOL needsInitialFetchFromCloud;
@property (readonly, nonatomic) BOOL needsToBeDeletedFromCloud;
@property (nonatomic) BOOL needsToBeFetchedFromCloud;
@property (readonly, nonatomic) BOOL needsToBePushedToCloud;
@property (nonatomic) BOOL needsToLoadDecryptedValues; // ivar: _needsToLoadDecryptedValues
@property (nonatomic) BOOL needsToSaveUserSpecificRecord;
@property NSInteger numberOfPushAttemptsToWaitCount;
@property (retain, nonatomic) NSString *passwordHint;
@property (retain, nonatomic) id *persistedActivityEventsStorage; // ivar: _persistedActivityEventsStorage
@property (retain, nonatomic) NSString *primitiveZoneOwnerName;
@property (readonly, nonatomic) ICMergeableDictionary *replicaIDToNotesVersion; // ivar: _replicaIDToNotesVersion
@property (retain, nonatomic) NSData *replicaIDToNotesVersionData;
@property (retain, nonatomic) CKRecord *serverRecord; // ivar: _serverRecord
@property (retain, nonatomic) NSData *serverRecordData;
@property (retain, nonatomic) CKShare *serverShare; // ivar: _serverShare
@property (readonly, nonatomic) CKShare *serverShareCheckingParent;
@property (retain, nonatomic) NSData *serverShareData;
@property (readonly, nonatomic) BOOL shouldBeIgnoredForSync;
@property (readonly, nonatomic) BOOL shouldSyncMinimumSupportedNotesVersion;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSData *unappliedEncryptedRecord;
@property (retain, nonatomic) CKRecord *userSpecificServerRecord; // ivar: _userSpecificServerRecord
@property (retain, nonatomic) NSData *userSpecificServerRecordData;
@property (retain, nonatomic) NSString *zoneOwnerName;


+(BOOL)needsToReFetchServerRecordValue:(id)arg0 ;
+(BOOL)supportsActivityEvents;
+(BOOL)supportsNotesVersionTracking;
+(BOOL)supportsUserSpecificRecords;
+(NSInteger)currentNotesVersion;
+(id)allCloudObjectIDsInContext:(id)arg0 passingTest:(id)arg1 ;
+(id)allPasswordProtectedObjectsInContext:(id)arg0 ;
+(id)assetForData:(id)arg0 ;
+(id)assetForTemporaryURL:(id)arg0 ;
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
+(id)predicateForObjectsWithIdentifiers:(id)arg0 ;
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
+(void)resetAllDeletedByThisDeviceProperties;
-(BOOL)allowsExporting;
-(BOOL)allowsImporting;
-(BOOL)canBeRootShareObject;
-(BOOL)canBeSharedViaICloud;
-(BOOL)deletedByThisDevice;
-(BOOL)hasAllMandatoryFields;
-(BOOL)hasSuccessfullyPushedLatestVersionToCloud;
-(BOOL)isDeletable;
-(BOOL)isEncryptableKeyBinaryData:(id)arg0 ;
-(BOOL)isInCloud;
-(BOOL)isInICloudAccount;
-(BOOL)isOwnedByCurrentUser;
-(BOOL)isSharedReadOnly;
-(BOOL)isSharedRootObject;
-(BOOL)isSharedViaICloud;
-(BOOL)isValidObject;
-(BOOL)needsToDeleteShare;
-(BOOL)needsToFetchAfterServerRecordChanged:(id)arg0 ;
-(BOOL)shouldBeDeletedFromLocalDatabase;
-(BOOL)shouldFallBackToCheckAllCryptoKeys;
-(BOOL)supportsDeletionByTTL;
-(BOOL)supportsEncryptedValuesDictionary;
-(BOOL)trustsTimestampsFromReplicaID:(id)arg0 ;
-(BOOL)updateDeviceReplicaIDsToCurrentNotesVersionIfNeeded;
-(BOOL)validateIdentifier:(*id)arg0 error:(*id)arg1 ;
-(BOOL)wantsUserSpecificRecord;
-(NSInteger)databaseScope;
-(NSInteger)isPushingSameOrLaterThanVersion:(NSInteger)arg0 ;
-(NSInteger)versionForOperation:(id)arg0 ;
-(NSUInteger)mergeActivityEventsDocument:(id)arg0 ;
-(NSUInteger)mergeReplicaIDToNotesVersion:(id)arg0 ;
-(id)cloudAccount;
-(id)cryptoMainKey;
-(id)cryptoPassphraseVerifier;
-(id)decryptedValueForKey:(id)arg0 ;
-(id)ic_loggingIdentifier;
-(id)ic_loggingValues;
-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;
-(id)loggingDescription;
-(id)mergeDecryptedValue:(id)arg0 withOldValue:(id)arg1 forKey:(id)arg2 ;
-(id)newlyCreatedRecord;
-(id)newlyCreatedRecordWithObfuscator:(id)arg0 ;
-(id)newlyCreatedUserSpecificRecord;
-(id)notesVersionForReplicaID:(id)arg0 ;
-(id)objectsToBeDeletedBeforeThisObject;
-(id)parentCloudObject;
-(id)parentCloudObjectForMinimumSupportedVersionPropagation;
-(id)parentCloudObjectModificationDate;
-(id)parentEncryptableObject;
-(id)participantForUserID:(id)arg0 ;
-(id)primitiveValueForEncryptableKey:(id)arg0 ;
-(id)recordID;
-(id)recordName;
-(id)recordType;
-(id)recordZoneName;
-(id)shareDescription;
-(id)shareDescriptionForShareParticipants:(id)arg0 ;
-(id)shareTitle;
-(id)shareType;
-(id)sharedOwnerName;
-(id)sharedRootObject;
-(id)shortLoggingDescription;
-(id)userSpecificRecordID;
-(id)userSpecificRecordType;
-(id)valueForEncryptableKey:(id)arg0 ;
-(void)addEmailAddressesAndPhoneNumbersToAttributeSet:(id)arg0 ;
-(void)assignToPersistentStore:(id)arg0 ;
-(void)awakeFromFetch;
-(void)awakeFromInsert;
-(void)clearChangeCount;
-(void)clearServerRecord;
-(void)decrementFailureCounts;
-(void)decryptAndMergeEncryptedJSON:(id)arg0 ;
-(void)deleteChangeTokensAndReSync;
-(void)deleteFromLocalDatabase;
-(void)didAcceptShare:(id)arg0 ;
-(void)didDeleteUserSpecificRecordID:(id)arg0 ;
-(void)didFailToSaveUserSpecificRecord:(id)arg0 accountID:(id)arg1 error:(id)arg2 ;
-(void)didFetchUserSpecificRecord:(id)arg0 accountID:(id)arg1 force:(BOOL)arg2 ;
-(void)didSaveUserSpecificRecord:(id)arg0 ;
-(void)didTurnIntoFault;
-(void)fixBrokenReferences;
-(void)incrementFailureCounts;
-(void)initializeCryptoProperties;
-(void)initializeCryptoPropertiesFromObject:(id)arg0 ;
-(void)loadDecryptedValuesIfNecessary;
-(void)markForDeletion;
-(void)mergeCryptoFieldsFromRecord:(id)arg0 ;
-(void)mergeCryptoTagAndInitializationVectorFromRecord:(id)arg0 ;
-(void)mergeDataFromRecord:(id)arg0 accountID:(id)arg1 ;
-(void)mergeDataFromRecord:(id)arg0 accountID:(id)arg1 force:(BOOL)arg2 ;
-(void)mergeDataFromUserSpecificRecord:(id)arg0 accountID:(id)arg1 ;
-(void)mergeEncryptedDataFromRecord:(id)arg0 ;
-(void)mergeUnappliedEncryptedRecord;
-(void)objectFailedToBePushedToCloudWithOperation:(id)arg0 record:(id)arg1 error:(id)arg2 ;
-(void)objectWasDeletedFromCloud;
-(void)objectWasDeletedFromCloudByAnotherDevice;
-(void)objectWasFetchedButDoesNotExistInCloud;
-(void)objectWasFetchedFromCloudWithRecord:(id)arg0 accountID:(id)arg1 ;
-(void)objectWasFetchedFromCloudWithRecord:(id)arg0 accountID:(id)arg1 force:(BOOL)arg2 ;
-(void)objectWasPushedToCloudWithOperation:(id)arg0 serverRecord:(id)arg1 ;
-(void)objectWillBePushedToCloudWithOperation:(id)arg0 ;
-(void)redactAuthorAttributions;
-(void)requireMinimumSupportedVersionAndPropagateToChildObjects:(NSInteger)arg0 ;
-(void)resetFailureCounts;
-(void)resetToIntrinsicNotesVersionAndPropagateToChildObjects;
-(void)resetUniqueIdentifier;
-(void)saveAndClearDecryptedData;
-(void)saveAndClearDecryptedDataIfNecessary;
-(void)saveEncryptedJSON;
-(void)setCryptoMainKey:(id)arg0 ;
-(void)setDecryptedValue:(id)arg0 forKey:(id)arg1 ;
-(void)setDeletedByThisDevice:(BOOL)arg0 ;
-(void)setInCloud:(BOOL)arg0 ;
-(void)setNotesVersion:(id)arg0 forReplicaID:(id)arg1 ;
-(void)setPrimitiveValue:(id)arg0 forEncryptableKey:(id)arg1 ;
-(void)setValue:(id)arg0 forEncryptableKey:(id)arg1 ;
-(void)setVersion:(NSInteger)arg0 forOperation:(id)arg1 ;
-(void)unmarkForDeletion;
-(void)updateChangeCount;
-(void)updateChangeCountsForUnsavedParentReferences;
-(void)updateParentReferenceIfNecessary;
-(void)willSave;
-(void)willUpdateDeviceReplicaIDsToNotesVersion:(NSInteger)arg0 ;


@end


#endif