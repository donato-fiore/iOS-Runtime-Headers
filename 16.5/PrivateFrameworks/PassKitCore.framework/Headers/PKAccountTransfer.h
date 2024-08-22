// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKACCOUNTTRANSFER_H
#define PKACCOUNTTRANSFER_H

@class NSDate, NSString;
@protocol NSSecureCoding, PKRecordObject;

#import <Foundation/Foundation.h>

#import "PKCurrencyAmount.h"
#import "PKAccountTransferExternalAccount.h"
#import "PKAccountTransferScheduleDetails.h"

@interface PKAccountTransfer : NSObject <NSSecureCoding, PKRecordObject>



@property (nonatomic) BOOL cancellable; // ivar: _cancellable
@property (copy, nonatomic) NSDate *cancellationExpiryDate; // ivar: _cancellationExpiryDate
@property (copy, nonatomic) NSString *clientReferenceIdentifier; // ivar: _clientReferenceIdentifier
@property (retain, nonatomic) PKCurrencyAmount *currencyAmount; // ivar: _currencyAmount
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSDate *expectedCompletionDate; // ivar: _expectedCompletionDate
@property (retain, nonatomic) PKAccountTransferExternalAccount *externalAccount; // ivar: _externalAccount
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PKCurrencyAmount *holdAmount; // ivar: _holdAmount
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) NSString *referenceIdentifier; // ivar: _referenceIdentifier
@property (retain, nonatomic) PKAccountTransferScheduleDetails *scheduleDetails; // ivar: _scheduleDetails
@property (nonatomic) NSUInteger state; // ivar: _state
@property (nonatomic) NSInteger statusCode; // ivar: _statusCode
@property (readonly) Class superclass;
@property (copy, nonatomic) NSDate *transferDate; // ivar: _transferDate
@property (copy, nonatomic) NSDate *transferStatusDate; // ivar: _transferStatusDate
@property (nonatomic) NSUInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
+(id)recordNamePrefix;
+(id)recordType;
-(BOOL)fundsAreAvailable;
-(BOOL)isCurrentlyCancellable;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 productTimeZone:(id)arg1 ;
-(id)initWithRecord:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)encodeWithRecord:(id)arg0 ;


@end


#endif