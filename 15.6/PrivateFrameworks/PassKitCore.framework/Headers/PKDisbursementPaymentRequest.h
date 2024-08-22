// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKDISBURSEMENTPAYMENTREQUEST_H
#define PKDISBURSEMENTPAYMENTREQUEST_H



#import "PKPaymentRequest.h"
#import "PKDisbursementRequest.h"

@interface PKDisbursementPaymentRequest : PKPaymentRequest

@property (readonly, nonatomic) PKDisbursementRequest *disbursementRequest; // ivar: _disbursementRequest
@property (readonly, nonatomic) NSUInteger disbursementSource; // ivar: _disbursementSource
@property (readonly, nonatomic) NSUInteger disbursementTarget; // ivar: _disbursementTarget


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDisbursementPaymentRequest:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif