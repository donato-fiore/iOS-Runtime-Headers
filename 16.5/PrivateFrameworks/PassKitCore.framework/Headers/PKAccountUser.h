// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKACCOUNTUSER_H
#define PKACCOUNTUSER_H

@class NSString, NSSet, NSDate, NSPersonNameComponents;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PKAccountUserNotificationSettings.h"
#import "PKAccountUserPreferences.h"

@interface PKAccountUser : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) NSUInteger accessLevel; // ivar: _accessLevel
@property (copy, nonatomic) NSString *accountIdentifier; // ivar: _accountIdentifier
@property (nonatomic) NSUInteger accountState; // ivar: _accountState
@property (copy, nonatomic) NSSet *addressableHandles; // ivar: _addressableHandles
@property (copy, nonatomic) NSString *altDSID; // ivar: _altDSID
@property (copy, nonatomic) NSString *appleID; // ivar: _appleID
@property (nonatomic, getter=isCurrentUser) BOOL currentUser; // ivar: _currentUser
@property (nonatomic, getter=isDirty) BOOL dirty; // ivar: _dirty
@property (copy, nonatomic) NSString *firstName; // ivar: _firstName
@property (nonatomic) NSUInteger identityStatus; // ivar: _identityStatus
@property (copy, nonatomic) NSString *lastName; // ivar: _lastName
@property (retain, nonatomic) NSDate *lastUpdated; // ivar: _lastUpdated
@property (readonly, nonatomic) NSPersonNameComponents *nameComponents;
@property (retain, nonatomic) PKAccountUserNotificationSettings *notificationSettings; // ivar: _notificationSettings
@property (retain, nonatomic) PKAccountUserPreferences *preferences; // ivar: _preferences
@property (copy, nonatomic) NSSet *supportedFeatures; // ivar: _supportedFeatures
@property (copy, nonatomic) NSSet *transactionSourceIdentifiers; // ivar: _transactionSourceIdentifiers


+(BOOL)currentUser:(id)arg0 canShareZone:(id)arg1 withAccountUser:(id)arg2 ;
+(BOOL)currentUser:(id)arg0 shouldRequestZoneShareForZone:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToAccountUser:(id)arg0 ;
-(BOOL)supportsMonthlySpendLimit;
-(BOOL)supportsPhysicalCardActivation;
-(BOOL)supportsRequestPhysicalCard;
-(NSUInteger)hash;
-(id)_featureWithIdentifier:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)monthlySpendLimitFeatureDescriptor;
-(id)physicalCardActivationFeatureDescriptor;
-(id)requestPhysicalCardFeatureDescriptor;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif