// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKFINDBANKACCOUNTINFORMATIONFOOTERVIEW_H
#define PKFINDBANKACCOUNTINFORMATIONFOOTERVIEW_H

@class UIButton;


#import "PKTableFooterView.h"

@interface PKFindBankAccountInformationFooterView : PKTableFooterView {
    UIButton *_accountInformationButton;
}




-(id)initWithFrame:(struct CGRect )arg0 action:(id)arg1 ;
-(struct CGSize )_sizeForButton:(id)arg0 constrainedToSize:(struct CGSize )arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)setButtonsEnabled:(BOOL)arg0 ;
-(void)setupAccountInformationButtonWithAction:(id)arg0 ;


@end


#endif