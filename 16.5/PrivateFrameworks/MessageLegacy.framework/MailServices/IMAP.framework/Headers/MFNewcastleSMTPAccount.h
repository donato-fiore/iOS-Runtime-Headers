// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFNEWCASTLESMTPACCOUNT_H
#define MFNEWCASTLESMTPACCOUNT_H

@class SMTPAccount;


#import "CastleIMAPAccount.h"

@interface MFNewcastleSMTPAccount : SMTPAccount

@property (retain, nonatomic) CastleIMAPAccount *castleAccount; // ivar: _castleAccount


+(id)accountTypeIdentifier;
-(BOOL)shouldFetchACEDBInfoForError:(id)arg0 ;
-(BOOL)shouldUseAuthentication;
-(id)accountForRenewingCredentials;
-(id)displayHostname;
-(id)mailAccountIfAvailable;
-(void)dealloc;


@end


#endif