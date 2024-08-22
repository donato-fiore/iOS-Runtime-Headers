// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RMMODELACCOUNTEXCHANGEDECLARATION_H
#define RMMODELACCOUNTEXCHANGEDECLARATION_H

@class NSString, NSNumber, NSArray;
@protocol RMModelRegisteredTypeProtocol;


#import "RMModelConfigurationBase.h"
#import "RMModelAccountExchangeDeclaration_OAuth.h"

@interface RMModelAccountExchangeDeclaration : RMModelConfigurationBase <RMModelRegisteredTypeProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *payloadAuthenticationCredentialsAssetReference; // ivar: _payloadAuthenticationCredentialsAssetReference
@property (copy, nonatomic) NSNumber *payloadCalendarServiceActive; // ivar: _payloadCalendarServiceActive
@property (copy, nonatomic) NSNumber *payloadContactsServiceActive; // ivar: _payloadContactsServiceActive
@property (copy, nonatomic) NSArray *payloadEnabledProtocolTypes; // ivar: _payloadEnabledProtocolTypes
@property (copy, nonatomic) NSString *payloadExternalHostName; // ivar: _payloadExternalHostName
@property (copy, nonatomic) NSString *payloadExternalPath; // ivar: _payloadExternalPath
@property (copy, nonatomic) NSNumber *payloadExternalPort; // ivar: _payloadExternalPort
@property (copy, nonatomic) NSString *payloadHostName; // ivar: _payloadHostName
@property (copy, nonatomic) NSNumber *payloadLockCalendarService; // ivar: _payloadLockCalendarService
@property (copy, nonatomic) NSNumber *payloadLockContactsService; // ivar: _payloadLockContactsService
@property (copy, nonatomic) NSNumber *payloadLockMailService; // ivar: _payloadLockMailService
@property (copy, nonatomic) NSNumber *payloadLockNotesService; // ivar: _payloadLockNotesService
@property (copy, nonatomic) NSNumber *payloadLockRemindersService; // ivar: _payloadLockRemindersService
@property (copy, nonatomic) NSNumber *payloadMailServiceActive; // ivar: _payloadMailServiceActive
@property (copy, nonatomic) NSNumber *payloadNotesServiceActive; // ivar: _payloadNotesServiceActive
@property (copy, nonatomic) RMModelAccountExchangeDeclaration_OAuth *payloadOAuth; // ivar: _payloadOAuth
@property (copy, nonatomic) NSString *payloadPath; // ivar: _payloadPath
@property (copy, nonatomic) NSNumber *payloadPort; // ivar: _payloadPort
@property (copy, nonatomic) NSNumber *payloadRemindersServiceActive; // ivar: _payloadRemindersServiceActive
@property (copy, nonatomic) NSString *payloadUserIdentityAssetReference; // ivar: _payloadUserIdentityAssetReference
@property (copy, nonatomic) NSString *payloadVisibleName; // ivar: _payloadVisibleName
@property (readonly) Class superclass;


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithIdentifier:(id)arg0 enabledProtocolTypes:(id)arg1 ;
+(id)buildWithIdentifier:(id)arg0 visibleName:(id)arg1 enabledProtocolTypes:(id)arg2 userIdentityAssetReference:(id)arg3 hostName:(id)arg4 port:(id)arg5 path:(id)arg6 externalHostName:(id)arg7 externalPort:(id)arg8 externalPath:(id)arg9 oAuth:(id)arg10 authenticationCredentialsAssetReference:(id)arg11 mailServiceActive:(id)arg12 lockMailService:(id)arg13 contactsServiceActive:(id)arg14 lockContactsService:(id)arg15 calendarServiceActive:(id)arg16 lockCalendarService:(id)arg17 remindersServiceActive:(id)arg18 lockRemindersService:(id)arg19 notesServiceActive:(id)arg20 lockNotesService:(id)arg21 ;
+(id)registeredClassName;
+(id)registeredIdentifier;
-(BOOL)loadPayloadFromDictionary:(id)arg0 serializationType:(short)arg1 error:(*id)arg2 ;
-(id)assetReferences;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayloadWithType:(short)arg0 ;


@end


#endif