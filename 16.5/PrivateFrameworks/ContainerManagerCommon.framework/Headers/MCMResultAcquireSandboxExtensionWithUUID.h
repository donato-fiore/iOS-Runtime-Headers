// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MCMRESULTACQUIRESANDBOXEXTENSIONWITHUUID_H
#define MCMRESULTACQUIRESANDBOXEXTENSIONWITHUUID_H

@class NSString, NSURL;


#import "MCMResultBase.h"

@interface MCMResultAcquireSandboxExtensionWithUUID : MCMResultBase

@property (readonly, nonatomic) NSString *personaUniqueString; // ivar: _personaUniqueString
@property (readonly, nonatomic) char * sandboxToken; // ivar: _sandboxToken
@property (readonly, nonatomic) NSURL *url; // ivar: _url


-(BOOL)encodeResultOntoReply:(id)arg0 ;
-(id)initWithSandboxToken:(char *)arg0 personaUniqueString:(id)arg1 url:(id)arg2 ;
-(void)dealloc;


@end


#endif