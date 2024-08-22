// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICATTACHMENT_H
#define ICATTACHMENT_H

@class NSURL, NSString, NSArray, NSDate, NSData, NSSet, NSManagedObjectContext, NSDictionary, AVAsset, NSManagedObjectID, CKRecordID, CSSearchableItemAttributeSet;
@protocol ICCloudObject, ICSearchIndexable, ICAttachmentCryptoStrategy;


#import "ICBaseAttachment.h"
#import "ICAttachmentModel.h"
#import "ICSynapseLinkPreviewLoadingOperation.h"
#import "ICAttachmentLocation.h"
#import "ICMedia.h"
#import "ICNote.h"

@interface ICAttachment : ICBaseAttachment <ICCloudObject, ICSearchIndexable>

 {
    short _attachmentType;
    ICAttachmentModel *_attachmentModel;
    ICSynapseLinkPreviewLoadingOperation *_loadOperation;
}


@property (retain, nonatomic) NSURL *URL; // ivar: _URL
@property (retain, nonatomic) NSString *additionalIndexableText;
@property (readonly, nonatomic) NSArray *authorsExcludingCurrentUser;
@property (nonatomic) BOOL checkedForLocation;
@property (readonly, copy, nonatomic) NSString *contentIdentifier;
@property (readonly, copy, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) NSDate *creationDate;
@property (nonatomic) CGFloat croppingQuadBottomLeftX;
@property (nonatomic) CGFloat croppingQuadBottomLeftY;
@property (nonatomic) CGFloat croppingQuadBottomRightX;
@property (nonatomic) CGFloat croppingQuadBottomRightY;
@property (nonatomic) CGFloat croppingQuadTopLeftX;
@property (nonatomic) CGFloat croppingQuadTopLeftY;
@property (nonatomic) CGFloat croppingQuadTopRightX;
@property (nonatomic) CGFloat croppingQuadTopRightY;
@property (readonly) NSObject<ICAttachmentCryptoStrategy> *cryptoStrategy;
@property (readonly, copy, nonatomic) NSString *dataSourceIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat duration;
@property (retain, nonatomic) NSData *fallbackImageCryptoInitializationVector;
@property (retain, nonatomic) NSData *fallbackImageCryptoTag;
@property (retain, nonatomic) NSData *fallbackPDFCryptoInitializationVector;
@property (retain, nonatomic) NSData *fallbackPDFCryptoTag;
@property (retain, nonatomic) NSString *fallbackSubtitleIOS;
@property (retain, nonatomic) NSString *fallbackSubtitleMac;
@property (retain, nonatomic) NSString *fallbackTitle;
@property (nonatomic) NSInteger fileSize;
@property (retain, nonatomic) NSString *handwritingSummary;
@property (nonatomic) short handwritingSummaryVersion;
@property (readonly, nonatomic) BOOL hasCroppingQuad;
@property (nonatomic) BOOL hasMarkupData;
@property (readonly, nonatomic) BOOL hasMetadata;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *imageClassificationSummary;
@property (nonatomic) short imageClassificationSummaryVersion;
@property (nonatomic) short imageFilterType;
@property (retain, nonatomic) NSSet *inlineAttachments;
@property (readonly, nonatomic) BOOL isDeletable;
@property (readonly, nonatomic) BOOL isHiddenFromSearch;
@property (readonly, nonatomic) BOOL isInICloudAccount;
@property (readonly, nonatomic) BOOL isMovable;
@property (readonly, nonatomic) BOOL isReadOnly;
@property (readonly, nonatomic) BOOL isValidObject;
@property (retain, nonatomic) NSData *linkPresentationArchivedMetadata;
@property (retain, nonatomic) ICAttachmentLocation *location;
@property (readonly, copy, nonatomic) NSString *loggingDescription;
@property (readonly, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (retain, nonatomic) NSData *markupModelData;
@property (retain, nonatomic) ICMedia *media;
@property (retain, nonatomic) NSData *mergeableData;
@property (retain, nonatomic) NSDictionary *metadata; // ivar: _metadata
@property (retain, nonatomic) NSData *metadataData;
@property (nonatomic) NSInteger minimumSupportedNotesVersion;
@property (readonly, copy, nonatomic) NSDate *modificationDate;
@property (retain, nonatomic) NSDate *modificationDate;
@property (retain, nonatomic) AVAsset *movie; // ivar: _movie
@property (nonatomic) BOOL needsInitialRelationshipSetup;
@property (readonly, nonatomic) BOOL needsToBeDeletedFromCloud;
@property (readonly, nonatomic) BOOL needsToBeFetchedFromCloud;
@property (readonly, nonatomic) BOOL needsToBePushedToCloud;
@property (readonly, nonatomic) BOOL needsToSaveUserSpecificRecord;
@property (retain, nonatomic) ICNote *noteUsingTitleForNoteTitle;
@property (readonly, nonatomic) NSManagedObjectID *objectID;
@property (readonly, nonatomic) NSManagedObjectID *objectID;
@property (retain, nonatomic) NSString *ocrSummary;
@property (nonatomic) short ocrSummaryVersion;
@property (nonatomic) short orientation;
@property (nonatomic) CGFloat originX;
@property (nonatomic) CGFloat originY;
@property (retain, nonatomic) NSSet *previewImages;
@property (retain, nonatomic) NSDate *previewUpdateDate;
@property (readonly, copy, nonatomic) CKRecordID *recordID;
@property (readonly, copy, nonatomic) NSString *recordType;
@property (retain, nonatomic) NSURL *remoteFileURL; // ivar: _remoteFileURL
@property (retain, nonatomic) NSString *remoteFileURLString;
@property (readonly, copy, nonatomic) NSString *searchDomainIdentifier;
@property (readonly, copy, nonatomic) NSString *searchIndexingIdentifier;
@property (readonly, nonatomic) BOOL searchResultCanBeDeletedFromNoteContext;
@property (readonly, nonatomic) NSUInteger searchResultType;
@property (readonly, nonatomic) NSUInteger searchResultsSection;
@property (readonly, nonatomic) CSSearchableItemAttributeSet *searchableItemAttributeSet;
@property (nonatomic) short section;
@property (nonatomic, getter=isSettingMergeableData) BOOL settingMergeableData; // ivar: settingMergeableData
@property (nonatomic) CGFloat sizeHeight;
@property (nonatomic) CGFloat sizeWidth;
@property (retain, nonatomic) NSSet *subAttachments;
@property (retain, nonatomic) NSString *summary;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (nonatomic) BOOL suppressesFileDeletion; // ivar: suppressesFileDeletion
@property (retain, nonatomic) NSData *synapseData;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) BOOL urlExpired;
@property (retain, nonatomic) NSString *urlString;
@property (readonly, nonatomic) CSSearchableItemAttributeSet *userActivityContentAttributeSet;
@property (readonly, copy, nonatomic) CKRecordID *userSpecificRecordID;
@property (retain, nonatomic) NSString *userTitle;
@property (readonly, nonatomic) NSInteger visibilityTestingType;
@property (readonly, nonatomic) NSSet *visibleInlineAttachments;
@property (readonly, nonatomic) BOOL wantsUserSpecificRecord;


