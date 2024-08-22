// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICIMAGETEXTATTACHMENT_H
#define ICIMAGETEXTATTACHMENT_H



#import "ICTextAttachment.h"

@interface ICImageTextAttachment : ICTextAttachment



-(BOOL)requiresSpaceAfterAttachmentForPrinting;
-(BOOL)supportsMultipleThumbnailsOnSameLine;
-(BOOL)supportsThumbnailView;


@end


#endif