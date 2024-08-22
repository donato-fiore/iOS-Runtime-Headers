// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CXCALLCONTROLLERHOST_H
#define CXCALLCONTROLLERHOST_H

@class NSMutableDictionary, NSMutableSet, NSString, NSXPCListener;
@protocol NSXPCListenerDelegate, CXCallControllerHostConnectionDelegate, CXCallControllerHostDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CXCallControllerHost : NSObject <NSXPCListenerDelegate, CXCallControllerHostConnectionDelegate>



@property (retain, nonatomic) NSMutableDictionary *callUUIDToCallMap; // ivar: _callUUIDToCallMap
@property (retain, nonatomic) NSMutableDictionary *callUUIDToPublicCallUUIDMap; // ivar: _callUUIDToPublicCallUUIDMap
@property (readonly, nonatomic) int clientsShouldConnectToken; // ivar: _clientsShouldConnectToken
@property (retain, nonatomic) NSMutableSet *connections; // ivar: _connections
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CXCallControllerHostDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // ivar: _delegateQueue
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;
@property (retain, nonatomic) NSXPCListener *xpcListener; // ivar: _xpcListener


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)_callsForCallControllerHostConnection:(id)arg0 ;
-(id)_sanitizedCallFromCall:(id)arg0 forCallControllerHostConnection:(id)arg1 ;
-(id)init;
-(id)initWithCalls:(id)arg0 delegate:(id)arg1 queue:(id)arg2 ;
-(void)_performDelegateCallback:(id)arg0 ;
-(void)addOrUpdateCall:(id)arg0 ;
-(void)callControllerHostConnection:(id)arg0 requestCalls:(id)arg1 ;
-(void)callControllerHostConnection:(id)arg0 requestTransaction:(id)arg1 completion:(id)arg2 ;
-(void)callControllerHostConnectionInvalidated:(id)arg0 ;
-(void)dealloc;
-(void)removeCall:(id)arg0 ;


@end


#endif