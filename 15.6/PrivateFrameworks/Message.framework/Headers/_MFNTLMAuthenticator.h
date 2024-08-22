// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MFNTLMAUTHENTICATOR_H
#define _MFNTLMAUTHENTICATOR_H

@class ECSASLAuthenticator;



@interface _MFNTLMAuthenticator : ECSASLAuthenticator {
    *NtlmGenerator _ntlmGeneratorRef;
    int _ntlmError;
}




-(id)responseForServerData:(id)arg0 ;
-(void)dealloc;
-(void)setAuthenticationState:(NSInteger)arg0 ;


@end


#endif