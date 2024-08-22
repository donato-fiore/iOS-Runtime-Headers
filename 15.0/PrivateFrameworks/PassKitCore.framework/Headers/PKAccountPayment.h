// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKACCOUNTPAYMENT_H
#define PKACCOUNTPAYMENT_H

@class NSDate, NSString;
@protocol NSSecureCoding, PKRecordObject;

#import <Foundation/Foundation.h>

#import "PKCurrencyAmount.h"
#import "PKAccountPaymentFundingSource.h"
#import "PKAccountPaymentScheduleDetails.h"

@interface PKAccountPayment : NSObject <NSSecureCoding, PKRecordObject>



@property (nonatomic) BOOL cancellable; // ivar: _cancellable
@property (copy, nonatomic) NSDate *cancellationExpiryDate; // ivar: _cancellationExpiryDate
@property (copy, nonatomic) NSString *clientReferenceIdentifier; // ivar: _clientReferenceIdentifier
@property (retain, nonatomic) PKCurrencyAmount *currencyAmount; // ivar: _currencyAmount
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) PKAccountPaymentFundingSource *fundingSource; // ivar: _fundingSource
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) NSDate *paymentDate; // ivar: _paymentDate
@property (copy, nonatomic) NSDate *paymentStatusDate; // ivar: _paymentStatusDate
@property (copy, nonatomic) NSString *referenceIdentifier; // ivar: _referenceIdentifier
@property (retain, nonatomic) PKAccountPaymentScheduleDetails *scheduleDetails; // ivar: _scheduleDetails
@property (nonatomic) NSInteger state; // ivar: _state
@property (nonatomic) NSInteger statusCode; // ivar: _statusCode
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)recordNamePrefix;
+(id)recordType;
-(BOOL)isCurrentlyCancellable;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isOnHoldForAccount:(id)arg0 ;
-(BOOL)isRecurring;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 productTimeZone:(id)arg1 ;
-(id)initWithRecord:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)encodeWithRecord:(id)arg0 ;


@end


#endif