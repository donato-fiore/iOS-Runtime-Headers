// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKMAPSMERCHANTSTYLINGINFOVIEWCONTROLLER_H
#define PKMAPSMERCHANTSTYLINGINFOVIEWCONTROLLER_H

@class UIViewController, MKWalletMerchantStylingInfo, UIImageView;



@interface PKMapsMerchantStylingInfoViewController : UIViewController {
    MKWalletMerchantStylingInfo *_stylingInfo;
    UIImageView *_iconImageView;
}




-(id)initWithStylingInfo:(id)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif