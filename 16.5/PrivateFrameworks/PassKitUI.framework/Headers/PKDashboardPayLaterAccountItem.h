// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKDASHBOARDPAYLATERACCOUNTITEM_H
#define PKDASHBOARDPAYLATERACCOUNTITEM_H

@class NSString, PKCurrencyAmount, PKAccount;
@protocol PKDashboardItem;

#import <Foundation/Foundation.h>


@interface PKDashboardPayLaterAccountItem : NSObject <PKDashboardItem>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) PKCurrencyAmount *dueNext30Days; // ivar: _dueNext30Days
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PKAccount *payLaterAccount; // ivar: _payLaterAccount
@property (readonly) Class superclass;
@property (readonly, nonatomic) PKCurrencyAmount *totalPending; // ivar: _totalPending


+(id)identifier;
-(id)initWithPayLaterAccount:(id)arg0 dueNext30Days:(id)arg1 totalPending:(id)arg2 ;


@end


#endif