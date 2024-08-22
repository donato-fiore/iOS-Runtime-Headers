// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DKSANDBOXEXTENSION_H
#define DKSANDBOXEXTENSION_H


#import <Foundation/Foundation.h>


@interface DKSandboxExtension : NSObject



+(BOOL)releaseSandboxExtensionWithHandle:(id)arg0 error:(*id)arg1 ;
+(id)consumeSandboxExtensionWithToken:(id)arg0 error:(*id)arg1 ;
+(id)consumeSandboxExtensionsWithTokens:(id)arg0 ;
+(id)issueSandboxExtensionForFile:(id)arg0 toAuditToken:(struct ? )arg1 error:(*id)arg2 ;
+(id)issueSandboxExtensionsForFiles:(id)arg0 toAuditToken:(struct ? )arg1 ;
+(void)releaseSandboxExtensionsWithHandles:(id)arg0 ;


@end


#endif