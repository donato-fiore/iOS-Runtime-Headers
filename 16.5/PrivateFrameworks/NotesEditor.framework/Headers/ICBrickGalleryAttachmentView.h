// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICBRICKGALLERYATTACHMENTVIEW_H
#define ICBRICKGALLERYATTACHMENTVIEW_H

@class NSString;
@protocol ICGalleryAttachmentEditorControllerDelegate;


#import "ICBrickTextAttachmentView.h"
#import "ICGalleryAttachmentEditorController.h"

@interface ICBrickGalleryAttachmentView : ICBrickTextAttachmentView <ICGalleryAttachmentEditorControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) ICGalleryAttachmentEditorController *galleryEditorController; // ivar: _galleryEditorController
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)didChangeAttachmentTitle;
-(void)didChangeMergeableData;
-(void)didTapAttachment:(id)arg0 ;
-(void)galleryAttachmentEditorControllerDeleteAttachment;
-(void)galleryAttachmentEditorControllerDidDismiss;
-(void)openAttachment;


@end


#endif