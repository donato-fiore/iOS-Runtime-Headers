// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICTEXTVIEWSPLITLAYER_H
#define ICTEXTVIEWSPLITLAYER_H

@class CALayer, UITextView;



@interface ICTextViewSplitLayer : CALayer

@property (weak, nonatomic) UITextView *textView; // ivar: _textView


-(void)drawInContext:(struct CGContext *)arg0 ;


@end


#endif