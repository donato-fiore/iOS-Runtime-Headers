// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TPBOTTOMDOUBLEBUTTONBAR_H
#define TPBOTTOMDOUBLEBUTTONBAR_H



#import "TPBottomSingleButtonBar.h"
#import "TPButton.h"

@interface TPBottomDoubleButtonBar : TPBottomSingleButtonBar {
    TPButton *_button2;
}




-(CGFloat)_buttonWidth;
-(id)button2;
-(void)_layoutButtons;
-(void)layoutSubviews;
-(void)setButton2:(id)arg0 andStyle:(BOOL)arg1 ;
-(void)setButton:(id)arg0 andStyle:(BOOL)arg1 ;


@end


#endif