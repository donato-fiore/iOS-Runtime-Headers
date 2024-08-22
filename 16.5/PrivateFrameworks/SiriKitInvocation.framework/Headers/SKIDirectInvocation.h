// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKIDIRECTINVOCATION_H
#define SKIDIRECTINVOCATION_H


#import <Foundation/Foundation.h>


@interface SKIDirectInvocation : NSObject



+(id)makeParseWithDirectInvocationPayload:(id)arg0 ;
+(id)runSiriKitExecutorCommandWithContext:(id)arg0 parse:(id)arg1 appBundleId:(id)arg2 ;
+(id)runSiriKitExecutorCommandWithContext:(id)arg0 payload:(id)arg1 ;
+(id)wrapCommandInStartLocalRequest:(id)arg0 ;


@end


#endif