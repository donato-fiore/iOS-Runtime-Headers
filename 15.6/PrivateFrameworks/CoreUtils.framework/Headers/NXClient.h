// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NXCLIENT_H
#define NXCLIENT_H

@class NSString;
@protocol CUXPCCodable, OS_xpc_object, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NXClient : NSObject <CUXPCCodable>

 {
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    *LogCategory _ucat;
    NSObject<OS_xpc_object> *_xpcCnx;
}


@property (nonatomic) unsigned int clientID; // ivar: _clientID
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (nonatomic) unsigned char flags; // ivar: _flags
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (retain, nonatomic) NSObject<OS_xpc_object> *testListenerEndpoint; // ivar: _testListenerEndpoint


-(id)_ensureXPCStarted;
-(id)description;
-(id)descriptionWithLevel:(int)arg0 ;
-(id)init;
-(id)initWithXPCObject:(id)arg0 error:(*id)arg1 ;
-(void)_interrupted;
-(void)_invalidated;
-(void)_xpcReceivedEvent:(id)arg0 ;
-(void)_xpcReceivedMessage:(id)arg0 ;
-(void)dealloc;
-(void)diagnosticControl:(id)arg0 completion:(id)arg1 ;
-(void)diagnosticShow:(id)arg0 completion:(id)arg1 ;
-(void)encodeWithXPCObject:(id)arg0 ;
-(void)invalidate;
-(void)liveActionPerform:(id)arg0 completion:(id)arg1 ;


@end


#endif