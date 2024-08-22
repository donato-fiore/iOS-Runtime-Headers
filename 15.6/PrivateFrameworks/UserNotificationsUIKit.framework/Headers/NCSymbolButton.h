// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NCSYMBOLBUTTON_H
#define NCSYMBOLBUTTON_H

@class UIControl, UIView, UIImageView, NSLayoutConstraint;



@interface NCSymbolButton : UIControl {
    UIView *_backgroundView;
    UIImageView *_symbolImageView;
    NSLayoutConstraint *_backgroundHeightConstraint;
    NSLayoutConstraint *_backgroundWidthConstraint;
}




+(id)button;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(id)_init;
-(void)clearSymbol;
-(void)setSymbolNamed:(id)arg0 color:(id)arg1 pointSize:(CGFloat)arg2 backgroundDiameter:(CGFloat)arg3 ;


@end


#endif