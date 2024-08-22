// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICMEDIA_H
#define ICMEDIA_H

@class NSData, NSString, NSSet;
@protocol ICCloudObject;


#import "ICCloudSyncingObject.h"
#import "ICAttachment.h"
#import "ICAccount.h"

@interface ICMedia : ICCloudSyncingObject <ICCloudObject>



@property (retain, nonatomic) NSData *assetCryptoInitializationVector;
@property (retain, nonatomic) NSData *assetCryptoTag;
@property (retain, nonatomic) ICAttachment *attachment;
@property (readonly, nonatomic) NSString *cacheKey;
@property (readonly, nonatomic) ICAccount *containerAccount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *filename;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL needsToBeDeletedFromCloud;
@property (readonly, nonatomic) BOOL needsToBeFetchedFromCloud;
@property (readonly, nonatomic) BOOL needsToBePushedToCloud;
@property (weak, nonatomic) ICAccount *placeholderAccount; // ivar: placeholderAccount
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSSet *urlsToConsiderForCloudBackup;


+(id)allMediaInContext:(id)arg0 ;
+(id)containerDirectoryURLForMediaWithIdentifier:(id)arg0 account:(id)arg1 ;
+(id)existingCloudObjectForRecordID:(id)arg0 accountID:(id)arg1 context:(id)arg2 ;
+(id)exportableContainerDirectoryURLForMediaWithIdentifier:(id)arg0 account:(id)arg1 ;
+(id)exportableMediaURLForMediaWithIdentifier:(id)arg0 filename:(id)arg1 account:(id)arg2 ;
+(id)keyPathsForValuesAffectingIsSharedViaICloud;
+(id)keyPathsForValuesAffectingParentCloudObject;
+(id)mediaDirectoryURL;
+(id)mediaIdentifiersForAccount:(id)arg0 ;
+(id)mediaURLForMediaWithIdentifier:(id)arg0 filename:(id)arg1 account:(id)arg2 ;
+(id)mediaWithIdentifier:(id)arg0 context:(id)arg1 ;
+(id)newCloudObjectForRecord:(id)arg0 accountID:(id)arg1 context:(id)arg2 ;
+(id)newMediaWithAttachment:(id)arg0 context:(id)arg1 ;
+(id)newMediaWithAttachment:(id)arg0 forData:(id)arg1 filename:(id)arg2 context:(id)arg3 error:(*id)arg4 ;
+(id)newMediaWithAttachment:(id)arg0 forFileWrapper:(id)arg1 context:(id)arg2 error:(*id)arg3 ;
+(id)newMediaWithAttachment:(id)arg0 forURL:(id)arg1 context:(id)arg2 error:(*id)arg3 ;
+(id)newMediaWithIdentifier:(id)arg0 account:(id)arg1 ;
+(id)newMediaWithIdentifier:(id)arg0 attachment:(id)arg1 ;
+(void)deleteMedia:(id)arg0 ;
+(void)enumerateMediaInContext:(id)arg0 batchSize:(NSUInteger)arg1 saveAfterBatch:(BOOL)arg2 usingBlock:(id)arg3 ;
+(void)purgeAllMediaFiles;
+(void)purgeMedia:(id)arg0 ;
+(void)purgeMediaFilesForIdentifiers:(id)arg0 account:(id)arg1 ;
+(void)undeleteMedia:(id)arg0 ;
-(BOOL)hasAllMandatoryFields;
-(BOOL)hasFile;
-(BOOL)isArchivedDirectory;
-(BOOL)isInICloudAccount;
-(BOOL)isValid;
-(BOOL)makeSureExportableMediaDirectoryExists:(*id)arg0 ;
-(BOOL)makeSureMediaDirectoryExists:(*id)arg0 ;
-(BOOL)shouldFallBackToCheckAllCryptoKeys;
-(BOOL)shouldSyncMinimumSupportedNotesVersion;
-(BOOL)supportsDeletionByTTL;
-(BOOL)writeData:(id)arg0 error:(*id)arg1 ;
-(BOOL)writeDataFromAsset:(id)arg0 accountID:(id)arg1 isArchivedDirectory:(BOOL)arg2 error:(*id)arg3 ;
-(BOOL)writeDataFromFileURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)writeDataFromFileWrapper:(id)arg0 error:(*id)arg1 ;
// -(BOOL)writeDataWithBlock:(id)arg0 error:(unk)arg1  ;
-(id)containerDirectoryURL;
-(id)data;
-(id)dataWithoutImageMarkupMetadata:(BOOL)arg0 ;
-(id)decryptedData;
-(id)encryptedMediaURL;
-(id)exportableContainerDirectoryURL;
-(id)exportableMediaURL;
-(id)exportableMediaURLWithUpdatedFileIfNecessary;
-(id)ic_loggingValues;
-(id)mediaArchiveURL;
-(id)mediaTarArchiveURL;
-(id)mediaURL;
-(id)newlyCreatedRecord;
-(id)newlyCreatedRecordWithObfuscator:(id)arg0 ;
-(id)objectsToBeDeletedBeforeThisObject;
-(id)parentCloudObject;
-(id)parentCloudObjectForMinimumSupportedVersionPropagation;
-(id)parentEncryptableObject;
-(id)recordType;
-(id)recordZoneName;
-(void)accountWillChangeToAccount:(id)arg0 ;
-(void)deleteExportableMedia;
-(void)deleteFromLocalDatabase;
-(void)fixBrokenReferences;
-(void)mergeDataFromRecord:(id)arg0 accountID:(id)arg1 force:(BOOL)arg2 ;
-(void)objectWasPushedToCloudWithOperation:(id)arg0 serverRecord:(id)arg1 ;
-(void)prepareForDeletion;
-(void)resetUniqueIdentifier;
-(void)saveAndClearDecryptedData;
-(void)updateFlagToExcludeFromCloudBackup;
-(void)writeDataFromItemProvider:(id)arg0 checkForMarkupData:(BOOL)arg1 completionBlock:(id)arg2 ;


@end


#endif