// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC12GAMECENTERUI22GKADDFRIENDSLOCKUPVIEW_H
#define _TTC12GAMECENTERUI22GKADDFRIENDSLOCKUPVIEW_H

@class UIView;



@interface _TtC12GameCenterUI22GKAddFriendsLockupView : UIView {
    ? imageView;
    ? textLabel;
    ? button;
    ? metricsPageType;
    ? addFriendsHandler;
}


@property (nonatomic, copy) id *addFriendsHandler;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 friendState:(NSInteger)arg1 metricsPageType:(id)arg2 ;
-(struct JUMeasurements )measurementsWithFitting:(struct CGSize )arg0 in:(id)arg1 ;
-(void)didTapButton:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif