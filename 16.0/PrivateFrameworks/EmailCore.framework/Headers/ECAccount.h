// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ECACCOUNT_H
#define ECACCOUNT_H

@class NSString, ACAccountStore, EFLazyCache, ACAccountCredential, NSDictionary, NSArray, ACAccount;
@protocol EFLoggable, EFPubliclyDescribable;

#import <Foundation/Foundation.h>


@interface ECAccount : NSObject <EFLoggable, EFPubliclyDescribable>



@property (readonly, copy, nonatomic) NSString *accountDescription; // ivar: _accountDescription
@property (copy, nonatomic) NSString *accountDirectoryTildeAbbreviatedPath; // ivar: _accountDirectoryTildeAbbreviatedPath
@property (readonly, nonatomic) ACAccountStore *accountStore; // ivar: _accountStore
@property (readonly, copy, nonatomic) NSString *accountTypeIdentifier;
@property (nonatomic) BOOL allowInsecureAuthentication;
@property (copy, nonatomic) NSString *archiveMailboxName;
@property (copy, nonatomic) NSString *authenticationScheme;
@property (readonly, nonatomic) EFLazyCache *cache; // ivar: _cache
@property (nonatomic) BOOL configureDynamically;
@property (readonly, copy, nonatomic) ACAccountCredential *credential;
@property (readonly, copy, nonatomic) NSDictionary *dataclassProperties;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSInteger defaultPortNumber;
@property (readonly, nonatomic) NSInteger defaultSecurePortNumber;
@property (nonatomic) BOOL deleteMessagesInPlace;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *draftsMailboxName;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (readonly, nonatomic) BOOL hasPasswordCredential;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *hostname;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL isAppleAccount;
@property (readonly, nonatomic) BOOL isAppleEmployeeAccount;
@property (readonly, nonatomic) BOOL isAuthenticated;
@property (nonatomic) BOOL isEnabled;
@property (readonly, nonatomic) BOOL isGmailAccount;
@property (readonly, nonatomic) BOOL isPersonaAccount;
@property (readonly, nonatomic) BOOL isYahooAccount;
@property (copy, nonatomic) NSString *junkMailboxName;
@property (copy, nonatomic) NSString *notesMailboxName;
@property (nonatomic) NSInteger numberOfDaysToKeepJunk;
@property (nonatomic) NSInteger numberOfDaysToKeepTrash;
@property (readonly, copy, nonatomic) NSString *oauthToken;
@property (copy, nonatomic) NSString *outboxMailboxName;
@property (copy, nonatomic) NSString *password;
@property (readonly, nonatomic) NSString *personaIdentifier;
@property (nonatomic) NSInteger portNumber;
@property (readonly, copy, nonatomic) NSDictionary *properties; // ivar: _properties
@property (copy, nonatomic) NSString *sentMessagesMailboxName;
@property (nonatomic) BOOL sslIsDirect;
@property (readonly, nonatomic) BOOL sslIsDirectIsSet; // ivar: _sslIsDirectIsSet
@property (readonly, copy, nonatomic) NSArray *standardPorts;
@property (readonly, copy, nonatomic) NSArray *standardSSLPorts;
@property (readonly) Class superclass;
@property (retain, nonatomic) ACAccount *systemAccount; // ivar: _systemAccount
@property (copy, nonatomic) NSString *toDosMailboxName;
@property (copy, nonatomic) NSString *trashMailboxName;
@property (readonly, copy, nonatomic) NSString *username;
@property (nonatomic) BOOL usesSSL;


+(id)log;
-(BOOL)isEnabledForDataclass:(id)arg0 ;
-(id)_hostnameFromParentAccount:(id)arg0 ;
-(id)dataClassPropertyForKey:(id)arg0 ;
-(id)enabledDataclasses;
-(id)initWithSystemAccount:(id)arg0 ;
-(id)initWithSystemAccount:(id)arg0 accountStore:(id)arg1 ;
-(void)_accountStoreDidChange:(id)arg0 ;
-(void)clearSSLIsDirect;
-(void)clearUsesSSL;
-(void)refresh;
-(void)renewCredentialsWithOptions:(id)arg0 completionHandler:(id)arg1 ;
-(void)setDataClassProperty:(id)arg0 forKey:(id)arg1 ;
-(void)setOAuth2Token:(id)arg0 refreshToken:(id)arg1 ;


@end


#endif