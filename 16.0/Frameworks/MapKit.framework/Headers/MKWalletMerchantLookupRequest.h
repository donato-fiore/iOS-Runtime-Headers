// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MKWALLETMERCHANTLOOKUPREQUEST_H
#define MKWALLETMERCHANTLOOKUPREQUEST_H

@class NSString, NSNumber, GEOLocation, GEOMapServiceTraits, NSDate;

#import <Foundation/Foundation.h>


@interface MKWalletMerchantLookupRequest : NSObject

@property (copy, nonatomic) NSString *adamId; // ivar: _adamId
@property (copy, nonatomic) NSNumber *coarseLocationUsed; // ivar: _coarseLocationUsed
@property (copy, nonatomic) NSNumber *fuzzyMatched; // ivar: _fuzzyMatched
@property (copy, nonatomic) NSString *industryCategory; // ivar: _industryCategory
@property (copy, nonatomic) NSNumber *industryCode; // ivar: _industryCode
@property (copy, nonatomic) GEOLocation *location; // ivar: _location
@property (copy, nonatomic) NSString *merchantAdditionalData; // ivar: _merchantAdditionalData
@property (copy, nonatomic) NSString *merchantAddress; // ivar: _merchantAddress
@property (copy, nonatomic) NSString *merchantCanl; // ivar: _merchantCanl
@property (copy, nonatomic) NSString *merchantCity; // ivar: _merchantCity
@property (copy, nonatomic) NSNumber *merchantCleanConfidenceLevel; // ivar: _merchantCleanConfidenceLevel
@property (copy, nonatomic) NSString *merchantCode; // ivar: _merchantCode
@property (copy, nonatomic) NSString *merchantCountryCode; // ivar: _merchantCountryCode
@property (copy, nonatomic) NSString *merchantDoingBizAsName; // ivar: _merchantDoingBizAsName
@property (copy, nonatomic) NSString *merchantEnhancedName; // ivar: _merchantEnhancedName
@property (copy, nonatomic) NSString *merchantId; // ivar: _merchantId
@property (copy, nonatomic) NSString *merchantRawAddress; // ivar: _merchantRawAddress
@property (copy, nonatomic) NSString *merchantRawCity; // ivar: _merchantRawCity
@property (copy, nonatomic) NSString *merchantRawState; // ivar: _merchantRawState
@property (copy, nonatomic) NSString *merchantState; // ivar: _merchantState
@property (copy, nonatomic) NSString *merchantType; // ivar: _merchantType
@property (copy, nonatomic) NSString *merchantZip; // ivar: _merchantZip
@property (copy, nonatomic) NSString *paymentNetwork; // ivar: _paymentNetwork
@property (copy, nonatomic) NSString *rawMerchantCode; // ivar: _rawMerchantCode
@property (copy, nonatomic) NSString *relyingPartyIdentifier; // ivar: _relyingPartyIdentifier
@property (copy, nonatomic) NSString *terminalId; // ivar: _terminalId
@property (copy, nonatomic) GEOMapServiceTraits *traits; // ivar: _traits
@property (copy, nonatomic) NSString *transactionCurrencyCode; // ivar: _transactionCurrencyCode
@property (copy, nonatomic) NSDate *transactionDate; // ivar: _transactionDate
@property (copy, nonatomic) NSString *transactionId; // ivar: _transactionId
@property (nonatomic) NSUInteger transactionType; // ivar: _transactionType
@property (copy, nonatomic) NSString *warsawMerchantDomain; // ivar: _warsawMerchantDomain
@property (copy, nonatomic) NSString *warsawMerchantId; // ivar: _warsawMerchantId
@property (copy, nonatomic) NSString *warsawMerchantName; // ivar: _warsawMerchantName




@end


#endif