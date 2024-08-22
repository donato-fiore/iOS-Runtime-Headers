// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKAUTOMATICRELOADPAYMENTREQUEST_H
#define PKAUTOMATICRELOADPAYMENTREQUEST_H

@class NSString, NSURL;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PKAutomaticReloadPaymentSummaryItem.h"

@interface PKAutomaticReloadPaymentRequest : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) PKAutomaticReloadPaymentSummaryItem *automaticReloadBilling; // ivar: _automaticReloadBilling
@property (copy, nonatomic) NSString *billingAgreement; // ivar: _billingAgreement
@property (retain, nonatomic) NSURL *managementURL; // ivar: _managementURL
@property (copy, nonatomic) NSString *paymentDescription; // ivar: _paymentDescription
@property (retain, nonatomic) NSURL *tokenNotificationURL; // ivar: _tokenNotificationURL


+(BOOL)supportsSecureCoding;
+(NSInteger)version;
+(id)automaticReloadPaymentRequestWithProtobuf:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToAutomaticReloadPaymentRequest:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 error:(*id)arg1 ;
-(id)initWithPaymentDescription:(id)arg0 automaticReloadBilling:(id)arg1 managementURL:(id)arg2 ;
-(id)protobuf;
-(void)encodeWithCoder:(id)arg0 ;
-(void)sanitize;


@end


#endif