// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKANIMATEDIMAGEATTACHMENTITEM_H
#define CKANIMATEDIMAGEATTACHMENTITEM_H

@class NSURL;


#import "CKImageAttachmentItem.h"

@interface CKAnimatedImageAttachmentItem : CKImageAttachmentItem

@property (retain, nonatomic) NSURL *animatedPreviewURL; // ivar: _animatedPreviewURL
@property CGSize imageSize; // ivar: _imageSize


+(BOOL)shouldScaleUpPreview;
+(id)UTITypes;
-(id)_newImageData;
-(id)_savedPreviewFromURL:(id)arg0 ;
-(id)animatedPreviewURL:(BOOL)arg0 ;
-(id)generatePreviewFromThumbnail:(id)arg0 width:(CGFloat)arg1 ;
-(id)thumbnailAtIndex:(NSUInteger)arg0 forWidth:(CGFloat)arg1 withImageData:(id)arg2 ;
-(struct CGSize )size;
-(void)generatePreviewWithCompletion:(id)arg0 ;


@end


#endif