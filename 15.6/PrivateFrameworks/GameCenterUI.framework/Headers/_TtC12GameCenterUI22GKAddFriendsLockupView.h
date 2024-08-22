// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC12GAMECENTERUI22GKADDFRIENDSLOCKUPVIEW_H
#define _TTC12GAMECENTERUI22GKADDFRIENDSLOCKUPVIEW_H

@class UIView;



@interface _TtC12GameCenterUI22GKAddFriendsLockupView : UIView {
    ? imageView;
    ? textLabel;
    ? button;
    ? addFriendsHandler;
}


@property (nonatomic, copy) id *addFriendsHandler;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 friendState:(NSInteger)arg1 ;
-(struct JUMeasurements )measurementsWithFitting:(struct CGSize )arg0 in:(id)arg1 ;
-(void)didTapButton:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif