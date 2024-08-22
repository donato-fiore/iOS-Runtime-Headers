// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFPROXCARDSESSIONSERVER_H
#define SFPROXCARDSESSIONSERVER_H

@class NSXPCConnection, NSString, NSXPCListenerEndpoint;
@protocol SFProxCardXPCServerInterface, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SFProxCardSessionServer : NSObject {
    BOOL _dismissCalled;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    *LogCategory _ucat;
    NSXPCConnection *_xpcCnx;
}


@property (retain, nonatomic) NSObject<SFProxCardXPCServerInterface> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (copy, nonatomic) id *errorHandler; // ivar: _errorHandler
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (retain, nonatomic) NSXPCListenerEndpoint *xpcEndpoint; // ivar: _xpcEndpoint


-(id)init;
-(void)_activateWithCompletion:(id)arg0 ;
-(void)_invalidate;
-(void)_invalidated;
-(void)_reportError:(id)arg0 ;
-(void)activateWithCompletion:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)performAction:(int)arg0 completion:(id)arg1 ;


@end


#endif