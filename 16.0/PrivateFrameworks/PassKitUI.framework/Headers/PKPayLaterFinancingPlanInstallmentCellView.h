// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYLATERFINANCINGPLANINSTALLMENTCELLVIEW_H
#define PKPAYLATERFINANCINGPLANINSTALLMENTCELLVIEW_H

@class UIView, PKPayLaterFinancingPlan, PKPayLaterInstallment, PKPayLaterPaymentIntentController, UIViewController, NSCalendar, UILabel, UIImageView, UIActivityIndicatorView, UIButton;


#import "PKIconTextLabel.h"

@interface PKPayLaterFinancingPlanInstallmentCellView : UIView {
    PKPayLaterFinancingPlan *_financingPlan;
    PKPayLaterInstallment *_installment;
    PKPayLaterPaymentIntentController *_paymentIntentController;
    UIViewController *_presentingViewController;
    NSCalendar *_calendar;
    NSInteger _rowIndex;
    UILabel *_primaryLabel;
    UILabel *_secondaryLabel;
    PKIconTextLabel *_tertiaryLabel;
    UIImageView *_disclosureView;
    UIActivityIndicatorView *_spinnerView;
    UIButton *_button;
}




+(id)_numberFormatter;
-(BOOL)_isInstallmentPaid;
-(id)_secondaryLabelText;
-(id)_tertiaryFont;
-(id)initWithFinancingPlan:(id)arg0 installment:(id)arg1 rowIndex:(NSInteger)arg2 paymentIntentController:(id)arg3 presentingViewController:(id)arg4 ;
-(struct CGSize )_layoutWithBounds:(struct CGRect )arg0 isTemplateLayout:(BOOL)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_tappedButton;
-(void)_updateTertiaryLabel;
-(void)layoutSubviews;


@end


#endif