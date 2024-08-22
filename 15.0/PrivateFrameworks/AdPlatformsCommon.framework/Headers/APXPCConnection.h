// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef APXPCCONNECTION_H
#define APXPCCONNECTION_H

@class NSString, NSXPCConnection;

#import <Foundation/Foundation.h>


@interface APXPCConnection : NSObject

@property (retain, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (readonly) int processIdentifier;


-(BOOL)hasEntitlement:(id)arg0 ;
-(id)initWithConnection:(id)arg0 ;
-(id)remoteObjectProxy;
-(struct ? )auditToken;
-(void)invalidate;


@end


#endif