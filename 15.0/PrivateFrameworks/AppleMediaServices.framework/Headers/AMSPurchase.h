// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSPURCHASE_H
#define AMSPURCHASE_H

@class ACAccount, NSNumber, NSDictionary, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "AMSBuyParams.h"
#import "AMSProcessInfo.h"

@interface AMSPurchase : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) ACAccount *account; // ivar: _account
@property (copy, nonatomic) NSNumber *accountId; // ivar: _accountId
@property (copy, nonatomic) NSDictionary *additionalHeaders; // ivar: _additionalHeaders
@property (readonly, copy, nonatomic) AMSBuyParams *buyParams; // ivar: _buyParams
@property (copy, nonatomic) NSString *callerBundleId; // ivar: _callerBundleId
@property (readonly, copy, nonatomic) NSString *clientCorrelationKey; // ivar: _clientCorrelationKey
@property (copy, nonatomic) NSString *clientId; // ivar: _clientId
@property (copy, nonatomic) AMSProcessInfo *clientInfo; // ivar: _clientInfo
@property (nonatomic) BOOL ignoreRequirePasswordRestriction; // ivar: _ignoreRequirePasswordRestriction
@property (copy, nonatomic) NSString *logUUID; // ivar: _logUUID
@property (copy, nonatomic) NSDictionary *metricsOverlay; // ivar: _metricsOverlay
@property (copy, nonatomic) NSNumber *ownerAccountId; // ivar: _ownerAccountId
@property (readonly) NSInteger purchaseType; // ivar: _purchaseType
@property (nonatomic) BOOL requiresAccount; // ivar: _requiresAccount
@property (copy, nonatomic) NSString *storefront; // ivar: _storefront
@property (readonly, nonatomic) NSNumber *uniqueIdentifier; // ivar: _uniqueIdentifier
@property (nonatomic) BOOL useJSONContentType; // ivar: _useJSONContentType
@property (nonatomic, getter=isUserInitiated) BOOL userInitiated; // ivar: _userInitiated


+(BOOL)supportsSecureCoding;
-(NSUInteger)hash;
-(id)_generateIdentifier;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPurchaseType:(NSInteger)arg0 buyParams:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif