// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMSPURCHASEINFO_H
#define AMSPURCHASEINFO_H

@class ACAccount, NSMutableDictionary, NSString, NSDictionary, LAContext, NSURL;
@protocol AMSPurchaseDelegate;

#import <Foundation/Foundation.h>

#import "AMSPurchaseTask.h"
#import "AMSBuyParams.h"
#import "AMSProcessInfo.h"
#import "AMSPurchase.h"

@interface AMSPurchaseInfo : NSObject

@property (retain, nonatomic) ACAccount *account; // ivar: _account
@property (weak, nonatomic) AMSPurchaseTask *activePurchaseTask; // ivar: _activePurchaseTask
@property (nonatomic) BOOL addKBSync; // ivar: _addKBSync
@property (retain, nonatomic) NSMutableDictionary *additionalHeaders; // ivar: _additionalHeaders
@property (retain, nonatomic) AMSBuyParams *buyParams; // ivar: _buyParams
@property (readonly, nonatomic) NSString *clientCorrelationKey; // ivar: _clientCorrelationKey
@property (readonly, nonatomic) AMSProcessInfo *clientInfo; // ivar: _clientInfo
@property (retain, nonatomic) NSObject<AMSPurchaseDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSDictionary *dialog; // ivar: _dialog
@property (retain, nonatomic) NSString *dialogId; // ivar: _dialogId
@property (nonatomic) BOOL hasBeenAuthedForBuy; // ivar: _hasBeenAuthedForBuy
@property (nonatomic) BOOL hasRetriedOriginalOwnerAccount; // ivar: _hasRetriedOriginalOwnerAccount
@property (retain, nonatomic) NSDictionary *idmsTokens; // ivar: _idmsTokens
@property (retain, nonatomic) LAContext *localAuthContext; // ivar: _localAuthContext
@property (retain, nonatomic) NSURL *paymentServicesURL; // ivar: _paymentServicesURL
@property (retain, nonatomic) NSString *paymentToken; // ivar: _paymentToken
@property (readonly, nonatomic) AMSPurchase *purchase; // ivar: _purchase


-(id)_purchaseStringForType:(NSInteger)arg0 ;
-(id)description;
-(id)initWithPurchase:(id)arg0 ;


@end


#endif