+(BOOL)isPathExtensionSupportedForPasswordProtectedNotes:(id)arg0 ;
+(BOOL)isTypeUTISupportedForPasswordProtectedNotes:(id)arg0 ;
+(BOOL)isTypeUTISupportedInExtensions:(id)arg0 ;
+(BOOL)supportsNotesVersionTracking;
+(BOOL)typeUTIIsDrawing:(id)arg0 ;
+(BOOL)typeUTIIsImage:(id)arg0 ;
+(BOOL)typeUTIIsInlineDrawing:(id)arg0 ;
+(BOOL)typeUTIIsPlayableAudio:(id)arg0 ;
+(BOOL)typeUTIIsPlayableMovie:(id)arg0 ;
+(BOOL)typeUTIIsSystemPaper:(id)arg0 ;
+(NSUInteger)countOfAttachmentsMatchingPredicate:(id)arg0 context:(id)arg1 ;
+(id)allAttachmentsInContext:(id)arg0 ;
+(id)attachmentIdentifiersForAccount:(id)arg0 ;
+(id)attachmentSectionSortOrder;
+(id)attachmentTypeUTIsToHideFromAttachmentBrowser;
+(id)defaultTitleForAttachmentType:(short)arg0 ;
+(id)existingCloudObjectForRecordID:(id)arg0 accountID:(id)arg1 context:(id)arg2 ;
+(id)fallbackImageEncryptedURLForIdentifier:(id)arg0 account:(id)arg1 ;
+(id)fallbackImageURLForIdentifier:(id)arg0 account:(id)arg1 ;
+(id)fallbackPDFEncryptedURLForIdentifier:(id)arg0 account:(id)arg1 ;
+(id)fallbackPDFURLForIdentifier:(id)arg0 account:(id)arg1 ;
+(id)filenameExtensionForUTI:(id)arg0 ;
+(id)filenameFromUTI:(id)arg0 ;
+(id)internalImageCache;
+(id)isBeingEditedLocallyOnDeviceSet;
+(id)keyPathsForValuesAffectingIsSharedViaICloud;
+(id)keyPathsForValuesAffectingParentCloudObject;
+(id)mentionNotificationSnippetForAttachmentType:(short)arg0 ;
+(id)mimeTypeFromUTI:(id)arg0 ;
+(id)newCloudObjectForRecord:(id)arg0 accountID:(id)arg1 context:(id)arg2 ;
+(id)newFetchRequestForAttachments;
+(id)noteFromAttachmentRecord:(id)arg0 accountID:(id)arg1 context:(id)arg2 ;
+(id)predicateForAttachmentBrowserWithContext:(id)arg0 ;
+(id)predicateForInlineDrawing;
+(id)predicateForPasswordProtected:(BOOL)arg0 ;
+(id)predicateForSearchableAttachmentsInContext:(id)arg0 ;
+(id)predicateForUnsupportedAttachmentsInContext:(id)arg0 ;
+(id)predicateForVisibleAttachmentsWithTypeUTI:(id)arg0 inContext:(id)arg1 ;
+(short)sectionFromTypeUTI:(id)arg0 url:(id)arg1 ;
+(void)addPreviewImages:(id)arg0 toRecord:(id)arg1 ;
+(void)deleteAttachment:(id)arg0 ;
+(void)ensureFallbackImageDirectoryExistsForAccount:(id)arg0 ;
+(void)ensureFallbackPDFDirectoryExistsForAccount:(id)arg0 ;
+(void)enumerateAttachmentsInContext:(id)arg0 batchSize:(NSUInteger)arg1 visibleOnly:(BOOL)arg2 saveAfterBatch:(BOOL)arg3 usingBlock:(id)arg4 ;
+(void)initialize;
+(void)purgeAttachment:(id)arg0 ;
+(void)purgeAttachmentFilesForIdentifiers:(id)arg0 account:(id)arg1 ;
+(void)undeleteAttachment:(id)arg0 ;
-(BOOL)checkPreviewImagesIntegrity;
-(BOOL)hasAllMandatoryFields;
-(BOOL)hasAnyPNGPreviewImageFiles;
-(BOOL)hasDeepLink;
-(BOOL)hasFallbackImage;
-(BOOL)hasFallbackPDF;
-(BOOL)hasSynapseLink;
-(BOOL)isAppStore;
-(BOOL)isAudio;
-(BOOL)isBeingEditedLocallyOnDevice;
-(BOOL)isChildOfDocumentGallery;
-(BOOL)isDrawing;
-(BOOL)isEncryptableKeyBinaryData:(id)arg0 ;
-(BOOL)isFolder;
-(BOOL)isImage;
-(BOOL)isInNoteTitleOrSnippet;
-(BOOL)isLoadingFromCloud;
-(BOOL)isMap;
-(BOOL)isNews;
-(BOOL)isPencilKitDrawing;
-(BOOL)isPodcasts;
-(BOOL)isScannedDocument;
-(BOOL)isTable;
-(BOOL)isUnsupported;
-(BOOL)isiTunes;
-(BOOL)mergeCloudKitRecord:(id)arg0 accountID:(id)arg1 approach:(NSInteger)arg2 mergeableFieldState:(id)arg3 ;
-(BOOL)mergeCloudKitRecord:(id)arg0 accountID:(id)arg1 approach:(NSInteger)arg2 mergeableFieldState:(id)arg3 newAttachment:(BOOL)arg4 ;
-(BOOL)needsToBeRequested;
-(BOOL)preferLocalPreviewImages;
-(BOOL)previewsSupportMultipleAppearances;
-(BOOL)saveToArchive:(*void)arg0 dataPersister:(id)arg1 stripImageMarkupMetadata:(BOOL)arg2 error:(*id)arg3 ;
-(BOOL)shouldEmbedMarkupDataInMedia;
-(BOOL)shouldShowInContentInfoText;
-(BOOL)shouldSyncMinimumSupportedNotesVersion;
-(BOOL)showsLoadingPlaceholder;
-(BOOL)supportsDeletionByTTL;
-(BOOL)supportsEncryptedValuesDictionary;
-(BOOL)supportsQuickLook;
-(BOOL)supportsRenaming;
-(BOOL)supportsSavingAttachmentToExternalFile;
-(NSInteger)intrinsicNotesVersionForScenario:(NSUInteger)arg0 ;
-(NSUInteger)approximateArchiveSizeIncludingPreviews:(BOOL)arg0 ;
-(id)addInlineAttachmentWithIdentifier:(id)arg0 ;
-(id)addLocationWithLatitude:(CGFloat)arg0 longitude:(CGFloat)arg1 ;
-(id)addMediaWithData:(id)arg0 filename:(id)arg1 ;
-(id)addMediaWithData:(id)arg0 filename:(id)arg1 updateFileBasedAttributes:(BOOL)arg2 ;
-(id)addMediaWithFileWrapper:(id)arg0 ;
-(id)addMediaWithURL:(id)arg0 ;
-(id)addMediaWithURL:(id)arg0 updateFileBasedAttributes:(BOOL)arg1 ;
-(id)attachmentModel;
-(id)attachmentPreviewImageCreatingIfNecessaryWithWidth:(CGFloat)arg0 height:(CGFloat)arg1 scale:(CGFloat)arg2 appearanceType:(NSUInteger)arg3 scaleWhenDrawing:(BOOL)arg4 metadata:(id)arg5 ;
-(id)attachmentPreviewImageWithMinSize:(struct CGSize )arg0 scale:(CGFloat)arg1 ;
-(id)attachmentPreviewImageWithMinSize:(struct CGSize )arg0 scale:(CGFloat)arg1 appearanceType:(NSUInteger)arg2 ;
-(id)attachmentPreviewImageWithMinSize:(struct CGSize )arg0 scale:(CGFloat)arg1 appearanceType:(NSUInteger)arg2 matchScale:(BOOL)arg3 matchAppearance:(BOOL)arg4 ;
-(id)attachmentPreviewImageWithMinSize:(struct CGSize )arg0 scale:(CGFloat)arg1 appearanceType:(NSUInteger)arg2 requireAppearance:(BOOL)arg3 ;
-(id)childCloudObjects;
-(id)childCloudObjectsForMinimumSupportedVersionPropagation;
-(id)dataForTypeIdentifier:(id)arg0 ;
-(id)debugQuickLookObject;
-(id)defaultTitle;
-(id)drawingModel;
-(id)fallbackImageData;
-(id)fallbackImageUTI;
-(id)fallbackPDFData;
-(id)fallbackPDFUTI;
-(id)fileURLForTypeIdentifier:(id)arg0 ;
-(id)galleryModel;
-(id)ic_loggingValues;
-(id)imageCacheKey;
-(id)inlineDrawingModel;
-(id)makeCloudKitRecordForApproach:(NSInteger)arg0 mergeableFieldState:(id)arg1 ;
-(id)mergeDecryptedValue:(id)arg0 withOldValue:(id)arg1 forKey:(id)arg2 ;
-(id)objectsToBeDeletedBeforeThisObject;
-(id)parentAttachmentFromRecord:(id)arg0 accountID:(id)arg1 context:(id)arg2 ;
-(id)parentEncryptableObject;
-(id)previewImageCacheKey;
-(id)previewItemTitle;
-(id)recordZoneName;
-(id)searchableTextContent;
-(id)searchableTextContentWithoutTitle;
-(id)systemPaperModel;
-(id)tableModel;
-(id)unsupportedAttachmentTitle;
-(id)updateAttachmentPreviewImageWithImageData:(id)arg0 size:(struct CGSize )arg1 scale:(CGFloat)arg2 appearanceType:(NSUInteger)arg3 scaleWhenDrawing:(BOOL)arg4 metadata:(id)arg5 sendNotification:(BOOL)arg6 ;
-(id)updateAttachmentPreviewImageWithImageSrc:(struct CGImageSource *)arg0 maxDimension:(CGFloat)arg1 scale:(CGFloat)arg2 appearanceType:(NSUInteger)arg3 scaleWhenDrawing:(BOOL)arg4 metadata:(id)arg5 sendNotification:(BOOL)arg6 ;
-(short)attachmentType;
-(struct CGRect )bounds;
-(struct CGSize )intrinsicContentSize;
-(struct _NSRange )rangeInNote;
-(void)accountWillChangeToAccount:(id)arg0 ;
-(void)addLocationIfNeeded;
-(void)addPaperBundleToRecordIfAppropriate:(id)arg0 ;
-(void)attachmentDidChange;
-(void)awakeFromFetch;
-(void)clearCachedImages;
-(void)dealloc;
-(void)deleteAttachmentPreviewImages;
-(void)deleteFromLocalDatabase;
-(void)didRefresh:(BOOL)arg0 ;
-(void)didTurnIntoFault;
-(void)fixBrokenReferences;
-(void)fixMarkedForDeletionForScannedDocuments;
-(void)invalidateAttachmentPreviewImages;
-(void)loadFromArchive:(*void)arg0 dataPersister:(id)arg1 withIdentifierMap:(id)arg2 ;
-(void)loadLinkPreviewForSynapseItem:(id)arg0 ;
-(void)loadPreviewArchive:(*void)arg0 previewDataIdentifier:(id)arg1 dataPersister:(id)arg2 ;
-(void)markForDeletion;
-(void)mergeFallbackImageAndPDFFromRecord:(id)arg0 ;
-(void)mergePaperBundleFromRecord:(id)arg0 ;
-(void)objectWasFetchedFromCloudWithRecord:(id)arg0 accountID:(id)arg1 force:(BOOL)arg2 ;
-(void)objectWasPushedToCloudWithOperation:(id)arg0 serverRecord:(id)arg1 ;
-(void)prepareForDeletion;
-(void)processFallbackAsset:(id)arg0 fallbackAssetType:(NSInteger)arg1 ;
-(void)purgeAttachmentPreviewImages;
-(void)recursivelyAddSubAttachments:(id)arg0 ;
-(void)regenerateTitle;
-(void)saveAndClearDecryptedData;
-(void)saveMergeableDataIfNeeded;
-(void)saveMergeableDataIfNeededAndSaveContextIfNeeded:(BOOL)arg0 ;
-(void)savePreview:(id)arg0 toArchive:(*void)arg1 previewDataIdentifier:(id)arg2 dataPersister:(id)arg3 ;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setIsBeingEditedLocallyOnDevice:(BOOL)arg0 ;
-(void)setNote:(id)arg0 ;
-(void)setParentAttachment:(id)arg0 ;
-(void)setTypeUTI:(id)arg0 ;
-(void)setTypeUTI:(id)arg0 resetToIntrinsicNotesVersion:(BOOL)arg1 ;
-(void)suppressFileDeletion;
-(void)undeleteAttachmentPreviewImages;
-(void)unmarkForDeletion;
-(void)updateAfterMediaChange;
-(void)updateAttachmentSectionWithTypeUTI:(id)arg0 ;
-(void)updateCombinedSummary;
-(void)updateMarkedForDeletionStateAttachmentIsInUse:(BOOL)arg0 ;
-(void)updateParentReferenceIfNecessary;
-(void)updatePlaceInLocationIfNeededHandler:(id)arg0 ;
-(void)updatePreviewsFromRecord:(id)arg0 ;
-(void)willRefresh:(BOOL)arg0 ;
-(void)willSave;
-(void)willTurnIntoFault;
-(void)willUpdateDeviceReplicaIDsToNotesVersion:(NSInteger)arg0 ;
-(void)writeFallbackImageData:(id)arg0 ;
-(void)writeFallbackPDFData:(id)arg0 ;


@end


#endif