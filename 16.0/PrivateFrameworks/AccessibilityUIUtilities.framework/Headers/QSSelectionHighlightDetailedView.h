// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef QSSELECTIONHIGHLIGHTDETAILEDVIEW_H
#define QSSELECTIONHIGHLIGHTDETAILEDVIEW_H

@class UIView, UIColor;



@interface QSSelectionHighlightDetailedView : UIView

@property (nonatomic) CGRect displayRect; // ivar: _displayRect
@property (retain, nonatomic) UIColor *selectionColor; // ivar: _selectionColor
@property (nonatomic) BOOL sentenceHighlight; // ivar: _sentenceHighlight
@property (retain, nonatomic) UIColor *underlineColor; // ivar: _underlineColor


-(void)drawRect:(struct CGRect )arg0 ;


@end


#endif