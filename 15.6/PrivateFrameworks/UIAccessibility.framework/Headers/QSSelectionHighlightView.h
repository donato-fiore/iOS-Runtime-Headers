// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef QSSELECTIONHIGHLIGHTVIEW_H
#define QSSELECTIONHIGHLIGHTVIEW_H

@class UIView, NSMutableArray, NSArray, UIColor;



@interface QSSelectionHighlightView : UIView {
    NSMutableArray *_viewCache;
}


@property (retain, nonatomic) NSArray *highlightSelectionRects; // ivar: _highlightSelectionRects
@property (retain, nonatomic) UIColor *selectionColor; // ivar: _selectionColor
@property (nonatomic) BOOL sentenceHighlight; // ivar: _sentenceHighlight
@property (retain, nonatomic) UIColor *underlineColor; // ivar: _underlineColor


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_processSelectionRects;
-(void)updateVisualRects;


@end


#endif