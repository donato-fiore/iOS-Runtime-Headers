// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICATTACHMENTINLINEDRAWINGMODEL_H
#define ICATTACHMENTINLINEDRAWINGMODEL_H

@class PKDrawing;


#import "ICAttachmentModel.h"

@interface ICAttachmentInlineDrawingModel : ICAttachmentModel

@property (readonly, nonatomic) PKDrawing *handwritingRecognitionDrawing;


+(id)contentInfoTextWithAttachmentCount:(NSUInteger)arg0 ;
-(BOOL)canConvertToHTMLForSharing;
-(BOOL)hasPreviews;
-(BOOL)isIncludedInGenericAttachmentCount;
-(BOOL)preferLocalPreviewImages;
-(BOOL)previewsSupportMultipleAppearances;
-(BOOL)providesStandaloneTitleForNote;
-(BOOL)shouldShowInContentInfoText;
-(BOOL)shouldSyncPreviewImageToCloud:(id)arg0 ;
-(BOOL)showThumbnailInNoteList;
-(id)additionalIndexableTextContentInNote;
-(id)attributesForSharingHTMLWithTagName:(*id)arg0 textContent:(*id)arg1 ;
-(id)correctedHardlinkURLFileExtensionForExtension:(id)arg0 ;
-(id)newDrawingFromMergeableData;
-(id)searchableTextContentInNote;
-(id)standaloneTitleForNote;


@end


#endif