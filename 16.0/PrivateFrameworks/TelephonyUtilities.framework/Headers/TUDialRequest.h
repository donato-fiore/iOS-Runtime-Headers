// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TUDIALREQUEST_H
#define TUDIALREQUEST_H

@class NSURL, NSString, CNGeminiManager, NSDate, IDSDestination, NSUUID, BSProcessHandle, NSUserActivity, NSArray;
@protocol TUCallRequest, TUVideoRequest, TUFilteredRequest, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "TUHandle.h"
#import "TUSenderIdentity.h"
#import "TUCallProvider.h"
#import "TUCallProviderManager.h"
#import "TUSenderIdentityClient.h"

@interface TUDialRequest : NSObject <TUCallRequest, TUVideoRequest, TUFilteredRequest, NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSURL *URL;
@property (copy, nonatomic) NSString *audioSourceIdentifier; // ivar: _audioSourceIdentifier
@property (retain, nonatomic) CNGeminiManager *contactGeminiManager; // ivar: _contactGeminiManager
@property (copy, nonatomic) NSString *contactIdentifier; // ivar: _contactIdentifier
@property (retain, nonatomic) NSDate *dateDialed; // ivar: _dateDialed
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *destinationID;
@property (nonatomic, getter=isDialAssisted) BOOL dialAssisted; // ivar: _dialAssisted
@property (nonatomic) NSInteger dialType; // ivar: _dialType
@property (readonly, nonatomic) IDSDestination *endpointIDSDestination;
@property (copy, nonatomic) NSString *endpointIDSDestinationURI; // ivar: _endpointIDSDestinationURI
@property (nonatomic) BOOL endpointOnCurrentDevice; // ivar: _endpointOnCurrentDevice
@property (copy, nonatomic) NSString *endpointRapportEffectiveIdentifier; // ivar: _endpointRapportEffectiveIdentifier
@property (copy, nonatomic) NSString *endpointRapportMediaSystemIdentifier; // ivar: _endpointRapportMediaSystemIdentifier
@property (copy, nonatomic) NSString *failureNotification; // ivar: _failureNotification
@property (retain, nonatomic) TUHandle *handle; // ivar: _handle
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hostOnCurrentDevice; // ivar: _hostOnCurrentDevice
@property (copy, nonatomic) id *isEmergencyNumberBlock; // ivar: _isEmergencyNumberBlock
@property (copy, nonatomic) id *isEmergencyNumberOrIsWhitelistedBlock; // ivar: _isEmergencyNumberOrIsWhitelistedBlock
@property (nonatomic) CGSize localLandscapeAspectRatio; // ivar: _localLandscapeAspectRatio
@property (nonatomic) CGSize localPortraitAspectRatio; // ivar: _localPortraitAspectRatio
@property (readonly, copy, nonatomic) TUSenderIdentity *localSenderIdentity;
@property (copy, nonatomic) NSUUID *localSenderIdentityAccountUUID; // ivar: _localSenderIdentityAccountUUID
@property (copy, nonatomic) NSUUID *localSenderIdentityUUID; // ivar: _localSenderIdentityUUID
@property (nonatomic) int originatingUIType; // ivar: _originatingUIType
@property (nonatomic) BOOL performDialAssist; // ivar: _performDialAssist
@property (nonatomic) BOOL performLocalDialAssist; // ivar: _performLocalDialAssist
@property (retain, nonatomic) BSProcessHandle *processHandle; // ivar: _processHandle
@property (retain, nonatomic) TUCallProvider *provider; // ivar: _provider
@property (copy, nonatomic) NSString *providerCustomIdentifier; // ivar: _providerCustomIdentifier
@property (readonly, nonatomic) TUCallProviderManager *providerManager; // ivar: _providerManager
@property (nonatomic, getter=isRedial) BOOL redial; // ivar: _redial
@property (readonly, nonatomic, getter=isRTTAvailable) BOOL rttAvailable;
@property (readonly, nonatomic) TUSenderIdentityClient *senderIdentityClient; // ivar: _senderIdentityClient
@property (readonly, nonatomic) int service;
@property (nonatomic) BOOL shouldSuppressInCallUI; // ivar: _shouldSuppressInCallUI
@property (nonatomic) BOOL showUIPrompt; // ivar: _showUIPrompt
@property (nonatomic, getter=isSOS, setter=setSOS:) BOOL sos; // ivar: _sos
@property (copy, nonatomic) NSString *successNotification; // ivar: _successNotification
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isTTYAvailable) BOOL ttyAvailable;
@property (nonatomic) NSInteger ttyType; // ivar: _ttyType
@property (copy, nonatomic) NSString *uniqueProxyIdentifier; // ivar: _uniqueProxyIdentifier
@property (readonly, nonatomic) BOOL useTTY;
@property (readonly, nonatomic) NSUserActivity *userActivity;
@property (readonly, nonatomic, getter=isValid) BOOL valid;
@property (readonly, copy, nonatomic) NSArray *validityErrors;
@property (nonatomic, getter=isVideo) BOOL video; // ivar: _video


