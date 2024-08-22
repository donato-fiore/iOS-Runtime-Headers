// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EDAMBACKUPPAYMENTINFO_H
#define EDAMBACKUPPAYMENTINFO_H

@class NSString, NSNumber;


#import "FATObject.h"

@interface EDAMBackupPaymentInfo : FATObject

@property (retain, nonatomic) NSString *currency; // ivar: _currency
@property (retain, nonatomic) NSNumber *paymentMethodId; // ivar: _paymentMethodId
@property (retain, nonatomic) NSString *premiumCommerceService; // ivar: _premiumCommerceService
@property (retain, nonatomic) NSString *premiumServiceSKU; // ivar: _premiumServiceSKU
@property (retain, nonatomic) NSNumber *unitPrice; // ivar: _unitPrice


+(id)structFields;
+(id)structName;


@end


#endif