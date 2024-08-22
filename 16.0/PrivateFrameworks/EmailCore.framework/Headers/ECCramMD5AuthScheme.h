// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ECCRAMMD5AUTHSCHEME_H
#define ECCRAMMD5AUTHSCHEME_H



#import "ECAuthScheme.h"

@interface ECCramMD5AuthScheme : ECAuthScheme



+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)cramMD5AuthScheme;
-(id)humanReadableName;
-(id)name;
-(id)supportedSASLMechanisms;
-(unsigned int)applescriptScheme;
-(void)dealloc;


@end


#endif