+(BOOL)supportsSecureCoding;
+(NSInteger)dialRequestTTYTypeForCHRecentCallTTYType:(NSInteger)arg0 ;
+(NSInteger)dialRequestTypeForIntentDestinationType:(NSInteger)arg0 ;
+(NSInteger)handleTypeForQueryItem:(id)arg0 ;
+(NSInteger)intentTTYTypeForTTYType:(NSInteger)arg0 ;
+(NSInteger)ttyTypeForIntentTTYType:(NSInteger)arg0 ;
+(NSInteger)ttyTypeForString:(id)arg0 ;
+(id)callProviderManagerGeneratorBlock:(SEL)arg0 ;
+(id)contactStore;
+(id)legacyAddressBookIdentifierToContactIdentifierTransformBlock:(SEL)arg0 ;
+(id)providerForIntentPreferredCallProvider:(NSInteger)arg0 recentCallProviderId:(id)arg1 callCapability:(NSInteger)arg2 providerManager:(id)arg3 ;
+(id)stringForDialType:(NSInteger)arg0 ;
+(id)stringForOriginatingUIType:(int)arg0 ;
+(id)stringForTTYType:(NSInteger)arg0 ;
+(int)originatingUITypeForExecutionContext:(NSInteger)arg0 ;
+(int)originatingUITypeForString:(id)arg0 ;
+(void)setCallProviderManagerGeneratorBlock:(id)arg0 ;
+(void)setLegacyAddressBookIdentifierToContactIdentifierTransformBlock:(id)arg0 ;
-(BOOL)boolValueForQueryItemWithName:(id)arg0 inURLComponents:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToDialRequest:(id)arg0 ;
-(id)_contactFromINPerson:(id)arg0 contactsDataSource:(id)arg1 bestGuessHandle:(*id)arg2 ;
-(id)bundleIdentifier;
-(id)callProviderFromURLComponents:(id)arg0 video:(*BOOL)arg1 ;
-(id)contactIdentifierFromURLComponents:(id)arg0 ;
-(id)contactNamesByHandleWithContactsDataSource:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)destinationIDFromURL:(id)arg0 ;
-(id)dialRequestByReplacingProvider:(id)arg0 ;
-(id)handleFromURL:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDialIntent:(id)arg0 providerManager:(id)arg1 contactsDataSource:(id)arg2 senderIdentityClient:(id)arg3 ;
-(id)initWithProvider:(id)arg0 ;
-(id)initWithService:(int)arg0 ;
-(id)initWithURL:(id)arg0 ;
-(id)initWithUserActivity:(id)arg0 ;
-(id)initWithUserActivity:(id)arg0 providerManager:(id)arg1 ;
-(id)initWithUserActivity:(id)arg0 providerManager:(id)arg1 contactsDataSource:(id)arg2 senderIdentityClient:(id)arg3 ;
-(id)legacyAddressBookIdentifierQueryItemName;
-(id)userActivityUsingDeprecatedCallingIntents:(BOOL)arg0 ;
-(id)validityErrorForDestinationIDWithVoicemail;
-(id)validityErrorForEmergencyCall;
-(id)validityErrorForEndpointNotOnCurrentDeviceForNonRelayableService;
-(id)validityErrorForNonNormalDialTypeWithoutTelephony;
-(id)validityErrorForNormalDialTypeWithUnknownDestination;
-(id)validityErrorForSOS;
-(id)validityErrorForUnspecifiedProvider;
-(id)validityErrorForUnsupportedHandleType;
-(id)validityErrorForVideoUnsupported;
-(int)legacyAddressBookIdentifierFromURLComponents:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif