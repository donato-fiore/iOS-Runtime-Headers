// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICMUSICSUBSCRIPTIONSTATUSREQUEST_H
#define ICMUSICSUBSCRIPTIONSTATUSREQUEST_H

@class NSUUID;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "ICStoreRequestContext.h"

@interface ICMusicSubscriptionStatusRequest : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) BOOL allowsFallbackToExpiredStatus; // ivar: _allowsFallbackToExpiredStatus
@property (nonatomic) BOOL allowsFallbackToStatusNeedingReload; // ivar: _allowsFallbackToStatusNeedingReload
@property (nonatomic) NSInteger carrierBundleProvisioningStyle; // ivar: _carrierBundleProvisioningStyle
@property (nonatomic) NSInteger reason; // ivar: _reason
@property (readonly, nonatomic) NSUUID *requestIdentifier; // ivar: _requestIdentifier
@property (nonatomic) BOOL shouldBypassEnforcementOfPrivacyAcknowledgement; // ivar: _shouldBypassEnforcementOfPrivacyAcknowledgement
@property (nonatomic) BOOL shouldIgnoreCache; // ivar: _shouldIgnoreCache
@property (nonatomic) BOOL shouldReturnLastKnownStatusOnly; // ivar: _shouldReturnLastKnownStatusOnly
@property (copy, nonatomic) ICStoreRequestContext *storeRequestContext; // ivar: _storeRequestContext


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStoreRequestContext:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif