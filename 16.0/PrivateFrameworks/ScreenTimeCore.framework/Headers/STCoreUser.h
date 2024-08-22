// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STCOREUSER_H
#define STCOREUSER_H

@class NSManagedObject, NSString, NSSet, NSNumber, NSDate;


#import "STiCloudOrganizationSettings.h"
#import "STFamilyOrganizationSettings.h"
#import "STLocalOrganizationSettings.h"
#import "STUserDeviceState.h"
#import "STCoreOrganization.h"
#import "STCoreOrganizationSettings.h"

@interface STCoreUser : NSManagedObject {
    NSString *_familyMemberType;
}


@property (readonly) BOOL allLimitsEnabled;
@property BOOL allLimitsEnabled;
@property (copy, nonatomic) NSString *altDSID;
@property (readonly, copy) NSString *alwaysAllowActivationIdentifier;
@property (readonly, copy) NSString *alwaysAllowConfigurationIdentifier;
@property (copy, nonatomic) NSString *appleID;
@property (readonly, copy) NSString *automaticDateTimeConfigurationIdentifier;
@property (retain, nonatomic) NSSet *blueprints;
@property (readonly) BOOL canSetUpFamily;
@property (retain, nonatomic) STiCloudOrganizationSettings *cloudSettings;
@property (readonly) NSInteger communicationPolicy;
@property (nonatomic) NSInteger communicationPolicy;
@property (readonly) NSInteger communicationWhileLimitedPolicy;
@property (nonatomic) NSInteger communicationWhileLimitedPolicy;
@property (nonatomic) NSInteger contactManagementState;
@property (readonly) BOOL contactsEditable;
@property (nonatomic) BOOL contactsEditable;
@property (readonly, copy) NSString *contentPrivacyActivationIdentifier;
@property (copy, nonatomic) NSNumber *dsid;
@property (readonly, copy) NSString *effectivePasscode;
@property (copy) NSString *effectivePasscode;
@property (readonly, copy) NSString *effectiveRecoveryAltDSID;
@property (copy) NSString *effectiveRecoveryAltDSID;
@property (copy, nonatomic) NSString *familyMemberType;
@property (copy, nonatomic) NSString *familyName;
@property (retain, nonatomic) STFamilyOrganizationSettings *familySettings;
@property (copy, nonatomic) NSString *givenName;
@property (readonly, copy) NSString *iCloudLogoutConfigurationIdentifier;
@property (readonly) BOOL isCommunicationSafetyAnalyticsEnabled;
@property BOOL isCommunicationSafetyAnalyticsEnabled;
@property (readonly) BOOL isCommunicationSafetyNotificationEnabled;
@property BOOL isCommunicationSafetyNotificationEnabled;
@property (readonly) BOOL isCommunicationSafetyReceivingRestricted;
@property BOOL isCommunicationSafetyReceivingRestricted;
@property (readonly) BOOL isCommunicationSafetySendingRestricted;
@property BOOL isCommunicationSafetySendingRestricted;
@property (nonatomic) BOOL isFamilyOrganizer;
@property (nonatomic) BOOL isParent;
@property (retain, nonatomic) STLocalOrganizationSettings *localSettings;
@property (retain, nonatomic) STUserDeviceState *localUserDeviceState;
@property (readonly, copy, nonatomic) NSString *localizedFullName;
@property (readonly, getter=isManaged) BOOL managed;
@property (readonly, copy) NSString *managedUserActivationIdentifier;
@property (readonly, getter=isManaging) BOOL managing;
@property (readonly) STCoreOrganization *managingOrganization;
@property (readonly) BOOL needsToSetPasscode;
@property BOOL observableAllLimitsEnabled;
@property (readonly) BOOL observableCanSetUpFamily;
@property BOOL observableCommunicationSafetyAnalyticsEnabled;
@property BOOL observableCommunicationSafetyNotificationEnabled;
@property BOOL observableCommunicationSafetyReceivingRestricted;
@property BOOL observableCommunicationSafetySendingRestricted;
@property BOOL observableScreenTimeEnabled;
@property BOOL observableShareWebUsage;
@property BOOL observableSyncingEnabled;
@property (readonly) NSString *organizationIdentifier;
@property (nonatomic) NSInteger passcodeEntryAttemptCount;
@property (copy, nonatomic) NSDate *passcodeEntryTimeoutEndDate;
@property (nonatomic) NSInteger passcodeRecoveryAttemptCount;
@property (readonly, copy, nonatomic) NSString *phoneticFamilyName;
@property (readonly, copy, nonatomic) NSString *phoneticGivenName;
@property (readonly) BOOL screenTimeEnabled;
@property BOOL screenTimeEnabled;
@property (readonly) BOOL shareWebUsage;
@property BOOL shareWebUsage;
@property (nonatomic) BOOL supportsEncryption;
@property (readonly) BOOL syncingEnabled;
@property BOOL syncingEnabled;
@property (readonly) STCoreOrganizationSettings *unmodeledManagingOrganizationSettings;
@property (readonly) BOOL unmodeledParticipatesInSharedLedger;
@property (retain, nonatomic) NSSet *usages;
@property (retain, nonatomic) NSSet *userDeviceAddresses;
@property (retain, nonatomic) NSSet *userDeviceStates;


