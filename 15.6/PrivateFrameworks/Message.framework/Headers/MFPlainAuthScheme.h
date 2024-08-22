// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MFPLAINAUTHSCHEME_H
#define MFPLAINAUTHSCHEME_H

@class ECAuthenticationScheme;



@interface MFPlainAuthScheme : ECAuthenticationScheme



-(BOOL)canAuthenticateAccountClass:(Class)arg0 connection:(id)arg1 ;
-(Class)authenticatorClass;
-(id)authenticatorForAccount:(id)arg0 connection:(id)arg1 ;
-(id)humanReadableName;
-(id)name;


@end


#endif