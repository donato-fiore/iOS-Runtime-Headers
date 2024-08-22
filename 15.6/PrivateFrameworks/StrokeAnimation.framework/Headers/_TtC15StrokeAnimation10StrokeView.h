// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC15STROKEANIMATION10STROKEVIEW_H
#define _TTC15STROKEANIMATION10STROKEVIEW_H

@class UIView;



@interface _TtC15StrokeAnimation10StrokeView : UIView {
    ? animationDelegate;
    ? animationLayers;
    ? animationView;
    ? backgroundView;
    ? strokeData;
    ? strokePathInfos;
    ? pronunciationLabel;
    ? isAnimating;
    ? strokeContourLayer;
    ? backgroundLayer;
    ? colorForbackgroundView;
    ? contourColor;
    ? queue;
    ? timers;
}




-(id)initWith:(id)arg0 frame:(struct CGRect )arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_didTapView:(id)arg0 ;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif