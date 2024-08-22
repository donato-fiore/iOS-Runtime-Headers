// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPASSPAYMENTAPPLICATIONVIEW_H
#define PKPASSPAYMENTAPPLICATIONVIEW_H

@class UIView, UISegmentedControl, PKPaymentService, NSArray, PKPaymentPass, PKPaymentApplication;
@protocol PKPassPaymentApplicationViewDelegate;


#import "PKPassPaymentSummaryHeaderView.h"

@interface PKPassPaymentApplicationView : UIView {
    PKPassPaymentSummaryHeaderView *_headerView;
    UIView *_horizontalSeparator;
    UISegmentedControl *_segmentedControl;
    PKPaymentService *_paymentService;
    NSArray *_paymentApplications;
}


@property (weak, nonatomic) NSObject<PKPassPaymentApplicationViewDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) PKPaymentPass *pass; // ivar: _pass
@property (retain, nonatomic) PKPaymentApplication *selectedApplication; // ivar: _selectedApplication
@property (nonatomic) BOOL showHeader; // ivar: _showHeader


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithPass:(id)arg0 ;
-(void)_selectedApplicationDidChange:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif