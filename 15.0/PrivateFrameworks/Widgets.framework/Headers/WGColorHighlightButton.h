// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WGCOLORHIGHLIGHTBUTTON_H
#define WGCOLORHIGHLIGHTBUTTON_H

@class UIButton, UIColor;



@interface WGColorHighlightButton : UIButton

@property (retain, nonatomic) UIColor *highlightedBackgroundColor; // ivar: _highlightedBackgroundColor
@property (retain, nonatomic) UIColor *savedBackgroundColor; // ivar: _savedBackgroundColor


-(struct CGSize )intrinsicContentSize;
-(void)_updateRealBackgroundColor;
-(void)layoutSubviews;
-(void)setBackgroundColor:(id)arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;


@end


#endif