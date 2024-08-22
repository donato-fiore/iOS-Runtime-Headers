// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCBUNDLESUBSCRIPTIONLOOKUPENTRY_H
#define FCBUNDLESUBSCRIPTIONLOOKUPENTRY_H

@class NSArray, NSString, NSDate;

#import <Foundation/Foundation.h>


@interface FCBundleSubscriptionLookUpEntry : NSObject

@property (copy, nonatomic) NSArray *bundleChannelIDs; // ivar: _bundleChannelIDs
@property (copy, nonatomic) NSString *bundleChannelIDsVersion; // ivar: _bundleChannelIDsVersion
@property (copy, nonatomic) NSDate *dateOfExpiration; // ivar: _dateOfExpiration
@property (nonatomic) BOOL hasShownRenewalNotice; // ivar: _hasShownRenewalNotice
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) BOOL inTrialPeriod; // ivar: _inTrialPeriod
@property (nonatomic) BOOL isAmplifyUser; // ivar: _isAmplifyUser
@property (nonatomic) BOOL isPurchaser; // ivar: _isPurchaser
@property (copy, nonatomic) NSString *purchaseID; // ivar: _purchaseID
@property (nonatomic) NSUInteger purchaseValidationState; // ivar: _purchaseValidationState
@property (copy, nonatomic) NSString *servicesBundlePurchaseID; // ivar: _servicesBundlePurchaseID


-(id)bundleSubscription;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithEntryID:(id)arg0 bundleChannelIDs:(id)arg1 bundleChannelIDsVersion:(id)arg2 purchaseID:(id)arg3 purchaseValidationState:(NSUInteger)arg4 dateOfExpiration:(id)arg5 hasShownRenewalNotice:(BOOL)arg6 inTrialPeriod:(BOOL)arg7 isPurchaser:(BOOL)arg8 servicesBundlePurchaseID:(id)arg9 isAmplifyUser:(BOOL)arg10 ;
-(id)initWithEntryID:(id)arg0 dictionaryRepresentation:(id)arg1 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif