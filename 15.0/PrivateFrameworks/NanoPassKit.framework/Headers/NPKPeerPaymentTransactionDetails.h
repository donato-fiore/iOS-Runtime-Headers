// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NPKPEERPAYMENTTRANSACTIONDETAILS_H
#define NPKPEERPAYMENTTRANSACTIONDETAILS_H

@class NSArray, NSDate, NSString, PKPaymentTransaction;

#import <Foundation/Foundation.h>


@interface NPKPeerPaymentTransactionDetails : NSObject

@property (retain, nonatomic) NSArray *availableActions; // ivar: _availableActions
@property (retain, nonatomic) NSDate *availableActionsFetchDate; // ivar: _availableActionsFetchDate
@property (nonatomic) NSUInteger paymentStatus; // ivar: _paymentStatus
@property (retain, nonatomic) NSString *serviceIdentifier; // ivar: _serviceIdentifier
@property (retain, nonatomic) PKPaymentTransaction *transaction; // ivar: _transaction


-(id)description;


@end


#endif