// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC12GAMECENTERUI40GKMULTIPLAYERPICKERNEARBYINSTRUCTIONCELL_H
#define _TTC12GAMECENTERUI40GKMULTIPLAYERPICKERNEARBYINSTRUCTIONCELL_H

@class UICollectionViewCell;



@interface _TtC12GameCenterUI40GKMultiplayerPickerNearbyInstructionCell : UICollectionViewCell {
    ? imageView;
    ? textField;
}


@property (nonatomic, readonly) BOOL canBecomeFocused;


+(CGFloat)itemHeightFitting:(struct CGSize )arg0 inTraitEnvironment:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct JUMeasurements )measurementsWithFitting:(struct CGSize )arg0 in:(id)arg1 ;
-(void)layoutSubviews;


@end


#endif