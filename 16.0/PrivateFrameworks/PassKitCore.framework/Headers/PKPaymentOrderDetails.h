// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYMENTORDERDETAILS_H
#define PKPAYMENTORDERDETAILS_H

@class NSString, NSURL;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKPaymentOrderDetails : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSString *authenticationToken; // ivar: _authenticationToken
@property (copy, nonatomic) NSString *orderIdentifier; // ivar: _orderIdentifier
@property (copy, nonatomic) NSString *orderTypeIdentifier; // ivar: _orderTypeIdentifier
@property (copy, nonatomic) NSURL *webServiceURL; // ivar: _webServiceURL


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOrderTypeIdentifier:(id)arg0 orderIdentifier:(id)arg1 webServiceURL:(id)arg2 authenticationToken:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif