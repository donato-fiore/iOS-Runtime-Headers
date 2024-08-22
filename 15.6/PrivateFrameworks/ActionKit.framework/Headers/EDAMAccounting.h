// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EDAMACCOUNTING_H
#define EDAMACCOUNTING_H

@class NSNumber, NSString;


#import "FATObject.h"
#import "EDAMBackupPaymentInfo.h"

@interface EDAMAccounting : FATObject

@property (retain, nonatomic) NSNumber *availablePoints; // ivar: _availablePoints
@property (retain, nonatomic) EDAMBackupPaymentInfo *backupPaymentInfo; // ivar: _backupPaymentInfo
@property (retain, nonatomic) NSNumber *businessId; // ivar: _businessId
@property (retain, nonatomic) NSString *businessName; // ivar: _businessName
@property (retain, nonatomic) NSNumber *businessRole; // ivar: _businessRole
@property (retain, nonatomic) NSString *currency; // ivar: _currency
@property (retain, nonatomic) NSNumber *lastFailedCharge; // ivar: _lastFailedCharge
@property (retain, nonatomic) NSString *lastFailedChargeReason; // ivar: _lastFailedChargeReason
@property (retain, nonatomic) NSNumber *lastRequestedCharge; // ivar: _lastRequestedCharge
@property (retain, nonatomic) NSNumber *lastSuccessfulCharge; // ivar: _lastSuccessfulCharge
@property (retain, nonatomic) NSNumber *nextChargeDate; // ivar: _nextChargeDate
@property (retain, nonatomic) NSNumber *nextPaymentDue; // ivar: _nextPaymentDue
@property (retain, nonatomic) NSString *premiumCommerceService; // ivar: _premiumCommerceService
@property (retain, nonatomic) NSNumber *premiumLockUntil; // ivar: _premiumLockUntil
@property (retain, nonatomic) NSString *premiumOrderNumber; // ivar: _premiumOrderNumber
@property (retain, nonatomic) NSString *premiumServiceSKU; // ivar: _premiumServiceSKU
@property (retain, nonatomic) NSNumber *premiumServiceStart; // ivar: _premiumServiceStart
@property (retain, nonatomic) NSNumber *premiumServiceStatus; // ivar: _premiumServiceStatus
@property (retain, nonatomic) NSString *premiumSubscriptionNumber; // ivar: _premiumSubscriptionNumber
@property (retain, nonatomic) NSNumber *unitDiscount; // ivar: _unitDiscount
@property (retain, nonatomic) NSNumber *unitPrice; // ivar: _unitPrice
@property (retain, nonatomic) NSNumber *updated; // ivar: _updated
@property (retain, nonatomic) NSNumber *uploadLimit; // ivar: _uploadLimit
@property (retain, nonatomic) NSNumber *uploadLimitEnd; // ivar: _uploadLimitEnd
@property (retain, nonatomic) NSNumber *uploadLimitNextMonth; // ivar: _uploadLimitNextMonth


+(id)structFields;
+(id)structName;


@end


#endif