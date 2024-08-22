// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYLATERFINANCINGCONTROLLERCONFIGURATION_H
#define PKPAYLATERFINANCINGCONTROLLERCONFIGURATION_H

@class NSNumber, NSString, NSDecimalNumber;

#import <Foundation/Foundation.h>


@interface PKPayLaterFinancingControllerConfiguration : NSObject

@property (copy, nonatomic) NSNumber *adamIdentifier; // ivar: _adamIdentifier
@property (readonly, nonatomic) NSUInteger channel; // ivar: _channel
@property (readonly, nonatomic) NSUInteger channelType; // ivar: _channelType
@property (copy, nonatomic) NSString *currencyCode; // ivar: _currencyCode
@property (nonatomic) BOOL isMerchantTokenRequest; // ivar: _isMerchantTokenRequest
@property (nonatomic) BOOL isMultiTokenRequest; // ivar: _isMultiTokenRequest
@property (copy, nonatomic) NSString *merchantIdentifier; // ivar: _merchantIdentifier
@property (copy, nonatomic) NSString *merchantName; // ivar: _merchantName
@property (copy, nonatomic) NSString *originURL; // ivar: _originURL
@property (copy, nonatomic) NSDecimalNumber *transactionAmount; // ivar: _transactionAmount
@property (copy, nonatomic) NSString *webMerchantIdentifier; // ivar: _webMerchantIdentifier
@property (copy, nonatomic) NSString *webMerchantName; // ivar: _webMerchantName


-(id)initWithCurrencyCode:(id)arg0 channel:(NSUInteger)arg1 ;
-(id)initWithTransactionAmount:(id)arg0 currencyCode:(id)arg1 merchantIdentifier:(id)arg2 originURL:(id)arg3 webMerchantIdentifier:(id)arg4 webMerchantName:(id)arg5 merchantName:(id)arg6 adamIdentifier:(id)arg7 isMerchantTokenRequest:(BOOL)arg8 isMultiTokenRequest:(BOOL)arg9 channel:(NSUInteger)arg10 channelType:(NSUInteger)arg11 ;
-(void)updateMerchantIdentifier:(id)arg0 ;
-(void)updateTransactionAmount:(id)arg0 ;


@end


#endif