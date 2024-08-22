// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DOCINDETERMINATEPROGRESSRINGVIEW_H
#define DOCINDETERMINATEPROGRESSRINGVIEW_H

@class UIView, CABasicAnimation;



@interface DOCIndeterminateProgressRingView : UIView {
    CABasicAnimation *_spinnerAnimation;
}




+(Class)layerClass;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_removeAllAnimations:(BOOL)arg0 ;
-(void)_updateShapePath;
-(void)layoutSubviews;
-(void)setTintColor:(id)arg0 ;


@end


#endif