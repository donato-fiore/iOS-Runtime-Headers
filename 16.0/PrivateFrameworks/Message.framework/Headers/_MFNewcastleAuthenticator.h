// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MFNEWCASTLEAUTHENTICATOR_H
#define _MFNEWCASTLEAUTHENTICATOR_H

@class ECSASLAuthenticator;


#import "CastleIMAPAccount.h"

@interface _MFNewcastleAuthenticator : ECSASLAuthenticator {
    BOOL _sentResponse;
}


@property (retain, nonatomic) CastleIMAPAccount *castleAccount; // ivar: _castleAccount


-(BOOL)justSentPlainTextPassword;
-(BOOL)supportsInitialClientResponse;
-(id)initWithAuthenticationScheme:(id)arg0 account:(id)arg1 connection:(id)arg2 ;
-(id)responseForServerData:(id)arg0 ;
-(id)saslName;


@end


#endif