// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MKIMAGETEXTATTACHMENT_H
#define MKIMAGETEXTATTACHMENT_H

@class NSTextAttachment;



@interface MKImageTextAttachment : NSTextAttachment

@property (nonatomic) CGFloat maxHeight; // ivar: _maxHeight
@property (nonatomic) CGFloat verticalOffset; // ivar: _verticalOffset


-(id)initWithImage:(id)arg0 verticalOffset:(CGFloat)arg1 ;
-(struct CGRect )attachmentBoundsForTextContainer:(id)arg0 proposedLineFragment:(struct CGRect )arg1 glyphPosition:(struct CGPoint )arg2 characterIndex:(NSUInteger)arg3 ;


@end


#endif