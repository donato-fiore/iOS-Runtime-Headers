// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DBINCALLWIDGETBUTTONRINGVIEW_H
#define DBINCALLWIDGETBUTTONRINGVIEW_H

@class UIView, UIColor;



@interface DBInCallWidgetButtonRingView : UIView

@property (retain, nonatomic) UIColor *fillColor; // ivar: _fillColor
@property (nonatomic, getter=isFocusRingVisible) BOOL focusRingVisible; // ivar: _focusRingVisible
@property (nonatomic, getter=isHighlighted) BOOL highlighted; // ivar: _highlighted
@property (nonatomic, getter=isSelected) BOOL selected; // ivar: _selected


-(void)drawRect:(struct CGRect )arg0 ;


@end


#endif