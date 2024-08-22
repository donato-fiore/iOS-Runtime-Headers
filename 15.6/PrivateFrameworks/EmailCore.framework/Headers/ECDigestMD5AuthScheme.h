// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ECDIGESTMD5AUTHSCHEME_H
#define ECDIGESTMD5AUTHSCHEME_H



#import "ECAuthScheme.h"

@interface ECDigestMD5AuthScheme : ECAuthScheme



+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)digestMD5AuthScheme;
-(id)humanReadableName;
-(id)name;
-(id)supportedSASLMechanisms;
-(unsigned int)applescriptScheme;
-(void)dealloc;


@end


#endif