// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BTSERVICESCLIENT_H
#define BTSERVICESCLIENT_H

@class NSXPCConnection, NSXPCListenerEndpoint;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface BTServicesClient : NSObject {
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSXPCConnection *_xpcCnx;
}


@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (copy, nonatomic) id *interruptionHandler; // ivar: _interruptionHandler
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (retain, nonatomic) NSXPCListenerEndpoint *testListenerEndpoint; // ivar: _testListenerEndpoint


-(id)init;
-(void)_ensureXPCStarted;
-(void)_interrupted;
-(void)_invalidated;
-(void)diagnosticControl:(id)arg0 completion:(id)arg1 ;
-(void)diagnosticShow:(id)arg0 completion:(id)arg1 ;
-(void)invalidate;


@end


#endif