// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKMOVIEATTACHMENTITEM_H
#define CKMOVIEATTACHMENTITEM_H



#import "CKAttachmentItem.h"

@interface CKMovieAttachmentItem : CKAttachmentItem



+(id)UTITypes;
-(BOOL)isIrisAsset;
-(BOOL)isJellyfishVideo;
-(id)_generateThumbnailFillToSize:(struct CGSize )arg0 ;
-(id)previewItemTitle;
-(struct CGSize )_defaultSize;
-(struct CGSize )size;
-(void)generatePreviewWithCompletion:(id)arg0 ;


@end


#endif