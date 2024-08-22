// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICBASETEXTATTACHMENT_H
#define ICBASETEXTATTACHMENT_H

@class ICAttachment;


#import "ICAbstractTextAttachment.h"

@interface ICBaseTextAttachment : ICAbstractTextAttachment

@property (retain, nonatomic) ICAttachment *attachment;


-(BOOL)canDragWithoutSelecting;
-(BOOL)isUnsupported;
-(CGFloat)viewCornerRadius;
-(id)attachmentInContext:(id)arg0 ;
-(id)initWithAttachment:(id)arg0 ;
-(id)inlineAttachmentInContext:(id)arg0 ;
-(id)printableTextContentForAppearanceType:(NSUInteger)arg0 ;
-(struct CGRect )attachmentBoundsForTextContainer:(id)arg0 proposedLineFragment:(struct CGRect )arg1 glyphPosition:(struct CGPoint )arg2 characterIndex:(NSUInteger)arg3 ;
-(void)detachView:(id)arg0 fromParentView:(id)arg1 ;
-(void)fixAttachmentForAttributedString:(id)arg0 range:(struct _NSRange )arg1 forPlainText:(BOOL)arg2 forStandardizedText:(BOOL)arg3 ;


@end


#endif