// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICUSERIDENTITYPROPERTIES_H
#define ICUSERIDENTITYPROPERTIES_H

@class NSString, NSDate, NSNumber, NSDictionary, NSArray;
@protocol NSMutableCopying, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "ICDelegateToken.h"

@interface ICUserIdentityProperties : NSObject <NSMutableCopying, NSCopying, NSSecureCoding>

 {
    NSString *_alternateDSID;
    NSString *_carrierBundleDeviceIdentifier;
    NSString *_firstName;
    NSString *_lastName;
    NSString *_storefrontIdentifier;
    NSString *_username;
    NSDate *_ageVerificationExpirationDate;
    NSNumber *_mergeToCloudLibraryPreference;
    NSDictionary *_cloudLibraryStateReason;
    NSDictionary *_privacyAcknowledgementVersions;
}


@property (readonly, copy, nonatomic) NSNumber *DSID; // ivar: _dsid
@property (readonly, nonatomic, getter=isActive) BOOL active; // ivar: _active
@property (readonly, nonatomic, getter=isActiveLocker) BOOL activeLocker; // ivar: _activeLocker
@property (readonly, copy, nonatomic) NSDate *ageVerificationExpirationDate;
@property (readonly, copy, nonatomic) NSString *alternateDSID;
@property (readonly, copy, nonatomic) NSString *carrierBundleDeviceIdentifier;
@property (nonatomic, getter=isCloudBackupEnabled) BOOL cloudBackupEnabled; // ivar: _cloudBackupEnabled
@property (readonly, copy, nonatomic) NSDictionary *cloudLibraryStateReason;
@property (readonly, copy, nonatomic) ICDelegateToken *delegateToken; // ivar: _delegateToken
@property (readonly, nonatomic, getter=isDelegated) BOOL delegated; // ivar: _delegated
@property (readonly, copy, nonatomic) NSString *firstName;
@property (copy, nonatomic) NSArray *homeUserIdentifiers; // ivar: _homeUserIdentifiers
@property (copy, nonatomic, setter=setICloudPersonID:) NSString *iCloudPersonID; // ivar: _iCloudPersonID
@property (readonly, copy, nonatomic) NSString *lastName;
@property (readonly, nonatomic, getter=isManagedAppleID) BOOL managedAppleID; // ivar: _managedAppleID
@property (readonly, copy, nonatomic) NSNumber *mergeToCloudLibraryPreference;
@property (readonly, copy, nonatomic) NSDictionary *privacyAcknowledgementVersions;
@property (readonly, copy, nonatomic) NSNumber *privateListeningEnabled; // ivar: _privateListeningEnabled
@property (copy, nonatomic) NSDictionary *privateListeningEnabledForHomeUsers; // ivar: _privateListeningEnabledForHomeUsers
@property (readonly, nonatomic, getter=isSandboxed) BOOL sandboxed; // ivar: _sandboxed
@property (readonly, copy, nonatomic) NSString *storefrontIdentifier;
@property (readonly, nonatomic, getter=isSubscriptionStatusEnabled) BOOL subscriptionStatusEnabled; // ivar: _subscriptionStatusEnabled
@property (readonly, copy, nonatomic) NSString *username;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToIdentityProperties:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif