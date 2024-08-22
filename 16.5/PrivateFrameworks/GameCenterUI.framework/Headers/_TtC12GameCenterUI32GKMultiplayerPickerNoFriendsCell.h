// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC12GAMECENTERUI32GKMULTIPLAYERPICKERNOFRIENDSCELL_H
#define _TTC12GAMECENTERUI32GKMULTIPLAYERPICKERNOFRIENDSCELL_H

@class UICollectionViewCell;



@interface _TtC12GameCenterUI32GKMultiplayerPickerNoFriendsCell : UICollectionViewCell {
    ? noFriendsView;
}


@property (nonatomic, copy) id *addFriendsHandler;


+(CGFloat)itemHeightFitting:(struct CGSize )arg0 inTraitEnvironment:(id)arg1 ;
+(id)reuseIdentifier;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct JUMeasurements )measurementsWithFitting:(struct CGSize )arg0 in:(id)arg1 ;
-(void)layoutSubviews;


@end


#endif