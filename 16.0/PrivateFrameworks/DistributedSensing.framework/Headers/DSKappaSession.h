// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DSKAPPASESSION_H
#define DSKAPPASESSION_H

@protocol OS_dispatch_queue, OS_xpc_object;

#import <Foundation/Foundation.h>


@interface DSKappaSession : NSObject {
    BOOL _shouldActivate;
    id *_activateCompletionHandler;
    BOOL _shouldInvalidate;
    BOOL _invalidateFinished;
}


@property (nonatomic) unsigned char coordinationStatus; // ivar: _coordinationStatus
@property (copy, nonatomic) id *deviceChangedHandler; // ivar: _deviceChangedHandler
@property (copy, nonatomic) id *deviceFoundHandler; // ivar: _deviceFoundHandler
@property (copy, nonatomic) id *deviceLostHandler; // ivar: _deviceLostHandler
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (copy, nonatomic) id *interruptionHandler; // ivar: _interruptionHandler
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (nonatomic) unsigned char tiebreaker; // ivar: _tiebreaker
@property (retain, nonatomic) NSObject<OS_xpc_object> *xpcConnection; // ivar: _xpcConnection


-(id)_getXPCConnection;
-(id)init;
-(id)initWithXPCObject:(id)arg0 error:(*id)arg1 ;
-(void)_activate;
-(void)_activateXPC;
-(void)_activateXPCHandleReply:(id)arg0 ;
-(void)_deviceChangedMessage:(id)arg0 ;
-(void)_deviceFoundMessage:(id)arg0 ;
-(void)_deviceLostMessage:(id)arg0 ;
-(void)_handleXPCMessage:(id)arg0 ;
-(void)_interrupted;
-(void)_invalidate;
-(void)_invalidateXPC;
-(void)_invalidated;
-(void)_updateKappaCoordinationStatus:(unsigned char)arg0 ;
-(void)_xpcEventHandler:(id)arg0 ;
-(void)_xpcHandleCompletionBlockReply:(id)arg0 error:(*id)arg1 ;
-(void)activateWithCompletion:(id)arg0 ;
-(void)cancelElection;
-(void)encodeSelf:(id)arg0 ;
-(void)invalidate;
-(void)startElectionWithTimeout:(CGFloat)arg0 completion:(id)arg1 ;
-(void)updateKappaCoordinationStatus:(unsigned char)arg0 ;


@end


#endif