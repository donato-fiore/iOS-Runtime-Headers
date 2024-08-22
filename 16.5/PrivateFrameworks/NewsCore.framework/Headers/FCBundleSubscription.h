// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCBUNDLESUBSCRIPTION_H
#define FCBUNDLESUBSCRIPTION_H

@class NSOrderedSet, NSString, NSNumber;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface FCBundleSubscription : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSOrderedSet *bundleChannelIDs; // ivar: _bundleChannelIDs
@property (copy, nonatomic) NSString *bundleChannelIDsVersion; // ivar: _bundleChannelIDsVersion
@property (copy, nonatomic) NSString *bundlePurchaseID; // ivar: _bundlePurchaseID
@property (copy, nonatomic) NSNumber *initialPurchaseTimestamp; // ivar: _initialPurchaseTimestamp
@property (nonatomic) BOOL isAmplifyUser; // ivar: _isAmplifyUser
@property (nonatomic) BOOL isPaidBundleViaOfferActivated; // ivar: _isPaidBundleViaOfferActivated
@property (nonatomic) BOOL isPurchaser; // ivar: _isPurchaser
@property (readonly, nonatomic) BOOL isServicesBundleUser;
@property (readonly, nonatomic) BOOL isSubscribed;
@property (copy, nonatomic) NSString *servicesBundlePurchaseID; // ivar: _servicesBundlePurchaseID
@property (readonly, nonatomic) NSUInteger subscriptionState;
@property (nonatomic) NSUInteger unprotectedSubscriptionState; // ivar: _unprotectedSubscriptionState


+(BOOL)supportsSecureCoding;
+(id)subscriptionWithSubscriptionState:(NSUInteger)arg0 bundleChannelIDs:(id)arg1 ;
-(BOOL)containsHeadline:(id)arg0 ;
-(BOOL)containsItem:(id)arg0 ;
-(BOOL)containsTagID:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)initWithBundlePurchaseID:(id)arg0 bundleChannelIDs:(id)arg1 bundleChannelIDsVersion:(id)arg2 inTrialPeriod:(BOOL)arg3 isPurchaser:(BOOL)arg4 servicesBundlePurchaseID:(id)arg5 isAmplifyUser:(BOOL)arg6 initialPurchaseTimestamp:(id)arg7 isPaidBundleViaOfferActivated:(BOOL)arg8 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif