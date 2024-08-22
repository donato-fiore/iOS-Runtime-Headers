// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFCENTEREDTEXTATTACHMENT_H
#define MFCENTEREDTEXTATTACHMENT_H

@class NSTextAttachment;



@interface MFCenteredTextAttachment : NSTextAttachment

@property (nonatomic) CGFloat height; // ivar: _height


-(struct CGRect )attachmentBoundsForTextContainer:(id)arg0 proposedLineFragment:(struct CGRect )arg1 glyphPosition:(struct CGPoint )arg2 characterIndex:(NSUInteger)arg3 ;


@end


#endif