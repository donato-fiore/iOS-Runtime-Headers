// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKDEFERREDPAYMENTREQUEST_H
#define PKDEFERREDPAYMENTREQUEST_H

@class NSString, NSDate, NSTimeZone, NSURL;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PKDeferredPaymentSummaryItem.h"

@interface PKDeferredPaymentRequest : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSString *billingAgreement; // ivar: _billingAgreement
@property (retain, nonatomic) PKDeferredPaymentSummaryItem *deferredBilling; // ivar: _deferredBilling
@property (retain, nonatomic) NSDate *freeCancellationDate; // ivar: _freeCancellationDate
@property (retain, nonatomic) NSTimeZone *freeCancellationDateTimeZone; // ivar: _freeCancellationDateTimeZone
@property (retain, nonatomic) NSURL *managementURL; // ivar: _managementURL
@property (copy, nonatomic) NSString *paymentDescription; // ivar: _paymentDescription
@property (retain, nonatomic) NSURL *tokenNotificationURL; // ivar: _tokenNotificationURL


+(BOOL)supportsSecureCoding;
+(id)deferredPaymentRequestWithProtobuf:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToDeferredPaymentRequest:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPaymentDescription:(id)arg0 deferredBilling:(id)arg1 managementURL:(id)arg2 ;
-(id)protobuf;
-(void)encodeWithCoder:(id)arg0 ;
-(void)sanitize;


@end


#endif