// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MFAOLSMTPACCOUNT_H
#define MFAOLSMTPACCOUNT_H

@class SMTPAccount, NSString;
@protocol MFOAuth2TokenAuthProtocol;


#import "AOLAccount.h"

@interface MFAOLSMTPAccount : SMTPAccount <MFOAuth2TokenAuthProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic, getter=mailAccountIfAvailable) AOLAccount *mailAccount; // ivar: _account
@property (readonly) Class superclass;


+(id)accountTypeIdentifier;
-(BOOL)shouldFetchACEDBInfoForError:(id)arg0 ;
-(BOOL)shouldUseAuthentication;
-(BOOL)usesSSL;
-(id)accountForRenewingCredentials;
-(id)displayHostname;
-(id)hostname;
-(id)oauth2Token;
-(id)password;
-(id)preferredAuthScheme;
-(id)username;
-(unsigned int)portNumber;


@end


#endif