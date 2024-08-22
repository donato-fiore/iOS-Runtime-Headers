// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPROTOBUFPAYMENTAPPLICATION_H
#define PKPROTOBUFPAYMENTAPPLICATION_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "PKProtobufCustomPrecisionAmount.h"

@interface PKProtobufPaymentApplication : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *apanIdentifier; // ivar: _apanIdentifier
@property (retain, nonatomic) NSString *apanSuffix; // ivar: _apanSuffix
@property (retain, nonatomic) NSString *applicationIdentifier; // ivar: _applicationIdentifier
@property (nonatomic) BOOL auxiliary; // ivar: _auxiliary
@property (nonatomic) unsigned int auxiliaryPaymentType; // ivar: _auxiliaryPaymentType
@property (retain, nonatomic) PKProtobufCustomPrecisionAmount *customPrecisionInAppPINRequiredAmount; // ivar: _customPrecisionInAppPINRequiredAmount
@property (retain, nonatomic) NSString *displayName; // ivar: _displayName
@property (retain, nonatomic) NSString *dpanIdentifier; // ivar: _dpanIdentifier
@property (retain, nonatomic) NSString *dpanSuffix; // ivar: _dpanSuffix
@property (readonly, nonatomic) BOOL hasApanIdentifier;
@property (readonly, nonatomic) BOOL hasApanSuffix;
@property (readonly, nonatomic) BOOL hasApplicationIdentifier;
@property (nonatomic) BOOL hasAuxiliary;
@property (nonatomic) BOOL hasAuxiliaryPaymentType;
@property (readonly, nonatomic) BOOL hasCustomPrecisionInAppPINRequiredAmount;
@property (readonly, nonatomic) BOOL hasDisplayName;
@property (readonly, nonatomic) BOOL hasDpanIdentifier;
@property (readonly, nonatomic) BOOL hasDpanSuffix;
@property (nonatomic) BOOL hasInAppPINRequired;
@property (nonatomic) BOOL hasInAppPINRequiredAmount;
@property (readonly, nonatomic) BOOL hasInAppPINRequiredCurrency;
@property (nonatomic) BOOL hasInAppPriority;
@property (nonatomic) BOOL hasPaymentNetworkIdentifier;
@property (nonatomic) BOOL hasPaymentType;
@property (readonly, nonatomic) BOOL hasSanitizedDpan;
@property (readonly, nonatomic) BOOL hasSecureElementIdenfitier;
@property (nonatomic) BOOL hasState;
@property (nonatomic) BOOL hasSupportsContactlessPayment;
@property (nonatomic) BOOL hasSupportsInAppPayment;
@property (nonatomic) BOOL hasSupportsMerchantTokens;
@property (nonatomic) BOOL hasSupportsMultiTokensV2;
@property (readonly, nonatomic) BOOL hasSuspendedReason;
@property (nonatomic) BOOL inAppPINRequired; // ivar: _inAppPINRequired
@property (nonatomic) NSInteger inAppPINRequiredAmount; // ivar: _inAppPINRequiredAmount
@property (retain, nonatomic) NSString *inAppPINRequiredCurrency; // ivar: _inAppPINRequiredCurrency
@property (nonatomic) NSInteger inAppPriority; // ivar: _inAppPriority
@property (nonatomic) unsigned int paymentNetworkIdentifier; // ivar: _paymentNetworkIdentifier
@property (nonatomic) unsigned int paymentType; // ivar: _paymentType
@property (retain, nonatomic) NSString *sanitizedDpan; // ivar: _sanitizedDpan
@property (retain, nonatomic) NSString *secureElementIdenfitier; // ivar: _secureElementIdenfitier
@property (nonatomic) unsigned int state; // ivar: _state
@property (nonatomic) BOOL supportsContactlessPayment; // ivar: _supportsContactlessPayment
@property (nonatomic) BOOL supportsInAppPayment; // ivar: _supportsInAppPayment
@property (nonatomic) BOOL supportsMerchantTokens; // ivar: _supportsMerchantTokens
@property (nonatomic) BOOL supportsMultiTokensV2; // ivar: _supportsMultiTokensV2
@property (retain, nonatomic) NSString *suspendedReason; // ivar: _suspendedReason


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