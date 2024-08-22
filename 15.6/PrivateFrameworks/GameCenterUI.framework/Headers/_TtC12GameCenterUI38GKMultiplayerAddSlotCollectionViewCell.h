// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC12GAMECENTERUI38GKMULTIPLAYERADDSLOTCOLLECTIONVIEWCELL_H
#define _TTC12GAMECENTERUI38GKMULTIPLAYERADDSLOTCOLLECTIONVIEWCELL_H

@class UICollectionViewCell, UIButton;



@interface _TtC12GameCenterUI38GKMultiplayerAddSlotCollectionViewCell : UICollectionViewCell {
    ? contentBackgroundView;
    ? addSlotButton;
    ? vibrancyHost;
    ? focusGuide;
    ? addSlotActionHandler;
}


@property (nonatomic, readonly) UIButton *accessibilityAddSlotButton;
@property (nonatomic, copy) id *addSlotActionHandler;
@property (nonatomic) NSInteger maximumAdditionalPlayers; // ivar: maximumAdditionalPlayers


+(id)reuseIdentifier;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct JUMeasurements )measurementsWithFitting:(struct CGSize )arg0 in:(id)arg1 ;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif