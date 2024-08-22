// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TLKIMAGEATTACHMENT_H
#define TLKIMAGEATTACHMENT_H

@class NSTextAttachment, UIFont;



@interface TLKImageAttachment : NSTextAttachment

@property (retain, nonatomic) UIFont *font; // ivar: _font


-(struct CGRect )attachmentBoundsForTextContainer:(id)arg0 proposedLineFragment:(struct CGRect )arg1 glyphPosition:(struct CGPoint )arg2 characterIndex:(NSUInteger)arg3 ;


@end


#endif