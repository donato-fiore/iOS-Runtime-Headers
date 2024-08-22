// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNATOMCENTEREDTEXTATTACHMENT_H
#define CNATOMCENTEREDTEXTATTACHMENT_H

@class NSTextAttachment;



@interface CNAtomCenteredTextAttachment : NSTextAttachment

@property (nonatomic) CGFloat height; // ivar: _height


-(struct CGRect )attachmentBoundsForTextContainer:(id)arg0 proposedLineFragment:(struct CGRect )arg1 glyphPosition:(struct CGPoint )arg2 characterIndex:(NSUInteger)arg3 ;


@end


#endif