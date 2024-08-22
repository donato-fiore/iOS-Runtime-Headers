// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPROTOBUFAUTOMATICRELOADPAYMENTREQUEST_H
#define PKPROTOBUFAUTOMATICRELOADPAYMENTREQUEST_H

@class PBRequest, NSString;
@protocol NSCopying;


#import "PKProtobufPaymentSummaryItem.h"

@interface PKProtobufAutomaticReloadPaymentRequest : PBRequest <NSCopying>



@property (retain, nonatomic) PKProtobufPaymentSummaryItem *automaticPaymentBilling; // ivar: _automaticPaymentBilling
@property (retain, nonatomic) NSString *billingAgreement; // ivar: _billingAgreement
@property (readonly, nonatomic) BOOL hasAutomaticPaymentBilling;
@property (readonly, nonatomic) BOOL hasBillingAgreement;
@property (readonly, nonatomic) BOOL hasManagementURL;
@property (readonly, nonatomic) BOOL hasPaymentDescription;
@property (readonly, nonatomic) BOOL hasTokenNotificationURL;
@property (retain, nonatomic) NSString *managementURL; // ivar: _managementURL
@property (retain, nonatomic) NSString *paymentDescription; // ivar: _paymentDescription
@property (retain, nonatomic) NSString *tokenNotificationURL; // ivar: _tokenNotificationURL


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif