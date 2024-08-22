// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICINLINEATTACHMENT_H
#define ICINLINEATTACHMENT_H

@class NSString, NSDate, NSAttributedString;
@protocol ICCloudObject;


#import "ICBaseAttachment.h"

@interface ICInlineAttachment : ICBaseAttachment <ICCloudObject>



@property (copy, nonatomic) NSString *altText;
@property (nonatomic) BOOL animateInsertion; // ivar: _animateInsertion
@property (readonly, nonatomic) short attachmentType;
@property (copy, nonatomic) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *displayText;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isHashtagAttachment;
@property (readonly, nonatomic) BOOL isMentionAttachment;
@property (nonatomic) NSUInteger mentionNotificationAttemptCount;
@property (nonatomic) int mentionNotificationState;
@property (readonly, nonatomic) BOOL needsToBeDeletedFromCloud;
@property (readonly, nonatomic) BOOL needsToBeFetchedFromCloud;
@property (readonly, nonatomic) BOOL needsToBePushedToCloud;
@property (readonly, nonatomic) NSAttributedString *searchableTextContentInNote;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *tokenContentIdentifier;


+(BOOL)isHashtagStandardizedContent:(id)arg0 usedInAccount:(id)arg1 ;
+(NSUInteger)countOfVisibleInlineAttachmentsForHashtagStandardizedContent:(id)arg0 account:(id)arg1 ;
+(id)canonicalHashtagAttachmentsInContext:(id)arg0 ;
+(id)cloneInlineAttachmentWithIdentifier:(id)arg0 context:(id)arg1 ;
+(id)existingCloudObjectForRecordID:(id)arg0 accountID:(id)arg1 context:(id)arg2 ;
+(id)newAttachmentWithIdentifier:(id)arg0 typeUTI:(id)arg1 altText:(id)arg2 tokenContentIdentifier:(id)arg3 note:(id)arg4 parentAttachment:(id)arg5 ;
+(id)newCloudObjectForRecord:(id)arg0 accountID:(id)arg1 context:(id)arg2 ;
+(id)newHashtagAttachmentWithIdentifier:(id)arg0 forHashtag:(id)arg1 note:(id)arg2 parentAttachment:(id)arg3 ;
+(id)newHashtagAttachmentWithIdentifier:(id)arg0 hashtagText:(id)arg1 creatingHashtagIfNecessary:(BOOL)arg2 note:(id)arg3 parentAttachment:(id)arg4 ;
+(id)newMentionAttachmentWithIdentifier:(id)arg0 mentionText:(id)arg1 userRecordName:(id)arg2 note:(id)arg3 parentAttachment:(id)arg4 ;
+(id)noteFromAttachmentRecord:(id)arg0 accountID:(id)arg1 context:(id)arg2 ;
+(id)predicateForMentionsInContext:(id)arg0 ;
+(id)predicateForUnsupportedAttachmentsInContext:(id)arg0 ;
+(id)recentlyUsedDatesForHashtagsStandardizecContents:(id)arg0 context:(id)arg1 ;
+(void)enumerateInlineAttachmentsInContext:(id)arg0 batchSize:(NSUInteger)arg1 visibleOnly:(BOOL)arg2 saveAfterBatch:(BOOL)arg3 usingBlock:(id)arg4 ;
+(void)purgeAttachment:(id)arg0 ;
+(void)reviveOrTouchHashtag:(id)arg0 ;
-(BOOL)hasAllMandatoryFields;
-(BOOL)isInICloudAccount;
-(BOOL)shouldSyncMinimumSupportedNotesVersion;
-(BOOL)supportsDeletionByTTL;
-(NSInteger)intrinsicNotesVersion;
-(id)clone;
-(id)fallbackDisplayText;
-(id)ic_loggingValues;
-(id)newlyCreatedRecord;
-(id)nonNilAltText;
-(id)parentAttachmentFromRecord:(id)arg0 accountID:(id)arg1 context:(id)arg2 ;
-(id)recordType;
-(id)recordZoneName;
-(struct _NSRange )displayTextRangeForSearchRange:(struct _NSRange )arg0 inSearchableString:(id)arg1 ;
-(void)deleteFromLocalDatabase;
-(void)loadFromArchive:(*void)arg0 dataPersister:(id)arg1 withIdentifierMap:(id)arg2 ;
-(void)markForDeletion;
-(void)mergeDataFromRecord:(id)arg0 accountID:(id)arg1 force:(BOOL)arg2 ;
-(void)objectWasFetchedFromCloudWithRecord:(id)arg0 accountID:(id)arg1 force:(BOOL)arg2 ;
-(void)propagateDeletionToHashtagForMarkForDeletion:(BOOL)arg0 ;
-(void)saveToArchive:(*void)arg0 dataPersister:(id)arg1 ;
-(void)unmarkForDeletion;
-(void)updateMarkedForDeletionStateInlineAttachmentIsInUse:(BOOL)arg0 ;


@end


#endif