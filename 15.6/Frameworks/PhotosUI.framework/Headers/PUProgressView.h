// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUPROGRESSVIEW_H
#define PUPROGRESSVIEW_H

@class UIView, UIActivityIndicatorView;



@interface PUProgressView : UIView {
    UIActivityIndicatorView *_spinner;
}


@property (readonly) NSInteger style; // ivar: _style


-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithStyle:(NSInteger)arg0 ;
-(void)hideAnimated:(BOOL)arg0 ;
-(void)layoutSubviews;
-(void)showInView:(id)arg0 animated:(BOOL)arg1 afterDelay:(CGFloat)arg2 ;


@end


#endif