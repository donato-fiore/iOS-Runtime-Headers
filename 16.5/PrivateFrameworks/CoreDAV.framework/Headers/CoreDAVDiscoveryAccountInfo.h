// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef COREDAVDISCOVERYACCOUNTINFO_H
#define COREDAVDISCOVERYACCOUNTINFO_H

@class NSString, NSError, NSData, NSURL, NSSet, NSDictionary;
@protocol CoreDAVAccountInfoProvider;

#import <Foundation/Foundation.h>


@interface CoreDAVDiscoveryAccountInfo : NSObject <CoreDAVAccountInfoProvider>



@property (retain, nonatomic) NSString *accountID; // ivar: _accountID
@property (retain, nonatomic) NSObject<CoreDAVAccountInfoProvider> *backingAccountInfoProvider; // ivar: _backingAccountInfoProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *host; // ivar: _host
@property (retain, nonatomic) NSData *identityPersist; // ivar: _identityPersist
@property (retain, nonatomic) NSString *password; // ivar: _password
@property (nonatomic) NSInteger port; // ivar: _port
@property (retain, nonatomic) NSURL *principalURL; // ivar: _principalURL
@property (retain, nonatomic) NSString *scheme; // ivar: _scheme
@property (retain, nonatomic) NSSet *serverComplianceClasses; // ivar: _serverComplianceClasses
@property (retain, nonatomic) NSDictionary *serverHeaders; // ivar: _serverHeaders
@property (retain, nonatomic) NSString *serverRoot; // ivar: _serverRoot
@property (nonatomic) BOOL shouldFailAllTasks; // ivar: _shouldFailAllTasks
@property (nonatomic) BOOL started; // ivar: _started
@property (nonatomic) BOOL success; // ivar: _success
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *user; // ivar: _user
@property (retain, nonatomic) NSString *userAgentHeader; // ivar: _userAgentHeader


-(BOOL)handleAuthenticateAgainstProtectionSpace:(id)arg0 ;
-(BOOL)handleCertificateError:(id)arg0 ;
-(BOOL)handleShouldUseCredentialStorage;
-(BOOL)handleTrustChallenge:(id)arg0 completionHandler:(id)arg1 ;
-(BOOL)renewCredential;
-(BOOL)shouldHandleHTTPCookiesForURL:(id)arg0 ;
-(BOOL)shouldRetryUnauthorizedTask:(id)arg0 ;
-(BOOL)shouldSendClientInfoHeaderForURL:(id)arg0 ;
-(BOOL)shouldTryRenewingCredential;
-(BOOL)shouldTurnModalOnBadPassword;
-(id)additionalHeaderValues;
-(id)clientCertificateInfoProvider;
-(id)clientToken;
-(id)customConnectionProperties;
-(id)getAppleIDSession;
-(id)initWithAccountInfoProvider:(id)arg0 ;
-(id)oauthInfoProvider;
-(id)url;
-(struct __CFURLStorageSession *)copyStorageSession;
-(void)clientTokenRequestedByServer;
-(void)promptUserForNewCoreDAVPasswordWithCompletionBlock:(id)arg0 ;


@end


#endif