// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MFNTLMAUTHSCHEME_H
#define MFNTLMAUTHSCHEME_H



#import "MFAuthScheme.h"

@interface MFNTLMAuthScheme : MFAuthScheme



-(BOOL)hasEncryption;
-(BOOL)sendsPlainTextPasswords;
-(Class)authenticatorClass;
-(id)humanReadableName;
-(id)name;


@end


#endif