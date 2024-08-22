// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EQKITIOSEQUATIONVIEW_H
#define EQKITIOSEQUATIONVIEW_H

@class UIView, UIColor;
@protocol EQKitLayout;



@interface EQKitiOSEquationView : UIView

@property (retain, nonatomic) NSObject<EQKitLayout> *equationLayout; // ivar: _equationLayout
@property (nonatomic) CGPoint offset; // ivar: _offset
@property (nonatomic) CGFloat padding; // ivar: _padding
@property (copy, nonatomic) UIColor *textColor; // ivar: _textColor
@property (nonatomic) CGFloat viewScale; // ivar: _viewScale


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)dealloc;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)layoutSubviews;


@end


#endif