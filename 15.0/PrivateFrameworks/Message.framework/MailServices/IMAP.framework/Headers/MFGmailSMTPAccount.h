// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MFGMAILSMTPACCOUNT_H
#define MFGMAILSMTPACCOUNT_H

@class SMTPAccount, NSString;
@protocol MFOAuth2TokenAuthProtocol, MFClientTokenAuthProtocol;


#import "GmailAccount.h"

@interface MFGmailSMTPAccount : SMTPAccount <MFOAuth2TokenAuthProtocol, MFClientTokenAuthProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic, getter=mailAccountIfAvailable) GmailAccount *mailAccount; // ivar: _account
@property (readonly) Class superclass;


+(id)accountTypeIdentifier;
-(BOOL)shouldFetchACEDBInfoForError:(id)arg0 ;
-(BOOL)shouldUseAuthentication;
-(BOOL)usesSSL;
-(id)_urlFromResponse:(id)arg0 ;
-(id)accountForRenewingCredentials;
-(id)clientToken;
-(id)displayHostname;
-(id)errorForResponse:(id)arg0 ;
-(id)hostname;
-(id)oauth2Token;
-(id)password;
-(id)preferredAuthScheme;
-(id)username;
-(unsigned int)portNumber;


@end


#endif