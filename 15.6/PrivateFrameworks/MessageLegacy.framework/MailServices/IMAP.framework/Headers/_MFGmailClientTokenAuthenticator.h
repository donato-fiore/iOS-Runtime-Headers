// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MFGMAILCLIENTTOKENAUTHENTICATOR_H
#define _MFGMAILCLIENTTOKENAUTHENTICATOR_H

@class MFSASLAuthenticator;



@interface _MFGmailClientTokenAuthenticator : MFSASLAuthenticator {
    BOOL _sentResponse;
}




-(BOOL)justSentPlainTextPassword;
-(BOOL)supportsInitialClientResponse;
-(id)responseForServerData:(id)arg0 ;
-(id)saslName;


@end


#endif