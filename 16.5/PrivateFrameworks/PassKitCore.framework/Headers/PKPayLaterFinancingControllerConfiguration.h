// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYLATERFINANCINGCONTROLLERCONFIGURATION_H
#define PKPAYLATERFINANCINGCONTROLLERCONFIGURATION_H

@class NSNumber, NSString, NSArray, NSDecimalNumber;

#import <Foundation/Foundation.h>


@interface PKPayLaterFinancingControllerConfiguration : NSObject

@property (copy, nonatomic) NSNumber *adamIdentifier; // ivar: _adamIdentifier
@property (readonly, nonatomic) NSUInteger channel; // ivar: _channel
@property (readonly, nonatomic) NSUInteger channelType; // ivar: _channelType
@property (copy, nonatomic) NSString *currencyCode; // ivar: _currencyCode
@property (nonatomic) BOOL isMerchantTokenRequest; // ivar: _isMerchantTokenRequest
@property (nonatomic) BOOL isMultiTokenRequest; // ivar: _isMultiTokenRequest
@property (copy, nonatomic) NSString *merchantCountryCode; // ivar: _merchantCountryCode
@property (copy, nonatomic) NSString *merchantIdentifier; // ivar: _merchantIdentifier
@property (copy, nonatomic) NSString *merchantName; // ivar: _merchantName
@property (copy, nonatomic) NSString *originURL; // ivar: _originURL
@property (copy, nonatomic) NSArray *supportedNetworks; // ivar: _supportedNetworks
@property (copy, nonatomic) NSDecimalNumber *transactionAmount; // ivar: _transactionAmount
@property (copy, nonatomic) NSString *webMerchantIdentifier; // ivar: _webMerchantIdentifier
@property (copy, nonatomic) NSString *webMerchantName; // ivar: _webMerchantName


-(id)initWithCurrencyCode:(id)arg0 channel:(NSUInteger)arg1 ;
-(id)initWithTransactionAmount:(id)arg0 currencyCode:(id)arg1 merchantCountryCode:(id)arg2 merchantIdentifier:(id)arg3 originURL:(id)arg4 webMerchantIdentifier:(id)arg5 webMerchantName:(id)arg6 merchantName:(id)arg7 adamIdentifier:(id)arg8 isMerchantTokenRequest:(BOOL)arg9 isMultiTokenRequest:(BOOL)arg10 channel:(NSUInteger)arg11 channelType:(NSUInteger)arg12 supportedNetworks:(id)arg13 ;
-(void)updateMerchantIdentifier:(id)arg0 originURL:(id)arg1 webMerchantIdentifier:(id)arg2 webMerchantName:(id)arg3 ;
-(void)updateTransactionAmount:(id)arg0 ;


@end


#endif