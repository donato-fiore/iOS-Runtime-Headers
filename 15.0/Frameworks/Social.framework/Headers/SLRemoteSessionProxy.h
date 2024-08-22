// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SLREMOTESESSIONPROXY_H
#define SLREMOTESESSIONPROXY_H

@class NSString, NSXPCInterface, NSXPCConnection, NSMutableArray, NSLock;

#import <Foundation/Foundation.h>


@interface SLRemoteSessionProxy : NSObject {
    NSString *_serviceName;
    NSXPCInterface *_remoteInterface;
    id *_remoteProxy;
    NSXPCConnection *_connection;
    NSMutableArray *_guaranteedRemoteCalls;
    NSLock *_guaranteedRemoteCallsLock;
}


@property (copy) id *connectionResetBlock; // ivar: _connectionResetBlock
@property (retain) NSXPCInterface *exportedInterface; // ivar: _exportedInterface
@property (weak) NSObject *exportedObject; // ivar: _exportedObject


-(id)initForRemoteServiceName:(id)arg0 remoteInterface:(id)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(void)_remoteSessionConnectionWasInterrupted;
-(void)_setupConnection;
-(void)dealloc;
-(void)disconnect;
-(void)dropGuaraneteedRemoteCall:(id)arg0 ;
-(void)forwardInvocation:(id)arg0 ;
-(void)registerGuaranteedRemoteCall:(id)arg0 ;


@end


#endif