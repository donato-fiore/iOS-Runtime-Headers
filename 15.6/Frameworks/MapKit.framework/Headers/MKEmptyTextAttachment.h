// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKEMPTYTEXTATTACHMENT_H
#define MKEMPTYTEXTATTACHMENT_H

@class NSTextAttachment;



@interface MKEmptyTextAttachment : NSTextAttachment {
    CGFloat _width;
}




-(id)imageForBounds:(struct CGRect )arg0 textContainer:(id)arg1 characterIndex:(NSUInteger)arg2 ;
-(id)initWithWidth:(CGFloat)arg0 ;
-(struct CGRect )attachmentBoundsForTextContainer:(id)arg0 proposedLineFragment:(struct CGRect )arg1 glyphPosition:(struct CGPoint )arg2 characterIndex:(NSUInteger)arg3 ;


@end


#endif