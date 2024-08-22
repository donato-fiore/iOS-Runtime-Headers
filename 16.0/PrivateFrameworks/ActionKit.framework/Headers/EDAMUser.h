// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EDAMUSER_H
#define EDAMUSER_H

@class NSNumber, NSString;


#import "FATObject.h"
#import "EDAMAccountLimits.h"
#import "EDAMAccounting.h"
#import "EDAMUserAttributes.h"
#import "EDAMBusinessUserInfo.h"
#import "EDAMPremiumInfo.h"
#import "EDAMPricingModel.h"
#import "EDAMSubscriptionInfo.h"

@interface EDAMUser : FATObject

@property (retain, nonatomic) EDAMAccountLimits *accountLimits; // ivar: _accountLimits
@property (retain, nonatomic) EDAMAccounting *accounting; // ivar: _accounting
@property (retain, nonatomic) NSNumber *active; // ivar: _active
@property (retain, nonatomic) EDAMUserAttributes *attributes; // ivar: _attributes
@property (retain, nonatomic) EDAMBusinessUserInfo *businessUserInfo; // ivar: _businessUserInfo
@property (retain, nonatomic) NSNumber *created; // ivar: _created
@property (retain, nonatomic) NSNumber *deleted; // ivar: _deleted
@property (retain, nonatomic) NSString *email; // ivar: _email
@property (retain, nonatomic) NSNumber *id; // ivar: _id
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSNumber *photoLastUpdated; // ivar: _photoLastUpdated
@property (retain, nonatomic) NSString *photoUrl; // ivar: _photoUrl
@property (retain, nonatomic) EDAMPremiumInfo *premiumInfo; // ivar: _premiumInfo
@property (retain, nonatomic) EDAMPricingModel *pricingModel; // ivar: _pricingModel
@property (retain, nonatomic) NSNumber *privilege; // ivar: _privilege
@property (retain, nonatomic) NSNumber *serviceLevel; // ivar: _serviceLevel
@property (retain, nonatomic) NSString *shardId; // ivar: _shardId
@property (retain, nonatomic) EDAMSubscriptionInfo *subscriptionInfo; // ivar: _subscriptionInfo
@property (retain, nonatomic) NSString *timezone; // ivar: _timezone
@property (retain, nonatomic) NSNumber *updated; // ivar: _updated
@property (retain, nonatomic) NSString *username; // ivar: _username


+(id)structFields;
+(id)structName;


@end


#endif