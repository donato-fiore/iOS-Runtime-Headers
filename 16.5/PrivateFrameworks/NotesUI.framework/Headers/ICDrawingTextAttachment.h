// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICDRAWINGTEXTATTACHMENT_H
#define ICDRAWINGTEXTATTACHMENT_H



#import "ICTextAttachment.h"

@interface ICDrawingTextAttachment : ICTextAttachment



-(BOOL)requiresSpaceAfterAttachmentForPrinting;
-(BOOL)supportsMultipleThumbnailsOnSameLine;
-(BOOL)supportsThumbnailView;
-(CGFloat)viewCornerRadius;
-(id)attachmentFileWrapper;
-(id)printableTextAttachment;
-(struct ? )attachmentBoundsMargins;


@end


#endif