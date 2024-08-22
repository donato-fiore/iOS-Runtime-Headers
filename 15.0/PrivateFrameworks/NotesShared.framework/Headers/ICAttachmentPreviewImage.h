// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICATTACHMENTPREVIEWIMAGE_H
#define ICATTACHMENTPREVIEWIMAGE_H

@class NSData, NSString, NSDate;
@protocol ICAttachmentPreviewImageUI, OS_dispatch_queue;


#import "ICCloudSyncingObject.h"
#import "ICAttachment.h"
#import "ICAccount.h"

@interface ICAttachmentPreviewImage : ICCloudSyncingObject <ICAttachmentPreviewImageUI>



@property (nonatomic) short appearanceType;
@property (retain, nonatomic) ICAttachment *attachment;
@property (retain, nonatomic) NSData *cryptoMetadataInitializationVector;
@property (retain, nonatomic) NSData *cryptoMetadataTag;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSData *encryptedMetadata;
@property (readonly) NSObject<OS_dispatch_queue> *fileQueue; // ivar: _fileQueue
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat height;
@property (nonatomic) NSUInteger imageID; // ivar: _imageID
@property (retain, nonatomic) NSData *metadata;
@property (retain, nonatomic) NSDate *modifiedDate;
@property (weak, nonatomic) ICAccount *placeholderAccount; // ivar: placeholderAccount
@property (nonatomic) CGFloat scale;
@property (nonatomic) BOOL scaleWhenDrawing;
@property (readonly) Class superclass;
@property (nonatomic) BOOL suppressFileDeletion; // ivar: suppressFileDeletion
@property (nonatomic) short version;
@property (nonatomic) BOOL versionOutOfDate;
@property (nonatomic) CGFloat width;


+(NSInteger)updateFileWriteCounterBy:(NSInteger)arg0 identifier:(id)arg1 ;
+(id)allAttachmentPreviewImagesInContext:(id)arg0 ;
+(id)attachmentPreviewImageIdentifiersForAccount:(id)arg0 ;
+(id)attachmentPreviewImageWithIdentifier:(id)arg0 inContext:(id)arg1 ;
+(id)attachmentPreviewImagesMatchingPredicate:(id)arg0 inContext:(id)arg1 ;
+(id)concurrentFileLoadLimitSemaphore;
+(id)fileGlobalQueue;
+(id)identifierForContentIdentifier:(id)arg0 scale:(CGFloat)arg1 width:(CGFloat)arg2 height:(CGFloat)arg3 appearanceType:(NSUInteger)arg4 ;
+(id)newAttachmentPreviewImageWithIdentifier:(id)arg0 attachment:(id)arg1 ;
+(id)previewImageURLsForIdentifier:(id)arg0 account:(id)arg1 ;
+(void)deleteStrandedAttachmentPreviewImagesInContext:(id)arg0 ;
+(void)enumerateAttachmentPreviewImagesInContext:(id)arg0 batchSize:(NSUInteger)arg1 saveAfterBatch:(BOOL)arg2 usingBlock:(id)arg3 ;
+(void)purgeAllAttachmentPreviewImagesInContext:(id)arg0 ;
+(void)purgeAllPreviewImageFiles;
+(void)purgePreviewImageFilesForIdentifiers:(id)arg0 account:(id)arg1 ;
+(void)waitUntilAllFileWritesAreFinished;
-(BOOL)hasAnyPNGPreviewImageFiles;
-(BOOL)imageIsValid;
-(BOOL)imageIsWriting;
-(BOOL)makeSurePreviewImageDirectoryExists:(*id)arg0 ;
-(BOOL)needsInitialFetchFromCloud;
-(BOOL)needsToBeDeletedFromCloud;
-(BOOL)needsToBeFetchedFromCloud;
-(BOOL)needsToBePushedToCloud;
-(BOOL)setImageData:(id)arg0 withSize:(struct CGSize )arg1 scale:(CGFloat)arg2 appearanceType:(NSUInteger)arg3 ;
-(BOOL)shouldSyncToCloud;
-(BOOL)writeEncryptedImageFromData:(id)arg0 ;
-(NSInteger)minimumSupportedNotesVersion;
-(id)_decryptedImageData;
-(id)cloudAccount;
-(id)containerAccount;
-(id)decryptedImageData;
-(id)encryptedPreviewImageURL;
-(id)ic_loggingValues;
-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;
-(id)orientedPreviewImageURL;
-(id)orientedPreviewImageURLWithoutCreating;
-(id)parentEncryptableObject;
-(id)previewImagePathExtension;
-(id)previewImageURL;
-(struct CGAffineTransform )orientedImageTransform;
-(struct CGSize )size;
-(void)accountWillChangeToAccount:(id)arg0 ;
-(void)createOrientedPreviewIfNeeded;
-(void)deleteFromLocalDatabase;
-(void)disableFileDeletion;
-(void)invalidateCache;
-(void)invalidateImage;
-(void)invalidateOrientedImage;
-(void)prepareForDeletion;
-(void)removeItemAtURL:(id)arg0 ;
-(void)saveAndClearDecryptedData;
-(void)updateFlagToExcludeFromCloudBackup;
-(void)willTurnIntoFault;


@end


#endif