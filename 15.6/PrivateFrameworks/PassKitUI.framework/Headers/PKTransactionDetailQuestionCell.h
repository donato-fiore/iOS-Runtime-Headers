// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKTRANSACTIONDETAILQUESTIONCELL_H
#define PKTRANSACTIONDETAILQUESTIONCELL_H

@class UITableViewCell, UILabel, UIImageView, PKPaymentTransaction, CNContact, NSString;
@protocol PKTransactionDetailQuestionCellDelegate;


#import "PKContinuousButton.h"

@interface PKTransactionDetailQuestionCell : UITableViewCell {
    UILabel *_title;
    UILabel *_message;
    PKContinuousButton *_leadingButton;
    PKContinuousButton *_trailingButton;
    UIImageView *_imageView;
    BOOL _isTemplateLayout;
    PKPaymentTransaction *_transaction;
    CNContact *_accountUserContact;
    NSString *_submittingAnswer;
    BOOL _smallDevice;
}


@property (weak, nonatomic) NSObject<PKTransactionDetailQuestionCellDelegate> *questionDelegate; // ivar: _questionDelegate


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(struct CGSize )_layoutWithBounds:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_enableButtons:(BOOL)arg0 ;
-(void)_leadingButtonTapped:(id)arg0 ;
-(void)_trailingButtonTapped:(id)arg0 ;
-(void)layoutSubviews;
-(void)setTransaction:(id)arg0 accountUserContact:(id)arg1 submittingAnswer:(id)arg2 ;


@end


#endif