// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RPCOMPANIONLINKCLIENTDAEMONCONNECTION_XPC_H
#define RPCOMPANIONLINKCLIENTDAEMONCONNECTION_XPC_H

@class NSXPCConnection, NSString;
@protocol RPDaemonConnection;

#import <Foundation/Foundation.h>


@interface RPCompanionLinkClientDaemonConnection_XPC : NSObject <RPDaemonConnection>



@property (retain, nonatomic) NSXPCConnection *cnx; // ivar: _cnx
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithConnection:(id)arg0 ;
-(id)remoteObjectProxy;
-(id)remoteObjectProxyWithErrorHandler:(id)arg0 ;
-(void)invalidate;


@end


#endif