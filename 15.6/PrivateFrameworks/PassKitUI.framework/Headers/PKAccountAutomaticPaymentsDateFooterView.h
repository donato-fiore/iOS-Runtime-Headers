// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKACCOUNTAUTOMATICPAYMENTSDATEFOOTERVIEW_H
#define PKACCOUNTAUTOMATICPAYMENTSDATEFOOTERVIEW_H

@class UITableViewHeaderFooterView;


#import "PKMonthDayCollectionViewController.h"

@interface PKAccountAutomaticPaymentsDateFooterView : UITableViewHeaderFooterView

@property (retain, nonatomic) PKMonthDayCollectionViewController *collectionViewController; // ivar: _collectionViewController


-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif