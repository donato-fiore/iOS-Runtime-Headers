// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MFPLAINAUTHENTICATOR_H
#define _MFPLAINAUTHENTICATOR_H



#import "MFSASLAuthenticator.h"

@interface _MFPlainAuthenticator : MFSASLAuthenticator



-(BOOL)justSentPlainTextPassword;
-(id)responseForServerData:(id)arg0 ;
-(id)saslName;


@end


#endif