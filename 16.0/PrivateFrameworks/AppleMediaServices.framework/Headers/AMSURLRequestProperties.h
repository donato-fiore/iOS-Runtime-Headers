// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSURLREQUESTPROPERTIES_H
#define AMSURLREQUESTPROPERTIES_H

@class ACAccount, NSDictionary, NSString, NSMutableDictionary;
@protocol NSCopying, AMSBagProtocol, AMSResponseDecoding;

#import <Foundation/Foundation.h>

#import "AMSProcessInfo.h"
#import "AMSKeychainOptions.h"
#import "AMSPurchaseInfo.h"

@interface AMSURLRequestProperties : NSObject <NSCopying>



@property (copy, nonatomic) ACAccount *account; // ivar: _account
@property (copy, nonatomic) NSDictionary *additionalMetrics; // ivar: _additionalMetrics
@property (nonatomic) NSInteger anisetteType; // ivar: _anisetteType
@property (retain, nonatomic) NSObject<AMSBagProtocol> *bag; // ivar: _bag
@property (retain, nonatomic) AMSProcessInfo *clientInfo; // ivar: _clientInfo
@property (nonatomic) NSInteger dialogOptions; // ivar: _dialogOptions
@property (nonatomic) BOOL disableBiometricsResponseHandling; // ivar: _disableBiometricsResponseHandling
@property (nonatomic) BOOL disableLoadURLMetrics; // ivar: _disableLoadURLMetrics
@property (nonatomic) BOOL disableResponseDecoding; // ivar: _disableResponseDecoding
@property (retain, nonatomic) NSString *gsTokenIdentifier; // ivar: _gsTokenIdentifier
@property (retain, nonatomic) AMSKeychainOptions *keychainOptions; // ivar: _keychainOptions
@property (nonatomic) BOOL knownToBeTrusted; // ivar: _knownToBeTrusted
@property (copy, nonatomic) NSString *logUUID; // ivar: _logUUID
@property (nonatomic) NSInteger maxRetryCount; // ivar: _maxRetryCount
@property (nonatomic) NSInteger mescalType; // ivar: _mescalType
@property (retain, nonatomic) AMSPurchaseInfo *purchaseInfo; // ivar: _purchaseInfo
@property (nonatomic) BOOL remoteSecuritySigningEnabled; // ivar: _remoteSecuritySigningEnabled
@property (retain, nonatomic) NSObject<AMSResponseDecoding> *responseDecoder; // ivar: _responseDecoder
@property (nonatomic) NSInteger reversePushType; // ivar: _reversePushType
@property (nonatomic) BOOL shouldSetCookiesFromResponse; // ivar: _shouldSetCookiesFromResponse
@property (nonatomic) BOOL shouldSetStorefrontFromResponse; // ivar: _shouldSetStorefrontFromResponse
@property (retain, nonatomic) NSMutableDictionary *userInfo; // ivar: _userInfo


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif