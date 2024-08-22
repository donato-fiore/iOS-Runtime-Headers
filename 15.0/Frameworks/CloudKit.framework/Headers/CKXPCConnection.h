// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKXPCCONNECTION_H
#define CKXPCCONNECTION_H

@class NSXPCConnection;
@protocol CKXPCConnectionMuxer;

#import <Foundation/Foundation.h>


@interface CKXPCConnection : NSObject <CKXPCConnectionMuxer>

 {
    BOOL _hasValidConnection;
    NSXPCConnection *_xpcConnection;
}


@property (readonly, nonatomic) NSXPCConnection *connection;


+(id)CKXPCClientToDaemonMuxerInterface;
+(id)CKXPCDaemonToClientMuxerInterface;
+(id)sharedXPCConnection;
-(id)_init;
-(void)getContainerScopedDaemonProxyCreatorForContainerSetupInfo:(id)arg0 exportedProxy:(id)arg1 synchronous:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)getLogicalDeviceScopedClientProxyCreatorForTestDeviceReference:(id)arg0 completionHandler:(id)arg1 ;
-(void)getLogicalDeviceScopedDaemonProxyCreatorForTestDeviceReference:(id)arg0 synchronous:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)getProcessScopedClientProxyCreatorWithCompletionHandler:(id)arg0 ;
-(void)getProcessScopedDaemonProxyCreatorSynchronous:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)getTestAdminDaemonProxyCreatorSynchronous:(BOOL)arg0 completionHandler:(id)arg1 ;


@end


#endif