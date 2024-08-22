// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC12GAMECENTERUI29GKMULTIPLAYERBUTTONHEADERVIEW_H
#define _TTC12GAMECENTERUI29GKMULTIPLAYERBUTTONHEADERVIEW_H

@class UIView;



@interface _TtC12GameCenterUI29GKMultiplayerButtonHeaderView : UIView {
    ? titleLabel;
    ? playerCountLabel;
    ? iconView;
    ? cancelButton;
    ? cancelButtonHandler;
    ? backgroundView;
    ? bottomSeparator;
}




-(id)initWithCancelButtonHandler:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithMinimumValue:(NSInteger)arg0 maximumValue:(NSInteger)arg1 initialValue:(NSInteger)arg2 cancelButtonHandler:(id)arg3 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct JUMeasurements )measurementsWithFitting:(struct CGSize )arg0 in:(id)arg1 ;
-(void)applyGame:(id)arg0 ;
-(void)cancelPressed:(id)arg0 ;
-(void)layoutSubviews;
-(void)updateCountWithMinPlayers:(NSInteger)arg0 maxPlayers:(NSInteger)arg1 ;
-(void)wantsMaterialBackgroundWithScrollOffset:(CGFloat)arg0 ;


@end


#endif