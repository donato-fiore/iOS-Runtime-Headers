// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PREXPCSERVERHELPER_H
#define PREXPCSERVERHELPER_H


#import <Foundation/Foundation.h>


@interface PREXPCServerHelper : NSObject



+(BOOL)checkForAndLogTrueBooleanEntitlement:(id)arg0 connection:(id)arg1 serviceName:(id)arg2 ;
+(BOOL)hasTrueBooleanEntitlement:(id)arg0 connection:(id)arg1 ;
// +(BOOL)shouldAcceptConnection:(id)arg0 serviceName:(id)arg1 whitelistedServerInterface:(id)arg2 requestHandler:(id)arg3 validateConnection:(id)arg4 setupClientProxy:(unk)arg5 interruptionHandler:(id)arg6 invalidationHandler:(unk)arg7  ;


@end


#endif