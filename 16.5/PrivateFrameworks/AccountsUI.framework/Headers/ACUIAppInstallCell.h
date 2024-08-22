// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ACUIAPPINSTALLCELL_H
#define ACUIAPPINSTALLCELL_H

@class PSTableCell, UILabel, UIImageView, SKUIItemOfferButton;



@interface ACUIAppInstallCell : PSTableCell {
    UILabel *_nameLabel;
    UILabel *_publisherLabel;
    UIImageView *_iconView;
    SKUIItemOfferButton *_installButton;
}


@property (nonatomic) int installState; // ivar: _installState


+(id)specifierForAppWithDescription:(id)arg0 target:(id)arg1 action:(SEL)arg2 ;
-(id)_createInstallButton;
-(id)_createLabelForAppName:(id)arg0 ;
-(id)_createLabelForPublisher:(id)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 specifier:(id)arg2 ;
-(void)_updateInstallButtonWithState:(int)arg0 ;
-(void)_updateSubviewsWithInstallState:(int)arg0 ;
-(void)layoutSubviews;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif