// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC12GAMECENTERUI23GKMULTIPLAYERFOOTERVIEW_H
#define _TTC12GAMECENTERUI23GKMULTIPLAYERFOOTERVIEW_H

@class UIView, NSString;



@interface _TtC12GameCenterUI23GKMultiplayerFooterView : UIView {
    ? buttonTitle;
    ? primaryButton;
    ? secondaryButton;
    ? statusLabel;
    ? backgroundView;
    ? topSeparator;
    ? startGameHandler;
    ? inviteFriendsHandler;
    ? $__lazy_storage_$_secondaryButtonFocusGuide;
    ? $__lazy_storage_$_primaryButtonFocusGuide;
}


@property (nonatomic, copy) NSString *footerStatusString;
@property (nonatomic) BOOL inviteFriendsButtonEnabled;
@property (nonatomic) BOOL inviteFriendsButtonHidden;
@property (nonatomic, copy) id *inviteFriendsHandler;
@property (nonatomic, copy) NSString *primaryButtonTitle;
@property (nonatomic, copy) NSString *secondaryButtonTitle;
@property (nonatomic) BOOL startGameButtonEnabled;
@property (nonatomic, copy) id *startGameHandler;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct JUMeasurements )measurementsWithFitting:(struct CGSize )arg0 in:(id)arg1 ;
-(void)configureUsing:(id)arg0 ;
-(void)didTapButton:(id)arg0 ;
-(void)didTapSecondaryButton:(id)arg0 ;
-(void)layoutSubviews;
-(void)wantsMaterialBackgroundWithScrollOffset:(CGFloat)arg0 ;


@end


#endif