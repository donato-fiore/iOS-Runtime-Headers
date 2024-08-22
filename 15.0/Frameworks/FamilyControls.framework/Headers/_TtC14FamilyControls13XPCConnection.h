// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC14FAMILYCONTROLS13XPCCONNECTION_H
#define _TTC14FAMILYCONTROLS13XPCCONNECTION_H

@class SwiftObject;
@protocol NSXPCProxyCreating;



@interface _TtC14FamilyControls13XPCConnection : SwiftObject <NSXPCProxyCreating>

 {
    ? connection;
}




-(id)remoteObjectProxy;
-(id)remoteObjectProxyWithErrorHandler:(id)arg0 ;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(id)arg0 ;


@end


#endif