// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DSMOTIONSESSION_H
#define DSMOTIONSESSION_H

@protocol OS_xpc_object, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface DSMotionSession : NSObject {
    BOOL _shouldActivate;
    id *_activateCompletionHandler;
    BOOL _shouldInvalidate;
    BOOL _invalidateFinished;
    NSObject<OS_xpc_object> *_xpcConnection;
}


@property (copy, nonatomic) id *deviceChangedHandler; // ivar: _deviceChangedHandler
@property (copy, nonatomic) id *deviceFoundHandler; // ivar: _deviceFoundHandler
@property (copy, nonatomic) id *deviceLostHandler; // ivar: _deviceLostHandler
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (copy, nonatomic) id *interruptionHandler; // ivar: _interruptionHandler
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (nonatomic) unsigned char vehicleConfidence; // ivar: _vehicleConfidence
@property (nonatomic) unsigned char vehicleState; // ivar: _vehicleState


-(id)_getXPCConnection;
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
-(void)_printCohort;
-(void)_updateVehicleState:(unsigned char)arg0 confidence:(unsigned char)arg1 ;
-(void)_xpcEventHandler:(id)arg0 ;
-(void)_xpcHandleCompletionBlockReply:(id)arg0 error:(*id)arg1 ;
-(void)activateWithCompletion:(id)arg0 ;
-(void)encodeSelf:(id)arg0 ;
-(void)invalidate;
-(void)printCohort;
-(void)updateVehicleState:(unsigned char)arg0 confidence:(unsigned char)arg1 ;


@end


#endif