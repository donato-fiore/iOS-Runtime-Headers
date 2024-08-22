// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FKPENDINGAPPLEPAYORDERDETAILS_H
#define FKPENDINGAPPLEPAYORDERDETAILS_H

@class NSString, NSURL;

#import <Foundation/Foundation.h>


@interface FKPendingApplePayOrderDetails : NSObject

@property (readonly, copy, nonatomic) NSString *authenticationToken; // ivar: _authenticationToken
@property (readonly, copy, nonatomic) NSString *orderIdentifier; // ivar: _orderIdentifier
@property (readonly, copy, nonatomic) NSString *orderTypeIdentifier; // ivar: _orderTypeIdentifier
@property (readonly, copy, nonatomic) NSString *transactionIdentifier; // ivar: _transactionIdentifier
@property (readonly, copy, nonatomic) NSURL *webServiceBaseURL; // ivar: _webServiceBaseURL


-(id)initWithTransactionIdentifier:(id)arg0 orderTypeIdentifier:(id)arg1 orderIdentifier:(id)arg2 webServiceBaseURL:(id)arg3 authenticationToken:(id)arg4 ;


@end


#endif