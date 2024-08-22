// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC12GAMECENTERUI24GKMULTIPLAYERSTEPPERVIEW_H
#define _TTC12GAMECENTERUI24GKMULTIPLAYERSTEPPERVIEW_H

@class UIView, UIButton;



@interface _TtC12GameCenterUI24GKMultiplayerStepperView : UIView {
    ? downButton;
    ? upButton;
    ? label;
    ? backgroundView;
    ? model;
    ? isStepperHidden;
}


@property (nonatomic, readonly) UIButton *accessibilityDownButton;
@property (nonatomic, readonly) UIButton *accessibilityUpButton;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct JUMeasurements )measurementsWithFitting:(struct CGSize )arg0 in:(id)arg1 ;
-(void)accessibilityUpdateStepperWithValue:(NSInteger)arg0 ;
-(void)didTapDown:(id)arg0 ;
-(void)didTapUp:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif