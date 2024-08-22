// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MFNTLMAUTHENTICATOR_H
#define _MFNTLMAUTHENTICATOR_H



#import "MFSASLAuthenticator.h"

@interface _MFNTLMAuthenticator : MFSASLAuthenticator {
    *NtlmGenerator _ntlmGeneratorRef;
    int _ntlmError;
}




-(id)responseForServerData:(id)arg0 ;
-(void)dealloc;
-(void)setAuthenticationState:(int)arg0 ;


@end


#endif