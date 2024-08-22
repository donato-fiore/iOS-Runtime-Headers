// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC12GAMECENTERUI19ROUNDEDTITLEDBUTTON_H
#define _TTC12GAMECENTERUI19ROUNDEDTITLEDBUTTON_H

@class TtC12GameCenterUI17DynamicTypeButton;



@interface _TtC12GameCenterUI19RoundedTitledButton : TtC12GameCenterUI17DynamicTypeButton {
    ? height;
    ? tapHandler;
    ? visualEffectView;
}


@property (nonatomic) CGFloat _cornerRadius;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct JUMeasurements )measurementsWithFitting:(struct CGSize )arg0 in:(id)arg1 ;
-(void)_setCornerRadius:(CGFloat)arg0 ;
-(void)didTapButton:(id)arg0 ;
-(void)layoutSubviews;
-(void)setEnabled:(BOOL)arg0 ;


@end


#endif