// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DTXPCSERVICECONTROLLER_H
#define DTXPCSERVICECONTROLLER_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface DTXPCServiceController : NSObject {
    NSMutableDictionary *_registrationDictsByPid;
    NSObject<OS_dispatch_queue> *_guard;
    NSObject<OS_dispatch_queue> *_execMonitorQueue;
}




+(id)sharedInstance;
-(id)init;
-(int)_configureInstance:(id)arg0 identifier:(id)arg1 servicePid:(int)arg2 environment:(id)arg3 arguments:(id)arg4 options:(id)arg5 ;
-(void)_matchRemove:(id)arg0 ;
-(void)_registryModify:(BOOL)arg0 identifier:(id)arg1 parent:(int)arg2 client:(id)arg3 block:(id)arg4 ;
-(void)registerClient:(id)arg0 forXPCService:(id)arg1 environment:(id)arg2 arguments:(id)arg3 options:(id)arg4 handler:(id)arg5 ;
-(void)releaseAssertionsMadeByClient:(id)arg0 ;
-(void)requestDebugLaunchOfDaemonWithSpecifier:(id)arg0 programPath:(id)arg1 environment:(id)arg2 arguments:(id)arg3 options:(id)arg4 handler:(id)arg5 ;
-(void)unregisterClient:(id)arg0 withIdentifier:(id)arg1 parent:(int)arg2 ;


@end


#endif