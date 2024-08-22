// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PDXPCSERVICE_H
#define PDXPCSERVICE_H

@class NSXPCConnection, NSString;
@protocol PDXPCServiceExportedInterface;

#import <Foundation/Foundation.h>

#import "PDXPCApplicationInfo.h"

@interface PDXPCService : NSObject <PDXPCServiceExportedInterface>

 {
    os_unfair_lock_s _lock;
    NSXPCConnection *_connection;
    NSString *_className;
    BOOL _callbacksSuspended;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *remoteProcessApplicationIdentifier; // ivar: _remoteProcessApplicationIdentifier
@property (readonly, nonatomic) PDXPCApplicationInfo *remoteProcessApplicationInfo;
@property (readonly, nonatomic) NSString *remoteProcessBundleIdentifier;
@property (readonly, nonatomic) int remoteProcessIdentifier; // ivar: _remoteProcessIdentifier
@property (readonly) Class superclass;


-(id)connection;
-(id)init;
-(id)initWithConnection:(id)arg0 ;
-(id)remoteObjectProxy;
-(id)remoteObjectProxyWithErrorHandler:(id)arg0 ;
-(void)clearConnectionReference;
-(void)serviceResumed;
-(void)serviceSuspended;


@end


#endif