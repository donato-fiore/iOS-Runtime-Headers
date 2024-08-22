// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TOPHITCOMPLETIONVIEW_H
#define TOPHITCOMPLETIONVIEW_H

@class UIView, NSAttributedString, UIColor;



@interface TopHitCompletionView : UIView {
    NSAttributedString *_attributedText;
    NSUInteger _highlightStartIndex;
}


@property (copy, nonatomic) UIColor *highlightColor; // ivar: _highlightColor


-(void)drawRect:(struct CGRect )arg0 ;
-(void)setAttributedText:(id)arg0 highlightStartIndex:(NSUInteger)arg1 ;


@end


#endif