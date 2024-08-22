// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBHORIZONTALSCROLLFAILURETRIANGLEVIEW_H
#define SBHORIZONTALSCROLLFAILURETRIANGLEVIEW_H

@class UIView, UIColor;



@interface SBHorizontalScrollFailureTriangleView : UIView {
    int _style;
    BOOL _pointingRight;
}


@property (retain, nonatomic) UIColor *contentColor; // ivar: _contentColor


-(id)initWithStyle:(int)arg0 recognizer:(id)arg1 forPoint:(struct CGPoint )arg2 withMaxVerticalOffset:(CGFloat)arg3 inView:(id)arg4 pointingRight:(BOOL)arg5 ;
-(void)drawRect:(struct CGRect )arg0 ;


@end


#endif