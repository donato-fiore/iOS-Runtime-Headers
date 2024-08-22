// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICTEXTATTACHMENT_H
#define ICTEXTATTACHMENT_H



#import "ICBaseTextAttachment.h"

@interface ICTextAttachment : ICBaseTextAttachment



+(BOOL)textAttachmentIsContent:(id)arg0 ;
+(CGFloat)defaultAttachmentThumbnailViewHeight;
+(Class)textAttachmentClassForAttachment:(id)arg0 ;
+(id)textAttachmentWithAttachment:(id)arg0 ;
-(BOOL)isUnsupported;
-(BOOL)requiresSpaceAfterAttachmentForPrinting;
-(BOOL)supportsMultipleThumbnailsOnSameLine;
-(BOOL)supportsThumbnailView;
-(CGFloat)availableWidthForTextContainer:(id)arg0 ;
-(id)attachmentAsNSTextAttachment;
-(id)attachmentFileWrapper;
-(id)initWithData:(id)arg0 ofType:(id)arg1 ;
-(struct ? )attachmentBoundsMargins;
-(struct CGRect )attachmentBoundsForTextContainer:(id)arg0 proposedLineFragment:(struct CGRect )arg1 glyphPosition:(struct CGPoint )arg2 characterIndex:(NSUInteger)arg3 ;
-(struct CGRect )attachmentBoundsIncludingMarginsFromAttachmentBounds:(struct CGRect )arg0 ;
-(struct CGSize )attachmentSizeForTextContainer:(id)arg0 ;
-(struct CGSize )attachmentSizeForTextContainer:(id)arg0 proposedLineFragment:(struct CGRect )arg1 ;


@end


#endif