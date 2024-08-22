// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC12GAMECENTERUI29GKMULTIPLAYERPICKERPLAYERCELL_H
#define _TTC12GAMECENTERUI29GKMULTIPLAYERPICKERPLAYERCELL_H

@class UICollectionViewCell;



@interface _TtC12GameCenterUI29GKMultiplayerPickerPlayerCell : UICollectionViewCell {
    ? lockupView;
}




+(id)reuseIdentifier;
+(struct CGSize )preferredSizeFitting:(struct CGSize )arg0 inTraitEnvironment:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)applyWithPlayer:(id)arg0 isCoreRecent:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif