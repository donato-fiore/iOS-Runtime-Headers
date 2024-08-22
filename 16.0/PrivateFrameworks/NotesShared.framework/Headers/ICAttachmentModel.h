// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICATTACHMENTMODEL_H
#define ICATTACHMENTMODEL_H

@class NSUUID, NSString, NSURL;
@protocol ICAttachmentModelUI;

#import <Foundation/Foundation.h>

#import "ICAttachment.h"

@interface ICAttachmentModel : NSObject <ICAttachmentModelUI>



@property (readonly, weak, nonatomic) ICAttachment *attachment; // ivar: _attachment
@property (readonly, nonatomic) BOOL canMarkup;
@property (readonly, nonatomic) BOOL canSaveURL;
@property (readonly, nonatomic) BOOL canSaveURLWithOtherAttachments;
@property (readonly, copy, nonatomic) NSUUID *currentReplicaID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isGeneratingPreviews) BOOL generatingPreviews; // ivar: _generatingPreviews
@property (readonly, nonatomic) NSString *hardLinkVersion;
@property (nonatomic) BOOL hasDeepLink; // ivar: _hasDeepLink
@property (readonly, nonatomic) BOOL hasPreviews;
@property (readonly, nonatomic) BOOL hasThumbnailImage;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGSize intrinsicContentSize;
@property (readonly, nonatomic) BOOL isIncludedInGenericAttachmentCount;
@property (nonatomic, getter=isMergeableDataDirty) BOOL mergeableDataDirty; // ivar: _mergeableDataDirty
@property (readonly, nonatomic) BOOL needsFullSizePreview;
@property (readonly, nonatomic) BOOL preferLocalPreviewImages;
@property BOOL previewGenerationOperationCancelled; // ivar: _previewGenerationOperationCancelled
@property (readonly, nonatomic) NSString *previewImageTypeUTI;
@property (readonly, nonatomic) BOOL previewsSupportMultipleAppearances;
@property (readonly, nonatomic) BOOL requiresPostProcessing;
@property (readonly, nonatomic) NSURL *saveURL;
@property (readonly, nonatomic) BOOL shouldShowInContentInfoText;
@property (readonly, nonatomic) BOOL showThumbnailInNoteList;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsImageClassification;
@property (readonly, nonatomic) BOOL supportsOCR;
@property (readonly, nonatomic) BOOL supportsQuickLook;


+(Class)modelClassForAttachmentType:(short)arg0 ;
+(id)contentInfoTextWithAttachmentCount:(NSUInteger)arg0 ;
+(void)deletePreviewItemHardLinkURLs;
-(BOOL)canConvertToHTMLForSharing;
-(BOOL)isReadyToPresent;
-(BOOL)mergeWithMergeableData:(id)arg0 ;
-(BOOL)providesStandaloneTitleForNote;
-(BOOL)providesTextContentInNote;
-(BOOL)shouldCropImage;
-(BOOL)shouldGeneratePreviewAfterChangeInSubAttachmentWithIdentifier:(id)arg0 ;
-(BOOL)shouldSyncPreviewImageToCloud:(id)arg0 ;
-(NSInteger)previewImageOrientation;
-(id)additionalIndexableTextContentInNote;
-(id)attributesForSharingHTMLWithTagName:(*id)arg0 textContent:(*id)arg1 ;
-(id)correctedHardlinkURLFileExtensionForExtension:(id)arg0 ;
-(id)dataForQuickLook;
-(id)dataForTypeIdentifier:(id)arg0 ;
-(id)fileURLForTypeIdentifier:(id)arg0 ;
-(id)generateHardLinkURLIfNecessaryForURL:(id)arg0 ;
-(id)generateHardLinkURLIfNecessaryForURL:(id)arg0 withFileName:(id)arg1 ;
-(id)generateTemporaryURLWithExtension:(id)arg0 ;
-(id)hardLinkFolderURL;
-(id)initWithAttachment:(id)arg0 ;
-(id)localizedFallbackSubtitleIOS;
-(id)localizedFallbackSubtitleMac;
-(id)localizedFallbackTitle;
-(id)mergeableDataForCopying;
-(id)mergeableDataForCopying:(*id)arg0 ;
-(id)previewItemTitle;
-(id)previewItemURL;
-(id)providerDataTypes;
-(id)providerFileTypes;
-(id)searchableTextContent;
-(id)searchableTextContentForLocation;
-(id)searchableTextContentInNote;
-(id)standaloneTitleForNote;
-(id)textContentInNote;
-(id)titleForSubAttachment:(id)arg0 ;
-(short)sectionForSubAttachments;
-(struct CGAffineTransform )previewImageOrientationTransform;
-(void)addLocation;
-(void)attachmentDidRefresh:(BOOL)arg0 ;
-(void)attachmentIsDeallocating:(id)arg0 ;
-(void)attachmentWillRefresh:(BOOL)arg0 ;
-(void)dealloc;
-(void)deleteChildAttachments;
-(void)noteWillAddOrRemovePassword;
-(void)redactAuthorAttributionsToCurrentUser;
-(void)regenerateTextContentInNote;
-(void)removeTimestampsForReplicaID:(id)arg0 ;
-(void)replaceChildInlineAttachment:(id)arg0 withText:(id)arg1 ;
-(void)undeleteChildAttachments;
-(void)updateAfterLoadWithInlineAttachmentIdentifierMap:(id)arg0 ;
-(void)updateAfterLoadWithSubAttachmentIdentifierMap:(id)arg0 ;
-(void)updateAttachmentMarkedForDeletionStateAttachmentIsInUse:(BOOL)arg0 ;
-(void)updateAttachmentSize;
-(void)updateFileBasedAttributes;
-(void)willMarkAttachmentForDeletion;
-(void)writeMergeableData;


@end


#endif