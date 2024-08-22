// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICNOTE_H
#define ICNOTE_H

@class NSUUID, NSMutableArray, NSString, NSSet, NSArray, NSDate, NSData, NSNumber, NSManagedObjectContext, NSManagedObjectID, NSURL, CSSearchableItemAttributeSet;
@protocol ICCloudObject, ICSearchIndexableNote, TTMergeableStringDelegate, ICNoteUI, ICDerivedAttributeProviding, ICNoteMergeabilityDelegate;


#import "ICCloudSyncingObject.h"
#import "ICAccount.h"
#import "TTVectorMultiTimestamp.h"
#import "TTMergeableStringVersionedDocument.h"
#import "ICFolder.h"
#import "ICNoteData.h"
#import "ICMergeableDictionary.h"
#import "ICAttachment.h"

@interface ICNote : ICCloudSyncingObject <ICCloudObject, ICSearchIndexableNote, TTMergeableStringDelegate, ICNoteUI, ICDerivedAttributeProviding>

 {
    NSUUID *_uuid;
    id *_noteDidSaveObserver;
    NSMutableArray *_noteDidSaveBlocks;
}


@property (retain, nonatomic) ICAccount *account;
@property (readonly, copy, nonatomic) NSString *accountName;
@property (copy, nonatomic) TTVectorMultiTimestamp *archivedTimestamp; // ivar: archivedTimestamp
@property (nonatomic) short attachmentViewType;
@property (retain, nonatomic) NSSet *attachments;
@property (readonly, nonatomic) NSArray *authorsExcludingCurrentUser;
@property (readonly, copy, nonatomic) NSString *contentIdentifier;
@property (readonly, copy, nonatomic) NSString *contentInfoText;
@property (readonly, copy, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) NSInteger currentStatus;
@property (readonly, copy, nonatomic) NSString *dataSourceIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (retain) NSData *decryptedData; // ivar: decryptedData
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) TTMergeableStringVersionedDocument *document; // ivar: _document
@property (readonly, nonatomic) TTMergeableStringVersionedDocument *documentWithoutCreating;
@property (retain, nonatomic) ICFolder *folder;
@property (retain, nonatomic) NSDate *folderModificationDate;
@property (readonly, copy, nonatomic) NSString *folderName;
@property (readonly, copy, nonatomic) NSString *folderNameForNoteList;
@property (retain, nonatomic) NSNumber *hasChecklist;
@property (retain, nonatomic) NSNumber *hasChecklistInProgress;
@property (readonly, nonatomic) BOOL hasUnreadChanges;
@property (readonly, nonatomic) BOOL hasUnreadChanges;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSSet *inlineAttachments;
@property (readonly, nonatomic) BOOL isDeletable;
@property (readonly, nonatomic) BOOL isDeletedOrInTrash;
@property (readonly, nonatomic) BOOL isHiddenFromSearch;
@property (readonly, nonatomic) BOOL isModernNote;
@property (readonly, nonatomic) BOOL isMovable;
@property (nonatomic) BOOL isNewNoteWithHashtagsInsertedIntoBody; // ivar: _isNewNoteWithHashtagsInsertedIntoBody
@property (readonly, nonatomic) BOOL isPasswordProtected;
@property (nonatomic) BOOL isPerformingMerge; // ivar: _isPerformingMerge
@property (readonly, nonatomic) BOOL isPinned;
@property (nonatomic) BOOL isPinned;
@property BOOL isRecoveringCryptoWrappedKey; // ivar: isRecoveringCryptoWrappedKey
@property (readonly, nonatomic) BOOL isSharedAndEmpty;
@property (readonly, nonatomic) BOOL isSharedReadOnly;
@property (readonly, nonatomic) BOOL isSharedViaICloud;
@property (readonly, nonatomic) BOOL isSharedViaICloudFolder;
@property (nonatomic) BOOL isSystemPaper;
@property (readonly, nonatomic) BOOL isUnsupported;
@property (retain, nonatomic) NSDate *lastActivityRecentUpdatesViewedDate;
@property (retain, nonatomic) NSDate *lastActivitySummaryViewedDate;
@property (retain, nonatomic) NSDate *lastAttributionsViewedDate;
@property (retain, nonatomic) NSDate *lastNotifiedDate;
@property (copy, nonatomic) TTVectorMultiTimestamp *lastNotifiedTimestamp; // ivar: _lastNotifiedTimestamp
@property (retain, nonatomic) NSData *lastNotifiedTimestampData;
@property (retain, nonatomic) NSDate *lastOpenedDate;
@property (retain, nonatomic) NSDate *lastViewedModificationDate;
@property (copy, nonatomic) TTVectorMultiTimestamp *lastViewedTimestamp; // ivar: _lastViewedTimestamp
@property (retain, nonatomic) NSData *lastViewedTimestampData;
@property (retain, nonatomic) NSString *legacyContentHashAtImport;
@property (retain, nonatomic) NSString *legacyImportDeviceIdentifier;
@property (retain, nonatomic) NSString *legacyManagedObjectIDURIRepresentation;
@property (retain, nonatomic) NSDate *legacyModificationDateAtImport;
@property (retain, nonatomic) NSNumber *legacyNoteWasPlainText;
@property (readonly, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (weak, nonatomic) NSObject<ICNoteMergeabilityDelegate> *mergeabilityDelegate; // ivar: mergeabilityDelegate
@property (readonly, copy, nonatomic) NSDate *modificationDate;
@property (retain, nonatomic) NSDate *modificationDate;
@property (readonly, nonatomic) BOOL needsInitialDerivedAttributesUpdate;
@property (nonatomic) BOOL needsRefresh; // ivar: needsRefresh
@property (readonly, nonatomic) BOOL needsToBeDeletedFromCloud;
@property (readonly, nonatomic) BOOL needsToBeFetchedFromCloud;
@property (readonly, nonatomic) BOOL needsToBePushedToCloud;
@property (nonatomic) BOOL needsToSaveLastViewedTimestamp; // ivar: needsToSaveLastViewedTimestamp
@property (readonly, copy, nonatomic) NSString *noteAsPlainTextWithoutTitle;
@property (readonly, nonatomic) NSSet *noteCellKeyPaths;
@property (retain, nonatomic) ICNoteData *noteData;
@property (retain, nonatomic) NSNumber *noteHasChanges;
@property (readonly, nonatomic) NSManagedObjectID *objectID;
@property (readonly, nonatomic) NSURL *paperCoherenceContextURL;
@property (nonatomic) short paperStyleType;
@property (nonatomic) short preferredBackgroundType;
@property (nonatomic) BOOL preventReleasingTextStorage; // ivar: preventReleasingTextStorage
@property (retain, nonatomic) ICFolder *primitiveFolder;
@property (retain, nonatomic) NSDate *recentUpdatesFirstSeenDate; // ivar: _recentUpdatesFirstSeenDate
@property (retain, nonatomic) NSDate *recentUpdatesGenerationDate; // ivar: _recentUpdatesGenerationDate
@property (readonly, nonatomic) ICMergeableDictionary *replicaIDToUserID; // ivar: _replicaIDToUserID
@property (retain, nonatomic) NSData *replicaIDToUserIDDictData;
@property (retain, nonatomic) id *reservedForCollaborationColorManager; // ivar: _reservedForCollaborationColorManager
@property (retain, nonatomic) id *reservedForTextStorage; // ivar: _reservedForTextStorage
@property (readonly, copy, nonatomic) NSString *searchDomainIdentifier;
@property (readonly, copy, nonatomic) NSString *searchIndexingIdentifier;
@property (readonly, nonatomic) BOOL searchResultCanBeDeletedFromNoteContext;
@property (readonly, nonatomic) NSUInteger searchResultType;
@property (readonly, nonatomic) NSUInteger searchResultsSection;
@property (readonly, nonatomic) CSSearchableItemAttributeSet *searchableItemAttributeSet;
@property (retain, nonatomic) NSString *selectedInkColorString;
@property (retain, nonatomic) NSString *selectedInkIdentifier;
@property (nonatomic) BOOL shouldAddMediaAsynchronously; // ivar: shouldAddMediaAsynchronously
@property (nonatomic) BOOL showsAuthorHighlights;
@property (readonly, copy, nonatomic) NSString *showsAuthorHighlightsUserDefaultsKey;
@property (retain, nonatomic) NSString *snippet;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *thumbnailAttachmentIdentifier;
@property (readonly, nonatomic) TTVectorMultiTimestamp *timestamp;
@property (readonly, copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) ICAttachment *titleSourceAttachment;
@property (readonly, copy, nonatomic) NSString *trimmedTitle;
@property (readonly, nonatomic) CSSearchableItemAttributeSet *userActivityContentAttributeSet;
@property (readonly, nonatomic) NSInteger visibilityTestingType;


+(BOOL)containsUndeletableNotes:(id)arg0 ;
+(BOOL)containsUnduplicatableNotes:(id)arg0 ;
+(BOOL)containsUnmovableNotes:(id)arg0 ;
+(BOOL)didShowExceededStorageQuotaAlertForNoteWithIdentifier:(id)arg0 ;
+(BOOL)notes:(id)arg0 containSharedNotesNotSharedViaFolder:(id)arg1 ;
+(BOOL)supportsActivityEvents;
+(BOOL)supportsNotesVersionTracking;
+(BOOL)supportsUserSpecificRecords;
+(NSUInteger)countOfAllNotesInContext:(id)arg0 ;
+(NSUInteger)countOfNotesMatchingPredicate:(id)arg0 context:(id)arg1 ;
+(NSUInteger)countOfPasswordProtectedNotesInContext:(id)arg0 ;
+(NSUInteger)countOfVisibleNotesInContext:(id)arg0 ;
+(NSUInteger)maxNoteAttachments;
+(NSUInteger)maxNoteTextLength;
+(id)accountIdentifiersOfNotes:(id)arg0 ;
+(id)allNotesInContext:(id)arg0 ;
+(id)allPasswordProtectedNoteIdentifiersInContext:(id)arg0 ;
+(id)defaultTitleForEmptyNote;
+(id)existingCloudObjectForRecordID:(id)arg0 accountID:(id)arg1 context:(id)arg2 ;
+(id)keyPathsForValuesAffectingCanBeSharedViaICloud;
+(id)keyPathsForValuesAffectingCloudAccount;
+(id)keyPathsForValuesAffectingHasUnreadChanges;
+(id)keyPathsForValuesAffectingIsEditable;
+(id)keyPathsForValuesAffectingPrefersLightBackground;
+(id)keyPathsForValuesAffectingRecentUpdatesGenerationDate;
+(id)modernNotesInObjects:(id)arg0 ;
+(id)newCloudObjectForRecord:(id)arg0 accountID:(id)arg1 context:(id)arg2 ;
+(id)newEmptyNoteInContext:(id)arg0 ;
+(id)newEmptyNoteInFolder:(id)arg0 ;
+(id)newEmptyNoteWithIdentifier:(id)arg0 folder:(id)arg1 ;
+(id)newEmptyNoteWithUUID:(id)arg0 folder:(id)arg1 ;
+(id)newFetchRequestForNotes;
+(id)newNoteWithoutIdentifierInAccount:(id)arg0 ;
+(id)newNoteWithoutIdentifierInFolder:(id)arg0 ;
+(id)newObjectWithIdentifier:(id)arg0 context:(id)arg1 ;
+(id)newObjectWithIdentifier:(id)arg0 folder:(id)arg1 ;
+(id)newPlaceholderObjectForRecordName:(id)arg0 account:(id)arg1 ;
+(id)newPlaceholderObjectForRecordName:(id)arg0 accountID:(id)arg1 context:(id)arg2 ;
+(id)noteIdentifiersMatchingPredicate:(id)arg0 context:(id)arg1 ;
+(id)noteWithIdentifier:(id)arg0 accountID:(id)arg1 context:(id)arg2 ;
+(id)noteWithIdentifier:(id)arg0 context:(id)arg1 ;
+(id)noteWithIdentifier:(id)arg0 includeDeleted:(BOOL)arg1 accountID:(id)arg2 context:(id)arg3 ;
+(id)noteWithIdentifier:(id)arg0 includeDeleted:(BOOL)arg1 context:(id)arg2 ;
+(id)noteWithLegacyManagedObjectID:(id)arg0 context:(id)arg1 ;
+(id)noteWithUUID:(id)arg0 context:(id)arg1 ;
+(id)notesContainingHashtagWithStandarizedContent:(id)arg0 context:(id)arg1 ;
+(id)notesMatchingPredicate:(id)arg0 context:(id)arg1 ;
+(id)passwordProtectedNoteIdentifiersForAccount:(id)arg0 ;
+(id)predicateForNote:(id)arg0 ;
+(id)predicateForNotesInAccountWithIdentifier:(id)arg0 ;
+(id)predicateForPinnedNotes;
+(id)predicateForSearchableNotesInContext:(id)arg0 ;
+(id)predicateForSystemPaperNotes;
+(id)predicateForSystemPaperNotesNotInTrash;
+(id)predicateForVisibleNotesInContext:(id)arg0 ;
+(id)predicateForVisibleNotesIncludingTrash:(BOOL)arg0 includingSystemPaper:(BOOL)arg1 inContext:(id)arg2 ;
+(id)refreshAllOfNoteWithIdentifier:(id)arg0 context:(id)arg1 ;
+(id)snippetForPasswordProtectedNote:(id)arg0 ;
+(id)systemPaperNotesFetchRequest;
+(id)visibleNoteWithIdentifier:(id)arg0 context:(id)arg1 ;
+(id)visibleNotesInContext:(id)arg0 ;
// +(void)createNoteForAirDropDocument:(id)arg0 legacyContext:(id)arg1 processAttributedString:(id)arg2 completion:(unk)arg3  ;
+(void)deleteEmptyNote:(id)arg0 ;
+(void)deleteNote:(id)arg0 ;
+(void)enumerateNotesInContext:(id)arg0 batchSize:(NSUInteger)arg1 visibleOnly:(BOOL)arg2 saveAfterBatch:(BOOL)arg3 usingBlock:(id)arg4 ;
+(void)purgeAllNotesInContext:(id)arg0 ;
+(void)purgeNote:(id)arg0 ;
+(void)setDidShowExceededStorageQuotaAlert:(BOOL)arg0 forNoteWithIdentifier:(id)arg1 ;
-(BOOL)addUserID:(id)arg0 forReplicaID:(id)arg1 ;
-(BOOL)allowsExporting;
-(BOOL)allowsNewTextLength:(NSUInteger)arg0 ;
-(BOOL)attachmentCountExceeded;
-(BOOL)attachmentExceedsMaxSizeAllowed:(NSUInteger)arg0 ;
-(BOOL)canAddAttachment;
-(BOOL)canAddAttachments:(NSUInteger)arg0 ;
-(BOOL)canBeRootShareObject;
-(BOOL)canBeSharedViaICloud;
-(BOOL)containsAttachmentsUnsupportedInPasswordProtection;
-(BOOL)containsPlaceholderBlockOrInlineAttachments;
-(BOOL)hasAllMandatoryFields;
-(BOOL)hasChecklistOnlyInProgress:(BOOL)arg0 ;
-(BOOL)hasLoadedDocument;
-(BOOL)hasThumbnailImage;
-(BOOL)isDuplicatable;
-(BOOL)isEditable;
-(BOOL)isEmpty;
-(BOOL)isInICloudAccount;
-(BOOL)isLockable;
-(BOOL)isPinnable;
-(BOOL)isSharable;
-(BOOL)isVisible;
-(BOOL)needsToDeleteShare;
-(BOOL)needsToFetchAfterServerRecordChanged:(id)arg0 ;
-(BOOL)prefersLightBackground;
-(BOOL)requiresLegacyTombstoneAfterDeletion;
-(BOOL)shouldReleaseDocumentWhenTurningIntoFault;
-(BOOL)shouldSyncMinimumSupportedNotesVersion;
-(BOOL)supportsDeletionByTTL;
-(BOOL)updateDeviceReplicaIDsToUserIDIfNeeded;
-(BOOL)updateLastViewedTimestampWithCurrentTimestamp;
-(BOOL)wantsUndoCommands;
-(NSInteger)intrinsicNotesVersion;
-(NSInteger)mergePolicyForRecord:(id)arg0 ;
-(NSUInteger)mergeReplicaIDToUserID:(id)arg0 ;
-(NSUInteger)mergeWithNoteData:(id)arg0 ;
-(NSUInteger)mergeWithNoteDocument:(id)arg0 ;
-(NSUInteger)textOffsetAtSearchIndex:(NSUInteger)arg0 inSearchableString:(id)arg1 ;
-(id)addAttachment;
-(id)addAttachmentWithData:(id)arg0 filename:(id)arg1 ;
-(id)addAttachmentWithFileURL:(id)arg0 ;
-(id)addAttachmentWithFileURL:(id)arg0 updateFileBasedAttributes:(BOOL)arg1 analytics:(BOOL)arg2 ;
-(id)addAttachmentWithFileWrapper:(id)arg0 ;
-(id)addAttachmentWithIdentifier:(id)arg0 ;
-(id)addAttachmentWithRemoteFileURL:(id)arg0 ;
-(id)addAttachmentWithUTI:(id)arg0 ;
-(id)addAttachmentWithUTI:(id)arg0 data:(id)arg1 filename:(id)arg2 ;
-(id)addAttachmentWithUTI:(id)arg0 data:(id)arg1 filename:(id)arg2 updateFileBasedAttributes:(BOOL)arg3 analytics:(BOOL)arg4 ;
-(id)addAttachmentWithUTI:(id)arg0 data:(id)arg1 filenameExtension:(id)arg2 ;
-(id)addAttachmentWithUTI:(id)arg0 identifier:(id)arg1 urlString:(id)arg2 analytics:(BOOL)arg3 ;
-(id)addAttachmentWithUTI:(id)arg0 withURL:(id)arg1 ;
-(id)addAttachmentWithUTI:(id)arg0 withURL:(id)arg1 updateFileBasedAttributes:(BOOL)arg2 analytics:(BOOL)arg3 ;
-(id)addGalleryAttachmentWithIdentifier:(id)arg0 ;
-(id)addInlineAttachmentWithIdentifier:(id)arg0 ;
-(id)addInlineDrawingAttachmentWithAnalytics:(BOOL)arg0 ;
-(id)addSynapseLinkAttachmentWithContentItem:(id)arg0 ;
-(id)addSystemPaperAttachmentWithIdentifier:(id)arg0 ;
-(id)addTableAttachment;
-(id)addTableAttachmentWithTableData:(id)arg0 ;
-(id)addTableAttachmentWithText:(id)arg0 ;
-(id)addURLAttachmentWithURL:(id)arg0 ;
-(id)allAttachmentsIncludingSubAttachments;
-(id)allDrawings;
-(id)allNoteTextAttachmentsIncludingSubAttachments:(BOOL)arg0 ;
-(id)allNoteTextInlineAttachments;
-(id)anyVisibleInstanceOfHashtag:(id)arg0 ;
-(id)attachmentForWebThumbnail;
-(id)attachmentWithIdentifier:(id)arg0 ;
-(id)attachmentsWithUTType:(id)arg0 ;
-(id)attributedString;
-(id)childCloudObjects;
-(id)childCloudObjectsForMinimumSupportedVersionPropagation;
-(id)cloudAccount;
-(id)folderReferenceFromRecord:(id)arg0 ;
-(id)ic_loggingValues;
-(id)inlineAttachmentWithTTAttachment:(id)arg0 ;
-(id)mergeableString;
-(id)minimumNotesVersionForAllParticipants;
-(id)minimumNotesVersionForUserIDs:(id)arg0 ;
-(id)newAirDropDocument;
-(id)newlyCreatedRecord;
-(id)newlyCreatedRecordWithObfuscator:(id)arg0 ;
-(id)newlyCreatedUserSpecificRecord;
-(id)noteAsPlainText;
-(id)notesVersionForParticipant:(id)arg0 ;
-(id)notesVersionForUserID:(id)arg0 ;
-(id)objectsToBeDeletedBeforeThisObject;
-(id)parentCloudObject;
-(id)parentCloudObjectModificationDate;
-(id)parentEncryptableObject;
-(id)participantForReplicaID:(id)arg0 ;
-(id)quotedTitle;
-(id)recordType;
-(id)recordZoneName;
-(id)searchableString;
-(id)shareTitle;
-(id)shareType;
-(id)textDataDecryptedIfNecessary;
-(id)trashFolderIfDeleted;
-(id)userIDForReplicaID:(id)arg0 ;
-(id)uuid;
-(id)visibleAttachments;
-(id)visibleAttachmentsWithType:(short)arg0 ;
-(id)visibleInlineAttachments;
-(id)visiblePaperKitAttachments;
-(id)visibleTopLevelAttachments;
-(struct _NSRange )rangeForAttachment:(id)arg0 ;
-(struct _NSRange )rangeForSnippet;
-(struct _NSRange )rangeForTitle:(*BOOL)arg0 ;
-(struct _NSRange )textRangeForSearchRange:(struct _NSRange )arg0 inSearchableString:(id)arg1 ;
-(void)addInlineAttachments:(id)arg0 ;
-(void)addInlineAttachmentsObject:(id)arg0 ;
-(void)addMediaToAttachment:(id)arg0 withBlock:(id)arg1 ;
-(void)addShareParticipantsToAttributeSet:(id)arg0 ;
-(void)addUndoCommand:(id)arg0 ;
-(void)awakeFromFetch;
-(void)beginEditing;
-(void)changePinStatusIfPossible;
-(void)clearRecentUpdatesGenerationDateIfNeeded;
-(void)dealloc;
-(void)decrypt;
-(void)deduplicateSelfAndCreateNewObjectFromRecord:(id)arg0 ;
-(void)deleteFromLocalDatabase;
-(void)didAcceptShare:(id)arg0 ;
-(void)didChangeNoteText;
-(void)didFetchUserSpecificRecord:(id)arg0 accountID:(id)arg1 force:(BOOL)arg2 ;
-(void)didRefresh:(BOOL)arg0 ;
-(void)didSave;
-(void)edited:(NSUInteger)arg0 range:(struct _NSRange )arg1 changeInLength:(NSInteger)arg2 ;
-(void)endEditing;
-(void)enumerateAttachmentsInOrderUsingBlock:(id)arg0 ;
-(void)enumerateInlineAttachmentsInOrderUsingBlock:(id)arg0 ;
-(void)fixBrokenReferences;
-(void)markActivitySummaryViewed;
-(void)markAsSystemPaperIfNeeded:(BOOL)arg0 ;
-(void)markForDeletion;
-(void)markLastActivityRecentUpdatesViewed;
-(void)mergeDataFromRecord:(id)arg0 account:(id)arg1 ;
-(void)mergeDataFromRecord:(id)arg0 accountID:(id)arg1 force:(BOOL)arg2 ;
-(void)mergeDataFromRecord:(id)arg0 mergePolicy:(NSInteger)arg1 account:(id)arg2 ;
-(void)mergeDataFromUserSpecificRecord:(id)arg0 accountID:(id)arg1 ;
-(void)mergeEncryptedDataFromRecord:(id)arg0 ;
-(void)mergeFoldersFromRecord:(id)arg0 account:(id)arg1 ;
-(void)mergeNotePrimitiveData;
-(void)mergeTextData:(id)arg0 record:(id)arg1 mergePolicy:(NSInteger)arg2 ;
-(void)mergeTextDataFromRecord:(id)arg0 mergePolicy:(NSInteger)arg1 ;
-(void)mergeUnappliedEncryptedRecordsIncludingAttachmentsImmediately;
-(void)mergeUnappliedEncryptedRecordsIncludingAttachmentsInBackground;
-(void)objectWasFetchedFromCloudWithRecord:(id)arg0 accountID:(id)arg1 ;
-(void)objectWasFetchedFromCloudWithRecord:(id)arg0 accountID:(id)arg1 force:(BOOL)arg2 ;
-(void)prepareForDeletion;
-(void)recoverMissingCryptoWrappedKeyIfNecessaryWithMainKey:(id)arg0 ;
-(void)refreshNoteTextFromDataStore;
-(void)regenerateTitle:(BOOL)arg0 snippet:(BOOL)arg1 ;
-(void)regenerateTitleAndSnippetIfNecessaryForEdit:(NSUInteger)arg0 range:(struct _NSRange )arg1 changeInLength:(NSInteger)arg2 ;
-(void)removeInlineAttachments:(id)arg0 ;
-(void)removeInlineAttachmentsObject:(id)arg0 ;
-(void)replaceWithDocument:(id)arg0 ;
-(void)resetUniqueIdentifier;
-(void)saveAndClearDecryptedData;
-(void)saveNoteData;
-(void)setCryptoInitializationVector:(id)arg0 ;
-(void)setCryptoTag:(id)arg0 ;
-(void)setLegacyManagedObjectID:(id)arg0 ;
-(void)setMarkedForDeletion:(BOOL)arg0 ;
-(void)setNeedsInitialFetchFromCloud:(BOOL)arg0 ;
-(void)turnAttachmentsIntoFaults;
-(void)unmarkForDeletion;
-(void)updateChangeCount;
-(void)updateDerivedAttributesIfNeeded;
-(void)updateTimestampWithUnserializedChanges;
-(void)willAddOrRemovePassword;
-(void)willRefresh:(BOOL)arg0 ;
-(void)willSave;
-(void)willTurnIntoFault;
-(void)willUpdateDeviceReplicaIDsToNotesVersion:(NSInteger)arg0 ;


@end


#endif