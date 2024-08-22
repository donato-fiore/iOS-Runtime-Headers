// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ECAPPLETOKENAUTHSCHEME_H
#define ECAPPLETOKENAUTHSCHEME_H



#import "ECAuthScheme.h"

@interface ECAppleTokenAuthScheme : ECAuthScheme



+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)appleTokenAuthScheme;
-(BOOL)requiresPassword;
-(BOOL)requiresUsername;
-(id)humanReadableName;
-(id)name;
-(id)supportedSASLMechanisms;
-(unsigned int)applescriptScheme;
-(void)dealloc;


@end


#endif