// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PASXPCSERVERHELPER_H
#define _PASXPCSERVERHELPER_H


#import <Foundation/Foundation.h>


@interface _PASXPCServerHelper : NSObject



+(BOOL)checkForAndLogTrueBooleanEntitlement:(id)arg0 connection:(id)arg1 serviceName:(id)arg2 logHandle:(id)arg3 ;
+(BOOL)checkForAndLogTrueBooleanEntitlement:(id)arg0 connection:(id)arg1 serviceName:(id)arg2 logHandle:(id)arg3 shouldGenerateCrashReport:(BOOL)arg4 ;
+(BOOL)hasTrueBooleanEntitlement:(id)arg0 connection:(id)arg1 logHandle:(id)arg2 ;
// +(BOOL)shouldAcceptConnection:(id)arg0 serviceName:(id)arg1 whitelistedServerInterface:(id)arg2 whitelistedClientInterface:(id)arg3 requestHandler:(id)arg4 validateConnection:(id)arg5 setupClientProxy:(unk)arg6 interruptionHandler:(id)arg7 invalidationHandler:(unk)arg8 logHandle:(id)arg9  ;


@end


#endif