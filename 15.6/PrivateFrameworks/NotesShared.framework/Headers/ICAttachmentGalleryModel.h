// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICATTACHMENTGALLERYMODEL_H
#define ICATTACHMENTGALLERYMODEL_H



#import "ICAttachmentModel.h"
#import "CROrderedSet.h"
#import "TTOrderedSetVersionedDocument.h"

@interface ICAttachmentGalleryModel : ICAttachmentModel

@property (readonly, nonatomic) CROrderedSet *attachmentIdentifiersOrderedSet;
@property (retain, nonatomic) TTOrderedSetVersionedDocument *attachmentIdentifiersOrderedSetDocument; // ivar: _attachmentIdentifiersOrderedSetDocument


+(id)contentInfoTextWithAttachmentCount:(NSUInteger)arg0 ;
-(BOOL)attachmentHasMergeableData;
-(BOOL)canSaveURL;
-(BOOL)canSaveURLWithOtherAttachments;
-(BOOL)hasPreviews;
-(BOOL)hasThumbnailImage;
-(BOOL)mergeWithMergeableData:(id)arg0 ;
-(BOOL)providesStandaloneTitleForNote;
-(BOOL)shouldGeneratePreviewAfterChangeInSubAttachmentWithIdentifier:(id)arg0 ;
-(BOOL)showThumbnailInNoteList;
-(NSInteger)previewImageOrientation;
-(NSUInteger)indexOfSubAttachmentWithIdentifier:(id)arg0 ;
-(NSUInteger)subAttachmentsCount;
-(id)firstSubAttachment;
-(id)previewImageTypeUTI;
-(id)searchableStringArray;
-(id)searchableTextContent;
-(id)singleSubAttachmentAtIndex:(NSUInteger)arg0 ;
-(id)standaloneTitleForNote;
-(id)subAttachmentIdentifierAtIndex:(NSUInteger)arg0 ;
-(id)subAttachmentIdentifiers;
-(id)titleForSubAttachment:(id)arg0 ;
-(short)sectionForSubAttachments;
-(void)addSubAttachment:(id)arg0 ;
-(void)attachmentDidRefresh:(BOOL)arg0 ;
-(void)attachmentWillRefresh:(BOOL)arg0 ;
-(void)attachmentWillTurnIntoFault;
-(void)enumerateSubAttachmentsWithBlock:(id)arg0 ;
-(void)insertSubAttachment:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)removeSubAttachment:(id)arg0 ;
-(void)undeleteSubAttachments;
-(void)updateAfterLoadWithSubAttachmentIdentifierMap:(id)arg0 ;
-(void)updateAttachmentMarkedForDeletionStateAttachmentIsInUse:(BOOL)arg0 ;
-(void)writeMergeableData;


@end


#endif