// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MFLOGINAUTHENTICATOR_H
#define _MFLOGINAUTHENTICATOR_H

@class ECSASLAuthenticator;



@interface _MFLoginAuthenticator : ECSASLAuthenticator {
    BOOL _justSentPassword;
}




-(BOOL)justSentPlainTextPassword;
-(id)responseForServerData:(id)arg0 ;
-(id)saslName;


@end


#endif