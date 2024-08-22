// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKDASHBOARDTRANSACTIONMAPITEM_H
#define PKDASHBOARDTRANSACTIONMAPITEM_H

@class NSString, PKMerchant, PKPaymentTransaction;
@protocol PKDashboardItem;

#import <Foundation/Foundation.h>


@interface PKDashboardTransactionMapItem : NSObject <PKDashboardItem>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PKMerchant *merchant; // ivar: _merchant
@property (readonly) Class superclass;
@property (retain, nonatomic) PKPaymentTransaction *transaction; // ivar: _transaction


+(id)identifier;


@end


#endif