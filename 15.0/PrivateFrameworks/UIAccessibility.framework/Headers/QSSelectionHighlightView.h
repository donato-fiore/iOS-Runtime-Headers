// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef QSSELECTIONHIGHLIGHTVIEW_H
#define QSSELECTIONHIGHLIGHTVIEW_H

@class UIView, NSArray, UIColor;



@interface QSSelectionHighlightView : UIView

@property (retain, nonatomic) NSArray *highlightSelectionRects; // ivar: _highlightSelectionRects
@property (retain, nonatomic) UIColor *selectionColor; // ivar: _selectionColor
@property (nonatomic) BOOL sentenceHighlight; // ivar: _sentenceHighlight
@property (retain, nonatomic) UIColor *underlineColor; // ivar: _underlineColor


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)drawRect:(struct CGRect )arg0 ;


@end


#endif