// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPAYMENTSETUPFOOTERVIEW_H
#define PKPAYMENTSETUPFOOTERVIEW_H

@class UIButton, UILabel;


#import "PKTableFooterView.h"

@interface PKPaymentSetupFooterView : PKTableFooterView {
    UIButton *_continueButton;
    UIButton *_skipCardButton;
    UILabel *_notificationText;
    BOOL _isBuddyiPad;
}


@property (nonatomic) NSInteger context; // ivar: _context
@property (nonatomic) BOOL forceShowSetupLaterButton; // ivar: _forceShowSetupLaterButton
@property (retain, nonatomic) UIButton *manualEntryButton; // ivar: _manualEntryButton
@property (retain, nonatomic) UILabel *notificationText;
@property (retain, nonatomic) UIButton *setupLaterButton; // ivar: _setupLaterButton
@property (retain, nonatomic) UIButton *skipCardButton;


-(id)initWithFrame:(struct CGRect )arg0 context:(NSInteger)arg1 ;
-(struct CGSize )_sizeForButton:(id)arg0 constrainedToSize:(struct CGSize )arg1 ;
-(struct CGSize )_sizeForLabel:(id)arg0 maxText:(id)arg1 constrainedToSize:(struct CGSize )arg2 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_createSetupLaterButton;
-(void)layoutSubviews;
-(void)setButtonsEnabled:(BOOL)arg0 ;


@end


#endif