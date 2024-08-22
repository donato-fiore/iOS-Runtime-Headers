// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CUMESSAGESESSION_H
#define CUMESSAGESESSION_H

@class NSMutableDictionary, NSXPCConnection, NSString, NSXPCListenerEndpoint;
@protocol CUMessageSessionXPCClientInterface, NSSecureCoding, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CUMessageSession : NSObject <CUMessageSessionXPCClientInterface, NSSecureCoding>

 {
    *LogCategory _ucat;
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSMutableDictionary *_requestMap;
    NSXPCConnection *_xpcCnx;
}


@property (copy, nonatomic) id *activateHandler; // ivar: _activateHandler
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (copy, nonatomic) id *invalidateHandler; // ivar: _invalidateHandler
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (retain, nonatomic) NSXPCListenerEndpoint *listenerEndpoint; // ivar: _listenerEndpoint
@property (copy, nonatomic) id *registerRequestHandler; // ivar: _registerRequestHandler
@property (copy, nonatomic) id *sendRequestHandler; // ivar: _sendRequestHandler


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTemplate:(id)arg0 ;
-(void)_cleanup;
-(void)_ensureXPCStarted;
-(void)_interrupted;
-(void)_invalidated;
-(void)_registerRequestID:(id)arg0 options:(id)arg1 handler:(id)arg2 ;
-(void)_sendRequestID:(id)arg0 options:(id)arg1 request:(id)arg2 responseHandler:(id)arg3 ;
-(void)activate;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)invalidate;
-(void)registerRequestID:(id)arg0 options:(id)arg1 handler:(id)arg2 ;
-(void)remoteRequestID:(id)arg0 options:(id)arg1 request:(id)arg2 responseHandler:(id)arg3 ;
-(void)sendRequestID:(id)arg0 options:(id)arg1 request:(id)arg2 responseHandler:(id)arg3 ;


@end


#endif