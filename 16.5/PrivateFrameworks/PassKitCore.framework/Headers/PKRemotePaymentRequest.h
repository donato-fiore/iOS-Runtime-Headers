// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKREMOTEPAYMENTREQUEST_H
#define PKREMOTEPAYMENTREQUEST_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PKRemoteDevice.h"
#import "PKPaymentRequest.h"

@interface PKRemotePaymentRequest : NSObject <NSSecureCoding>



@property (readonly, nonatomic) PKRemoteDevice *device; // ivar: _device
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) PKPaymentRequest *paymentRequest; // ivar: _paymentRequest
@property (copy, nonatomic) NSString *selectedApplicationIdentifier; // ivar: _selectedApplicationIdentifier
@property (nonatomic) NSUInteger selectedPaymentMethodType; // ivar: _selectedPaymentMethodType


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToRemoteRequest:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDevice:(id)arg0 ;
-(id)initWithDevice:(id)arg0 identifier:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif