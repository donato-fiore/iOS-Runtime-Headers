// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPAYMENTPASSDETAILBALANCESECTIONCONTROLLER_H
#define PKPAYMENTPASSDETAILBALANCESECTIONCONTROLLER_H

@class NSArray, PKCurrencyAmount, NSString;
@protocol PKPaymentPassDetailTableViewSectionController, PKPaymentPassDetailSectionControllerDelegate;

#import <Foundation/Foundation.h>


@interface PKPaymentPassDetailBalanceSectionController : NSObject <PKPaymentPassDetailTableViewSectionController>



@property (readonly, nonatomic) NSArray *allSectionIdentifiers; // ivar: _allSectionIdentifiers
@property (retain, nonatomic) PKCurrencyAmount *balance; // ivar: _balance
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKPaymentPassDetailSectionControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *footerText; // ivar: _footerText
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *sectionIdentifiers; // ivar: _sectionIdentifiers
@property (readonly) Class superclass;


+(BOOL)validForPaymentPass:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSectionIdentifier:(id)arg1 ;
-(id)initWithDelegate:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 sectionIdentifier:(id)arg2 ;
-(id)titleForFooterInSectionIdentifier:(id)arg0 ;


@end


#endif