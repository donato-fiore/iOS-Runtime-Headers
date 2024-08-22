// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICATTACHMENTDRAWINGMODEL_H
#define ICATTACHMENTDRAWINGMODEL_H



#import "ICAttachmentModel.h"
#import "ICDrawingVersionedDocument.h"
#import "ICDrawing.h"

@interface ICAttachmentDrawingModel : ICAttachmentModel {
    ICDrawingVersionedDocument *_drawingDocument;
}


@property (readonly, nonatomic) ICDrawing *drawing;
@property (nonatomic) BOOL observingAttachment; // ivar: _observingAttachment


+(id)contentInfoTextWithAttachmentCount:(NSUInteger)arg0 ;
-(BOOL)canSaveURL;
-(BOOL)hasPreviews;
-(BOOL)mergeWithMergeableData:(id)arg0 ;
-(BOOL)preferLocalPreviewImages;
-(BOOL)previewsSupportMultipleAppearances;
-(BOOL)shouldSyncPreviewImageToCloud:(id)arg0 ;
-(BOOL)showThumbnailInNoteList;
-(BOOL)supportsQuickLook;
-(NSInteger)previewImageOrientation;
-(id)initWithAttachment:(id)arg0 ;
-(id)previewImageURL;
-(id)previewItemTitle;
-(id)previewItemURL;
-(id)saveURL;
-(struct CGAffineTransform )previewImageOrientationTransform;
-(void)attachmentIsDeallocating:(id)arg0 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)startObservingAttachment;
-(void)stopObservingAttachment:(id)arg0 ;
-(void)writeMergeableData;


@end


#endif