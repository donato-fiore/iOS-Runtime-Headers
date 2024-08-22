// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PPXPCSERVERHELPER_H
#define PPXPCSERVERHELPER_H


#import <Foundation/Foundation.h>


@interface PPXPCServerHelper : NSObject



+(BOOL)checkForAndLogTrueBooleanEntitlement:(id)arg0 connection:(id)arg1 serviceName:(id)arg2 ;
+(BOOL)hasTrueBooleanEntitlement:(id)arg0 connection:(id)arg1 ;
// +(BOOL)shouldAcceptConnection:(id)arg0 serviceName:(id)arg1 allowedServerInterface:(id)arg2 allowedClientInterface:(id)arg3 requestHandler:(id)arg4 validateConnection:(id)arg5 setupClientProxy:(unk)arg6 interruptionHandler:(id)arg7 invalidationHandler:(unk)arg8  ;


@end


#endif