// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MSXPCSERVICE_H
#define MSXPCSERVICE_H

@class NSLock, NSXPCInterface, NSXPCConnection;

#import <Foundation/Foundation.h>


@interface MSXPCService : NSObject {
    NSLock *_lock;
    NSXPCInterface *_remoteObjectInterface;
    NSXPCConnection *_connection;
}


@property (nonatomic) BOOL shouldLaunchMobileMail; // ivar: _shouldLaunchMobileMail


+(id)remoteProxyForXPCInterface:(id)arg0 connectionErrorHandler:(id)arg1 ;
+(id)remoteProxyForXPCInterface:(id)arg0 shouldLaunchMobileMail:(BOOL)arg1 connectionErrorHandler:(id)arg2 ;
-(id)connection;
-(id)init;
-(id)initWithRemoteObjectInterface:(id)arg0 ;
-(id)newConnectionForInterface:(id)arg0 ;
-(id)remoteObjectProxy;
-(id)remoteObjectProxyWithErrorHandler:(id)arg0 ;
-(void)dealloc;


@end


#endif