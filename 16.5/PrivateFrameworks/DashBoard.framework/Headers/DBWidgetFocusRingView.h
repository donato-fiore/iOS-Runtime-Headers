// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DBWIDGETFOCUSRINGVIEW_H
#define DBWIDGETFOCUSRINGVIEW_H

@class UIView, UIBezierPath, UIColor;



@interface DBWidgetFocusRingView : UIView

@property (nonatomic) CGFloat cornerRadius; // ivar: _cornerRadius
@property (retain, nonatomic) UIBezierPath *focusPath; // ivar: _focusPath
@property (retain, nonatomic) UIColor *ringColor; // ivar: _ringColor


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updateFocusRect;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif