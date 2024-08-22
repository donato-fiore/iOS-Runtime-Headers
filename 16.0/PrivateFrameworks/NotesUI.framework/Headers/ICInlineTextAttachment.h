// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICINLINETEXTATTACHMENT_H
#define ICINLINETEXTATTACHMENT_H

@class ICInlineAttachment;


#import "ICAbstractTextAttachment.h"

@interface ICInlineTextAttachment : ICAbstractTextAttachment

@property (retain, nonatomic) ICInlineAttachment *attachment;


+(Class)textAttachmentClassForAttachment:(id)arg0 ;
+(id)textAttachmentWithAttachment:(id)arg0 ;
-(BOOL)isUnsupported;
-(id)altText;
-(id)attachmentInContext:(id)arg0 ;
-(id)initWithAttachment:(id)arg0 ;
-(id)inlineAttachmentInContext:(id)arg0 ;
-(id)newlyCreatedView;
-(id)printableTextContentForAppearanceType:(NSUInteger)arg0 styleAttributes:(id)arg1 ;


@end


#endif