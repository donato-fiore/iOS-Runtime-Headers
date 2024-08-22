// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMSERVICEIMPL_H
#define IMSERVICEIMPL_H

@class NSArray, NSString, NSDictionary, NSData;


#import "IMService.h"
#import "IMAccount.h"

@interface IMServiceImpl : IMService

@property (readonly, nonatomic) unsigned int IDSensitivity; // ivar: _IDSensitivity
@property (readonly, nonatomic) BOOL _wantsInternationizedNumbers;
@property (readonly, nonatomic) Class accountClass;
@property (readonly, nonatomic) NSArray *accountIDs;
@property (readonly, nonatomic) NSArray *addressBookProperties; // ivar: _addressBookProperties
@property (readonly, nonatomic) NSString *addressBookProperty; // ivar: _addressBookProperty
@property (nonatomic) BOOL allowsMultipleConnections; // ivar: _allowsMultipleConnections
@property (retain, nonatomic) IMAccount *bestAccount; // ivar: _bestAccount
@property (readonly, nonatomic) NSInteger buddyNotesMaxByteLength;
@property (retain, nonatomic) NSString *countryCode; // ivar: _countryCode
@property (retain, nonatomic) NSDictionary *defaultAccountSettings; // ivar: _defaultAccountSettings
@property (retain, nonatomic) NSDictionary *defaultSettings; // ivar: _defaultSettings
@property (readonly, nonatomic, getter=isDiscontinued) BOOL discontinued;
@property (retain, nonatomic) NSArray *emailDomains; // ivar: _emailDomains
@property (readonly, nonatomic) BOOL handlesChatInvites; // ivar: _handlesChatInvites
@property (nonatomic) BOOL hasLoadedServiceProperties; // ivar: _hasLoadedServiceProperties
@property (nonatomic) BOOL ignoresNetworkConnectivity; // ivar: _ignoresNetworkConnectivity
@property (retain, nonatomic) NSData *imageData; // ivar: _imageData
@property (readonly, nonatomic) NSString *internalName;
@property (nonatomic) BOOL isPersistent; // ivar: _isPersistent
@property (nonatomic) BOOL isPlugInService; // ivar: _isPlugInService
@property (retain, nonatomic) NSString *localizedName; // ivar: _localizedName
@property (retain, nonatomic) NSString *localizedShortName; // ivar: _localizedShortName
@property (readonly, nonatomic) NSInteger maxAttachmentSize;
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) unsigned int screenNameSensitivity; // ivar: _screenNameSensitivity
@property (retain, nonatomic) NSDictionary *serviceDefaults; // ivar: _serviceDefaults
@property (readonly, nonatomic) NSData *serviceImageData;
@property (retain, nonatomic) NSDictionary *serviceProperties;
@property (retain, nonatomic) NSDictionary *serviceProps; // ivar: _serviceProps
@property (readonly, nonatomic) NSString *shortName; // ivar: _shortName
@property (nonatomic) BOOL shouldDisableDeactivation; // ivar: _shouldDisableDeactivation
@property (nonatomic) BOOL shouldInternationalizeNumbers; // ivar: _shouldInternationalizeNumbers
@property (retain, nonatomic) NSArray *siblingServiceNames; // ivar: _siblingServiceNames
@property (readonly, nonatomic) NSArray *siblingServices;
@property (nonatomic) BOOL supportsAdding; // ivar: _supportsAdding
@property (nonatomic) BOOL supportsAudioMessages; // ivar: _supportsAudioMessages
@property (nonatomic) BOOL supportsAuthorization; // ivar: _supportsAuthorization
@property (readonly, nonatomic) BOOL supportsDatabaseStorage; // ivar: _supportsDatabaseStorage
@property (nonatomic) BOOL supportsGroupAttachments; // ivar: _supportsGroupAttachments
@property (nonatomic) BOOL supportsIDStatusLookup; // ivar: _supportsIDStatusLookup
@property (nonatomic) BOOL supportsMutatingGroupMembers; // ivar: _supportsMutatingGroupMembers
@property (nonatomic) BOOL supportsOfflineTransfers; // ivar: _supportsOfflineTransfers
@property (nonatomic) BOOL supportsOneSessionForAllAccounts; // ivar: _supportsOneSessionForAllAccounts
@property (nonatomic) BOOL supportsPhoneNumberMapping; // ivar: _supportsPhoneNumberMapping
@property (nonatomic) BOOL supportsPresence; // ivar: _supportsPresence
@property (nonatomic) BOOL supportsRegistration; // ivar: _supportsRegistration
@property (nonatomic) BOOL supportsSMS; // ivar: _supportsSMS


+(BOOL)_deviceIsAltAccount;
+(BOOL)_iMessageEnabledForMultipleSubscriptionsForSenderLastAddressedHandle:(id)arg0 simID:(id)arg1 previousService:(id)arg2 ;
+(BOOL)_isLastAddressedHandleSubscriptionActive:(id)arg0 ;
+(BOOL)_isSIMIdIDSRegisteredSIM:(id)arg0 ;
+(BOOL)_isiMessageEnabledIfLastAddressedHandleIsNotActiveAnymore:(id)arg0 ;
+(BOOL)_readMMSUserOverride;
+(BOOL)_shouldCheckIfLastAddressedHandleIsInSubscriptionsAnymoreButiMessageIsEnabledForAlias:(id)arg0 previousService:(id)arg1 ;
+(BOOL)hasAlias:(id)arg0 onAccountForService:(id)arg1 ;
+(BOOL)iMessageEnabled;
+(BOOL)iMessageEnabledForSenderLastAddressedHandle:(id)arg0 simID:(id)arg1 ;
+(BOOL)iMessageEnabledForSenderLastAddressedHandle:(id)arg0 simID:(id)arg1 previousService:(id)arg2 ;
+(BOOL)mmsEnabled;
+(BOOL)mmsEnabledforPhoneNumber:(id)arg0 simID:(id)arg1 ;
+(BOOL)smsEnabled;
+(BOOL)systemSupportsSMSSending;
+(BOOL)systemSupportsSendingAttachmentsOfTypes:(id)arg0 error:(*NSInteger)arg1 ;
+(Class)serviceClass;
+(id)_phoneNumberOnSubscriptionWithSIMID:(id)arg0 ;
+(id)activeServices;
+(id)allServices;
+(id)allServicesNonBlocking;
+(id)connectedServices;
+(id)connectedServicesWithCapability:(NSUInteger)arg0 ;
+(id)operationalServicesWithCapability:(NSUInteger)arg0 ;
+(id)serviceWithInternalName:(id)arg0 ;
+(id)serviceWithName:(id)arg0 ;
+(id)servicesWithCapability:(NSUInteger)arg0 ;
+(id)supportedCountryCodes;
+(void)setServiceClass:(Class)arg0 ;
-(BOOL)equalID:(id)arg0 andID:(id)arg1 ;
-(BOOL)initialSyncPerformed;
-(BOOL)isEnabled;
-(NSInteger)compareNames:(id)arg0 ;
-(NSInteger)maxChatParticipantsForHandle:(id)arg0 simID:(id)arg1 ;
-(NSUInteger)status;
-(id)canonicalFormOfID:(id)arg0 ;
-(id)description;
-(id)infoForAllScreenNames;
-(id)infoForPreferredScreenNames;
-(id)infoForScreenName:(id)arg0 ;
-(id)initWithName:(id)arg0 ;
-(id)myScreenNames;
-(id)normalizedFormOfID:(id)arg0 ;
-(id)subtypeInformationForAccount:(id)arg0 ;
-(void)_blockUntilInitialSyncPerformed;
-(void)_calculateBestAccount;
-(void)_loadPropertiesIfNeeded;
-(void)_syncWithRemoteBuddies;
-(void)activeAccountsChanged:(id)arg0 ;
-(void)dealloc;
-(void)defaultsChanged:(id)arg0 ;
-(void)disconnect;
-(void)doneSetup;
-(void)statusChangedForAccount:(id)arg0 from:(NSUInteger)arg1 to:(NSUInteger)arg2 ;


@end


#endif