+(id)fetchLocalUserInContext:(id)arg0 error:(*id)arg1 ;
+(id)fetchRequestForFamilyMembers;
+(id)fetchRequestForUsersWithDSID:(id)arg0 ;
+(id)fetchRequestMatchingAppleID:(id)arg0 ;
+(id)fetchRequestMatchingLocalUser;
+(id)fetchUserWithAppleID:(id)arg0 inContext:(id)arg1 error:(*id)arg2 ;
+(id)fetchUserWithDSID:(id)arg0 inContext:(id)arg1 error:(*id)arg2 ;
+(id)keyPathsForValuesAffectingAllLimitsEnabled;
+(id)keyPathsForValuesAffectingCanSetUpFamily;
+(id)keyPathsForValuesAffectingCommunicationPolicy;
+(id)keyPathsForValuesAffectingCommunicationWhileLimitedPolicy;
+(id)keyPathsForValuesAffectingContactManagementState;
+(id)keyPathsForValuesAffectingEffectivePasscode;
+(id)keyPathsForValuesAffectingEffectiveRecoveryAltDSID;
+(id)keyPathsForValuesAffectingIsCommunicationSafetyAnalyticsEnabled;
+(id)keyPathsForValuesAffectingIsCommunicationSafetyNotificationEnabled;
+(id)keyPathsForValuesAffectingIsCommunicationSafetyReceivingRestricted;
+(id)keyPathsForValuesAffectingIsCommunicationSafetySendingRestricted;
+(id)keyPathsForValuesAffectingLocalizedFullName;
+(id)keyPathsForValuesAffectingManaged;
+(id)keyPathsForValuesAffectingManaging;
+(id)keyPathsForValuesAffectingNeedsToSetPasscode;
+(id)keyPathsForValuesAffectingObservableAllLimitsEnabled;
+(id)keyPathsForValuesAffectingObservableCanSetUpFamily;
+(id)keyPathsForValuesAffectingObservableCommunicationSafetyAnalyticsEnabled;
+(id)keyPathsForValuesAffectingObservableCommunicationSafetyNotificationEnabled;
+(id)keyPathsForValuesAffectingObservableCommunicationSafetyReceivingRestricted;
+(id)keyPathsForValuesAffectingObservableCommunicationSafetySendingRestricted;
+(id)keyPathsForValuesAffectingObservableScreenTimeEnabled;
+(id)keyPathsForValuesAffectingObservableShareWebUsage;
+(id)keyPathsForValuesAffectingObservableSyncingEnabled;
+(id)keyPathsForValuesAffectingScreenTimeEnabled;
+(id)keyPathsForValuesAffectingShareWebUsage;
+(id)keyPathsForValuesAffectingSyncingEnabled;
-(id)_contactStoreForUser;
-(id)_primaryContainerInContactStore:(id)arg0 withError:(*id)arg1 ;
-(id)contentPrivacyConfigurationIdentifierForType:(id)arg0 ;
-(id)initWithFamilyMemberType:(id)arg0 context:(id)arg1 ;
-(void)didChangeValueForKey:(id)arg0 ;
-(void)notifyServerOfScreenTimeEnabled:(BOOL)arg0 ;
-(void)resetPasscode;
-(void)updateWithDescription:(id)arg0 ;


@end


#endif