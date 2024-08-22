// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFSLOTTEMPLATEIMAGEATTACHMENT_H
#define WFSLOTTEMPLATEIMAGEATTACHMENT_H

@class NSTextAttachment, UIFont;



@interface WFSlotTemplateImageAttachment : NSTextAttachment

@property (retain, nonatomic) UIFont *fontForAlignment; // ivar: _fontForAlignment


-(struct CGRect )attachmentBoundsForTextContainer:(id)arg0 proposedLineFragment:(struct CGRect )arg1 glyphPosition:(struct CGPoint )arg2 characterIndex:(NSUInteger)arg3 ;


@end


#endif