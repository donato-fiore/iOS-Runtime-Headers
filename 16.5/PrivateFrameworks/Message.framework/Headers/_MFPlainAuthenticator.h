// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MFPLAINAUTHENTICATOR_H
#define _MFPLAINAUTHENTICATOR_H

@class ECSASLAuthenticator;



@interface _MFPlainAuthenticator : ECSASLAuthenticator



-(BOOL)justSentPlainTextPassword;
-(id)responseForServerData:(id)arg0 ;
-(id)saslName;


@end


#endif