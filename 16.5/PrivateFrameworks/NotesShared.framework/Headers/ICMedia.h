// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICMEDIA_H
#define ICMEDIA_H

@class NSData, NSString, NSManagedObjectID, CKRecordID, NSSet;
@protocol ICCloudObject, ICMediaCryptoStrategy;


#import "ICCloudSyncingObject.h"
#import "ICAccount.h"
#import "ICAttachment.h"

@interface ICMedia : ICCloudSyncingObject <ICCloudObject>



@property (retain, nonatomic) ICAccount *account;
@property (retain, nonatomic) NSData *assetCryptoInitializationVector;
@property (retain, nonatomic) NSData *assetCryptoTag;
@property (retain, nonatomic) ICAttachment *attachment;
@property (readonly, nonatomic) NSString *cacheKey;
@property (readonly, nonatomic) ICAccount *containerAccount;
@property (readonly) NSObject<ICMediaCryptoStrategy> *cryptoStrategy;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *filename;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isInICloudAccount;
@property (readonly, nonatomic) BOOL isValidObject;
@property (readonly, copy, nonatomic) NSString *loggingDescription;
@property (readonly, nonatomic) BOOL needsToBeDeletedFromCloud;
@property (readonly, nonatomic) BOOL needsToBeFetchedFromCloud;
@property (readonly, nonatomic) BOOL needsToBePushedToCloud;
@property (readonly, nonatomic) BOOL needsToSaveUserSpecificRecord;
@property (readonly, nonatomic) NSManagedObjectID *objectID;
@property (weak, nonatomic) ICAccount *placeholderAccount; // ivar: placeholderAccount
@property (readonly, copy, nonatomic) CKRecordID *recordID;
@property (readonly, copy, nonatomic) NSString *recordType;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSSet *urlsToConsiderForCloudBackup;
@property (readonly, copy, nonatomic) CKRecordID *userSpecificRecordID;
@property (readonly, nonatomic) BOOL wantsUserSpecificRecord;


+(id)allMediaInContext:(id)arg0 ;
+(id)containerDirectoryURLForMediaWithIdentifier:(id)arg0 account:(id)arg1 ;
+(id)existingCloudObjectForRecordID:(id)arg0 accountID:(id)arg1 context:(id)arg2 ;
+(id)exportableContainerDirectoryURLForMediaWithIdentifier:(id)arg0 account:(id)arg1 ;
+(id)exportableMediaURLForMediaWithIdentifier:(id)arg0 filename:(id)arg1 account:(id)arg2 ;
+(id)keyPathsForValuesAffectingIsSharedViaICloud;
+(id)keyPathsForValuesAffectingParentCloudObject;
+(id)mediaIdentifiersForAccount:(id)arg0 ;
+(id)mediaURLForMediaWithIdentifier:(id)arg0 filename:(id)arg1 account:(id)arg2 ;
+(id)mediaWithIdentifier:(id)arg0 context:(id)arg1 ;
+(id)newCloudObjectForRecord:(id)arg0 accountID:(id)arg1 context:(id)arg2 ;
+(id)newMediaWithAttachment:(id)arg0 ;
+(id)newMediaWithAttachment:(id)arg0 forData:(id)arg1 filename:(id)arg2 error:(*id)arg3 ;
+(id)newMediaWithAttachment:(id)arg0 forFileWrapper:(id)arg1 error:(*id)arg2 ;
+(id)newMediaWithAttachment:(id)arg0 forURL:(id)arg1 error:(*id)arg2 ;
+(id)newMediaWithIdentifier:(id)arg0 account:(id)arg1 ;
+(id)newMediaWithIdentifier:(id)arg0 attachment:(id)arg1 ;
+(void)deleteMedia:(id)arg0 ;
+(void)enumerateMediaInContext:(id)arg0 batchSize:(NSUInteger)arg1 saveAfterBatch:(BOOL)arg2 usingBlock:(id)arg3 ;
+(void)purgeMedia:(id)arg0 ;
+(void)purgeMediaFilesForIdentifiers:(id)arg0 account:(id)arg1 ;
+(void)undeleteMedia:(id)arg0 ;
-(BOOL)hasAllMandatoryFields;
-(BOOL)hasFile;
-(BOOL)isArchivedDirectory;
-(BOOL)isValid;
-(BOOL)makeSureExportableMediaDirectoryExists:(*id)arg0 ;
-(BOOL)makeSureMediaDirectoryExists:(*id)arg0 ;
-(BOOL)mergeCloudKitRecord:(id)arg0 accountID:(id)arg1 approach:(NSInteger)arg2 mergeableFieldState:(id)arg3 ;
-(BOOL)shouldSyncMinimumSupportedNotesVersion;
-(BOOL)supportsDeletionByTTL;
-(BOOL)supportsEncryptedValuesDictionary;
-(BOOL)writeData:(id)arg0 error:(*id)arg1 ;
-(BOOL)writeDataFromAsset:(id)arg0 accountID:(id)arg1 isArchivedDirectory:(BOOL)arg2 error:(*id)arg3 ;
-(BOOL)writeDataFromFileURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)writeDataFromFileWrapper:(id)arg0 error:(*id)arg1 ;
// -(BOOL)writeDataWithBlock:(id)arg0 error:(unk)arg1  ;
-(id)cloudAccount;
-(id)containerDirectoryURL;
-(id)data;
-(id)dataWithoutImageMarkupMetadata:(BOOL)arg0 ;
-(id)decryptedData;
-(id)encryptedMediaURL;
-(id)exportableContainerDirectoryURL;
-(id)exportableMediaURL;
-(id)exportableMediaURLWithUpdatedFileIfNecessary;
-(id)ic_loggingValues;
-(id)makeCloudKitRecordForApproach:(NSInteger)arg0 mergeableFieldState:(id)arg1 ;
-(id)mediaArchiveURL;
-(id)mediaTarArchiveURL;
-(id)mediaURL;
-(id)objectsToBeDeletedBeforeThisObject;
-(id)parentCloudObject;
-(id)parentCloudObjectForMinimumSupportedVersionPropagation;
-(id)parentEncryptableObject;
-(id)recordZoneName;
-(void)accountWillChangeToAccount:(id)arg0 ;
-(void)deleteExportableMedia;
-(void)deleteFromLocalDatabase;
-(void)fixBrokenReferences;
-(void)markForDeletion;
-(void)objectWasPushedToCloudWithOperation:(id)arg0 serverRecord:(id)arg1 ;
-(void)prepareForDeletion;
-(void)saveAndClearDecryptedData;
-(void)unmarkForDeletion;
-(void)updateFlagToExcludeFromCloudBackup;
-(void)writeDataFromItemProvider:(id)arg0 checkForMarkupData:(BOOL)arg1 completionBlock:(id)arg2 ;


@end


#endif