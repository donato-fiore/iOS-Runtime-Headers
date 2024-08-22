// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MKLOCALSEARCHMERCHANTPARAMETERS_H
#define _MKLOCALSEARCHMERCHANTPARAMETERS_H

@class NSString, NSNumber, NSDate, CLLocation;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface _MKLocalSearchMerchantParameters : NSObject <NSCopying>



@property (copy, nonatomic) NSString *industryCategory; // ivar: _industryCategory
@property (retain, nonatomic) NSNumber *industryCode; // ivar: _industryCode
@property (copy, nonatomic) NSString *merchantCode; // ivar: _merchantCode
@property (copy, nonatomic) NSString *paymentNetwork; // ivar: _paymentNetwork
@property (copy, nonatomic) NSString *rawMerchantCode; // ivar: _rawMerchantCode
@property (retain, nonatomic) NSDate *transactionDate; // ivar: _transactionDate
@property (retain, nonatomic) CLLocation *transactionLocation; // ivar: _transactionLocation


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif