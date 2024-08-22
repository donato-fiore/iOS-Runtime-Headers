// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIIMAGETEXTATTACHMENT_H
#define _UIIMAGETEXTATTACHMENT_H

@class NSTextAttachment;



@interface _UIImageTextAttachment : NSTextAttachment {
    CGRect _bounds;
    ? _flags;
}




-(id)_deriveAttribute:(id)arg0 inStorage:(id)arg1 atIndex:(NSInteger)arg2 ;
-(id)_imageAdaptedForTextAtIndex:(NSInteger)arg0 withAttributes:(id)arg1 inContainer:(id)arg2 sizeOnly:(BOOL)arg3 ;
-(id)_initWithImage:(id)arg0 ;
-(id)imageForBounds:(struct CGRect )arg0 attributes:(id)arg1 location:(id)arg2 textContainer:(id)arg3 ;
-(id)imageForBounds:(struct CGRect )arg0 textContainer:(id)arg1 characterIndex:(NSUInteger)arg2 ;
-(struct CGRect )attachmentBoundsForAttributes:(id)arg0 location:(id)arg1 textContainer:(id)arg2 proposedLineFragment:(struct CGRect )arg3 position:(struct CGPoint )arg4 ;
-(struct CGRect )attachmentBoundsForTextContainer:(id)arg0 proposedLineFragment:(struct CGRect )arg1 glyphPosition:(struct CGPoint )arg2 characterIndex:(NSUInteger)arg3 ;
-(void)setBounds:(struct CGRect )arg0 ;


@end


#endif