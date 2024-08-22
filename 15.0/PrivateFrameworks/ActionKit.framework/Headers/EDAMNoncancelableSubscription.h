// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EDAMNONCANCELABLESUBSCRIPTION_H
#define EDAMNONCANCELABLESUBSCRIPTION_H

@class NSString, NSNumber;


#import "FATObject.h"
#import "EDAMUser.h"

@interface EDAMNoncancelableSubscription : FATObject

@property (retain, nonatomic) NSString *amazonPurchaseToken; // ivar: _amazonPurchaseToken
@property (retain, nonatomic) NSString *amazonUserId; // ivar: _amazonUserId
@property (retain, nonatomic) NSString *currency; // ivar: _currency
@property (retain, nonatomic) NSString *itunesOriginalTransactionId; // ivar: _itunesOriginalTransactionId
@property (retain, nonatomic) NSString *itunesReceiptData; // ivar: _itunesReceiptData
@property (retain, nonatomic) NSNumber *nextPaymentDue; // ivar: _nextPaymentDue
@property (retain, nonatomic) NSString *premiumCommerceService; // ivar: _premiumCommerceService
@property (retain, nonatomic) NSNumber *premiumLockUntil; // ivar: _premiumLockUntil
@property (retain, nonatomic) NSString *premiumServiceSku; // ivar: _premiumServiceSku
@property (retain, nonatomic) NSNumber *premiumServiceStatus; // ivar: _premiumServiceStatus
@property (retain, nonatomic) NSNumber *subscriptionId; // ivar: _subscriptionId
@property (retain, nonatomic) NSNumber *unitPrice; // ivar: _unitPrice
@property (retain, nonatomic) EDAMUser *user; // ivar: _user


+(id)structFields;
+(id)structName;


@end


#endif