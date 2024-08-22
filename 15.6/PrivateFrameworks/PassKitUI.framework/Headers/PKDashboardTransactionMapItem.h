// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKDASHBOARDTRANSACTIONMAPITEM_H
#define PKDASHBOARDTRANSACTIONMAPITEM_H

@class NSString, PKPaymentTransaction;
@protocol PKDashboardItem;

#import <Foundation/Foundation.h>


@interface PKDashboardTransactionMapItem : NSObject <PKDashboardItem>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) PKPaymentTransaction *transaction; // ivar: _transaction


+(id)identifier;


@end


#endif