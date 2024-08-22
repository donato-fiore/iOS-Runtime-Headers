// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CBPACKETLOGGERCLIENT_H
#define CBPACKETLOGGERCLIENT_H

@protocol CBActivatable, CBErrorReporting, CBInterruptable, OS_xpc_object, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CBPacketLoggerClient : NSObject <CBActivatable, CBErrorReporting, CBInterruptable>

 {
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSObject<OS_xpc_object> *_xpcCnx;
}


@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (copy, nonatomic) id *errorHandler; // ivar: _errorHandler
@property (copy, nonatomic) id *interruptionHandler; // ivar: _interruptionHandler
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (copy, nonatomic) id *rawPacketHandler; // ivar: _rawPacketHandler


-(id)_ensureXPCStarted;
-(id)init;
-(void)_activateWithCompletion:(id)arg0 ;
-(void)_activateXPC:(BOOL)arg0 completion:(id)arg1 ;
-(void)_interrupted;
-(void)_invalidated;
-(void)_xpcReceivedEvent:(id)arg0 ;
-(void)_xpcReceivedPacket:(id)arg0 ;
-(void)activateWithCompletion:(id)arg0 ;
-(void)invalidate;


@end


#endif