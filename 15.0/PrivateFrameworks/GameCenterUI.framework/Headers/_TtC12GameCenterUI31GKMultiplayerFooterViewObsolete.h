// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC12GAMECENTERUI31GKMULTIPLAYERFOOTERVIEWOBSOLETE_H
#define _TTC12GAMECENTERUI31GKMULTIPLAYERFOOTERVIEWOBSOLETE_H

@class UIView, NSString;



@interface _TtC12GameCenterUI31GKMultiplayerFooterViewObsolete : UIView {
    ? buttonTitle;
    ? primaryButton;
    ? statusLabel;
    ? messageButton;
    ? backgroundView;
    ? startGameHandler;
    ? addMessageHandler;
}


@property (nonatomic, copy) id *addMessageHandler;
@property (nonatomic, copy) NSString *footerStatusString;
@property (nonatomic) NSInteger messageButtonState; // ivar: messageButtonState
@property (nonatomic, copy) NSString *primaryButtonTitle;
@property (nonatomic) BOOL startGameButtonEnabled;
@property (nonatomic, copy) id *startGameHandler;
@property (nonatomic) BOOL wantsMaterialBackground; // ivar: wantsMaterialBackground


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct JUMeasurements )measurementsWithFitting:(struct CGSize )arg0 in:(id)arg1 ;
-(void)configureUsing:(id)arg0 ;
-(void)didTapButton:(id)arg0 ;
-(void)didTapMessageButton:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif