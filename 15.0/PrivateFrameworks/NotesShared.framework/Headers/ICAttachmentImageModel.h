// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICATTACHMENTIMAGEMODEL_H
#define ICATTACHMENTIMAGEMODEL_H



#import "ICAttachmentModel.h"

@interface ICAttachmentImageModel : ICAttachmentModel



+(id)contentInfoTextWithAttachmentCount:(NSUInteger)arg0 ;
-(BOOL)canConvertToHTMLForSharing;
-(BOOL)canMarkup;
-(BOOL)canSaveURL;
-(BOOL)hasPreviews;
-(BOOL)hasThumbnailImage;
-(BOOL)needsFullSizePreview;
-(BOOL)shouldCropImage;
-(BOOL)showThumbnailInNoteList;
-(BOOL)supportsImageClassification;
-(BOOL)supportsOCR;
-(BOOL)supportsQuickLook;
-(NSInteger)previewImageOrientation;
-(id)attributesForSharingHTMLWithTagName:(*id)arg0 textContent:(*id)arg1 ;
-(id)generateHardLinkURLIfNecessaryForURL:(id)arg0 ;
-(id)previewImageTypeUTI;
-(id)previewItemTitle;
-(id)saveURL;
-(struct CGAffineTransform )previewImageOrientationTransform;
-(struct CGSize )sizeByCroppingSize:(struct CGSize )arg0 ;
-(void)addLocation;
-(void)updateAttachmentSize;
-(void)updateFileBasedAttributes;


@end


#endif