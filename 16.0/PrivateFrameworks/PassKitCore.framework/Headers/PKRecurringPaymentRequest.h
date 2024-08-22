// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKRECURRINGPAYMENTREQUEST_H
#define PKRECURRINGPAYMENTREQUEST_H

@class NSString, NSURL;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PKRecurringPaymentSummaryItem.h"

@interface PKRecurringPaymentRequest : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSString *billingAgreement; // ivar: _billingAgreement
@property (retain, nonatomic) NSURL *managementURL; // ivar: _managementURL
@property (copy, nonatomic) NSString *paymentDescription; // ivar: _paymentDescription
@property (retain, nonatomic) PKRecurringPaymentSummaryItem *regularBilling; // ivar: _regularBilling
@property (retain, nonatomic) NSURL *tokenNotificationURL; // ivar: _tokenNotificationURL
@property (retain, nonatomic) PKRecurringPaymentSummaryItem *trialBilling; // ivar: _trialBilling


+(BOOL)supportsSecureCoding;
+(NSInteger)version;
+(id)recurringPaymentRequestWithProtobuf:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToRecurringPaymentRequest:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 error:(*id)arg1 ;
-(id)initWithPaymentDescription:(id)arg0 regularBilling:(id)arg1 managementURL:(id)arg2 ;
-(id)protobuf;
-(void)encodeWithCoder:(id)arg0 ;
-(void)sanitize;


@end


#endif