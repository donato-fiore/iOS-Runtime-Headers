// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKIMAGEATTACHMENTITEM_H
#define CKIMAGEATTACHMENTITEM_H



#import "CKAttachmentItem.h"

@interface CKImageAttachmentItem : CKAttachmentItem

@property (nonatomic) BOOL backgroundEnqueued; // ivar: _backgroundEnqueued
@property CGSize imageSize; // ivar: _imageSize
@property (nonatomic) BOOL useDefaultSize; // ivar: _useDefaultSize


+(id)UTITypes;
-(id)_newImageData;
-(id)imageData;
-(struct CGSize )_calculateImageSize;
-(struct CGSize )size;
-(void)generatePreviewWithCompletion:(id)arg0 ;
-(void)startDeferredSetup;


@end


#endif