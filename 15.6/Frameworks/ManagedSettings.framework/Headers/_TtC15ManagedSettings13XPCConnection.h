// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC15MANAGEDSETTINGS13XPCCONNECTION_H
#define _TTC15MANAGEDSETTINGS13XPCCONNECTION_H

@class SwiftObject;
@protocol NSXPCProxyCreating;



@interface _TtC15ManagedSettings13XPCConnection : SwiftObject <NSXPCProxyCreating>

 {
    ? nsXPCConnection;
}




-(id)remoteObjectProxy;
-(id)remoteObjectProxyWithErrorHandler:(id)arg0 ;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(id)arg0 ;


@end


#endif