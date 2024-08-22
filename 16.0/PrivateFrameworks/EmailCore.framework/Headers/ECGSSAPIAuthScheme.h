// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ECGSSAPIAUTHSCHEME_H
#define ECGSSAPIAUTHSCHEME_H



#import "ECAuthScheme.h"

@interface ECGSSAPIAuthScheme : ECAuthScheme



+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)gssapiAuthScheme;
-(BOOL)requiresPassword;
-(id)humanReadableName;
-(id)name;
-(id)supportedSASLMechanisms;
-(unsigned int)applescriptScheme;
-(void)dealloc;


@end


#endif