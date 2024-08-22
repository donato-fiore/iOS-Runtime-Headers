// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPUIFOCUSRINGVIEW_H
#define CPUIFOCUSRINGVIEW_H

@class UIView, UIBezierPath, UIColor;



@interface CPUIFocusRingView : UIView

@property (nonatomic) CGFloat cornerRadius; // ivar: _cornerRadius
@property (retain, nonatomic) UIBezierPath *focusPath; // ivar: _focusPath
@property (retain, nonatomic) UIBezierPath *insetFocusPath; // ivar: _insetFocusPath
@property (retain, nonatomic) UIColor *ringColor; // ivar: _ringColor


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updateFocusRect;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif