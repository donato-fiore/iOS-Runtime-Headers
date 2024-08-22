// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKEDITTABLENOPASSESVIEW_H
#define PKEDITTABLENOPASSESVIEW_H

@class UIView, UILabel, UIButton;
@protocol PKEditTableNoPassesViewDelegate;



@interface PKEditTableNoPassesView : UIView {
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    UIButton *_buttonScanCode;
    UIButton *_buttonFindApps;
}


@property (weak, nonatomic) NSObject<PKEditTableNoPassesViewDelegate> *delegate; // ivar: _delegate


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)findAppsForWalletTapped;
-(void)layoutSubviews;
-(void)scanCodeButtonTapped;


@end


#endif