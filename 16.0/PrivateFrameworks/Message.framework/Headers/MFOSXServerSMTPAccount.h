// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MFOSXSERVERSMTPACCOUNT_H
#define MFOSXSERVERSMTPACCOUNT_H

@class NSDictionary;


#import "SMTPAccount.h"
#import "MFOSXServerIMAPAccount.h"

@interface MFOSXServerSMTPAccount : SMTPAccount

@property (retain, nonatomic, getter=mailAccountIfAvailable) MFOSXServerIMAPAccount *mailAccount; // ivar: _mailAccount
@property (readonly, nonatomic) NSDictionary *parentAccountMailProperties;


+(id)accountTypeIdentifier;
-(BOOL)shouldUseAuthentication;
-(BOOL)usesSSL;
-(id)accountForRenewingCredentials;
-(id)hostname;
-(id)password;
-(id)preferredAuthScheme;
-(id)username;
-(unsigned int)portNumber;


@end


#endif