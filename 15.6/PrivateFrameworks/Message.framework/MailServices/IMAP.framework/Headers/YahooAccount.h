// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef YAHOOACCOUNT_H
#define YAHOOACCOUNT_H

@class NSString;
@protocol MFOAuth2TokenAuthProtocol;


#import "IMAPAccount.h"

@interface YahooAccount : IMAPAccount <MFOAuth2TokenAuthProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)deliveryAccountUsesSSL;
+(BOOL)getConfigurationFromServerForEmail:(id)arg0 ;
+(BOOL)isPredefinedAccountType;
+(BOOL)isSSLEditable;
+(BOOL)primaryDeliveryAccountIsDynamic;
+(BOOL)usernameIsEmailAddress;
+(BOOL)usesSSL;
+(id)accountTypeIdentifier;
+(id)authSchemesForAccountClass;
+(id)deliveryAccountHostname;
+(id)displayedAccountTypeString;
+(id)emailAddressHostPart;
+(id)emailAddressWithUsername:(id)arg0 ;
+(id)hostname;
+(unsigned int)deliveryAccountPortNumber;
-(BOOL)derivesDeliveryAccountInfoFromMailAccount;
-(BOOL)shouldDisplayHostnameInErrorMessages;
-(BOOL)shouldFetchACEDBInfoForError:(id)arg0 ;
-(BOOL)supportsFastRemoteBodySearch;
-(NSUInteger)credentialAccessibility;
-(id)URLForMessage:(id)arg0 ;
-(id)_defaultSpecialMailboxNameForType:(int)arg0 ;
-(id)_deliveryAccountCreateIfNeeded:(BOOL)arg0 ;
-(id)displayUsername;
-(id)emailAddressStrings;
-(id)hostname;
-(id)iconString;
-(id)initWithLibrary:(id)arg0 persistentAccount:(id)arg1 ;
-(id)preferredAuthScheme;
-(id)saveSentFolder;
-(id)statisticsKind;
-(id)transferDisabledMailboxUids;
-(unsigned int)portNumber;


@end


#endif