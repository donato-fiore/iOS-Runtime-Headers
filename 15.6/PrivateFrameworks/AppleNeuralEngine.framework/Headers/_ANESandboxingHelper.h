// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _ANESANDBOXINGHELPER_H
#define _ANESANDBOXINGHELPER_H


#import <Foundation/Foundation.h>


@interface _ANESandboxingHelper : NSObject



+(BOOL)canAccessPathAt:(id)arg0 methodName:(id)arg1 error:(*id)arg2 ;
+(BOOL)releaseSandboxExtension:(id)arg0 handle:(NSInteger)arg1 ;
+(NSInteger)consumeSandboxExtension:(id)arg0 forModel:(id)arg1 error:(*id)arg2 ;
+(id)issueSandboxExtensionForModel:(id)arg0 error:(*id)arg1 ;
+(id)sandboxExtensionPathForModelURL:(id)arg0 ;
+(void)initialize;


@end


#endif