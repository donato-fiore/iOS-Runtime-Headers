// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC12GAMECENTERUI37GKMULTIPLAYERBUTTONHEADERVIEWOBSOLETE_H
#define _TTC12GAMECENTERUI37GKMULTIPLAYERBUTTONHEADERVIEWOBSOLETE_H

@class UIView;



@interface _TtC12GameCenterUI37GKMultiplayerButtonHeaderViewObsolete : UIView {
    ? titleLabel;
    ? stepper;
    ? iconView;
    ? cancelButton;
    ? cancelButtonHandler;
    ? backgroundView;
}


@property (nonatomic) BOOL isStepperHidden;
@property (nonatomic) NSInteger maximumValue;
@property (nonatomic) NSInteger minimumValue;
@property (nonatomic) BOOL wantsMaterialBackground; // ivar: wantsMaterialBackground


-(id)initWithCancelButtonHandler:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
// -(id)initWithMinimumValue:(NSInteger)arg0 maximumValue:(NSInteger)arg1 initialValue:(NSInteger)arg2 titleChangedHandler:(id)arg3 valueChangedHandler:(unk)arg4 cancelButtonHandler:(id)arg5  ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct JUMeasurements )measurementsWithFitting:(struct CGSize )arg0 in:(id)arg1 ;
-(void)applyGame:(id)arg0 ;
-(void)cancelPressed:(id)arg0 ;
-(void)layoutSubviews;
-(void)updateStepperWithValue:(NSInteger)arg0 ;


@end


#endif