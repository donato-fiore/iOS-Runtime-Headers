// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CBADVERTISER_H
#define CBADVERTISER_H

@class NSString, NSData;
@protocol CBXPCReceivable, CUXPCCodable, CBActivatable, CBErrorReporting, CBInterruptable, CBLabelable, CBStateReporting, CBRemotable, OS_xpc_object, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CBDevice.h"

@interface CBAdvertiser : NSObject <CBXPCReceivable, CUXPCCodable, CBActivatable, CBErrorReporting, CBInterruptable, CBLabelable, CBStateReporting, CBRemotable>

 {
    BOOL _activateCalled;
    id *_activateCompletion;
    BOOL _changesPending;
    BOOL _direct;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    *LogCategory _ucat;
    NSObject<OS_xpc_object> *_xpcCnx;
}


@property (nonatomic) int advertiseRate; // ivar: _advertiseRate
@property (readonly, nonatomic) NSInteger bluetoothState; // ivar: _bluetoothState
@property (copy, nonatomic) id *bluetoothStateChangedHandler; // ivar: _bluetoothStateChangedHandler
@property (nonatomic) unsigned int clientID; // ivar: _clientID
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (copy, nonatomic) id *errorHandler; // ivar: _errorHandler
@property (nonatomic) unsigned int internalFlags; // ivar: _internalFlags
@property (copy, nonatomic) id *interruptionHandler; // ivar: _interruptionHandler
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (nonatomic) unsigned int nearbyActionFlags; // ivar: _nearbyActionFlags
@property (nonatomic) unsigned char nearbyActionType; // ivar: _nearbyActionType
@property (nonatomic) unsigned int nearbyActionV2Flags; // ivar: _nearbyActionV2Flags
@property (copy, nonatomic) NSData *nearbyActionV2TargetData; // ivar: _nearbyActionV2TargetData
@property (nonatomic) unsigned char nearbyActionV2Type; // ivar: _nearbyActionV2Type
@property (retain, nonatomic) CBDevice *remoteDevice; // ivar: _remoteDevice
@property (retain, nonatomic) NSObject<OS_xpc_object> *xpcListenerEndpoint; // ivar: _xpcListenerEndpoint


-(BOOL)updateWithCBAdvertiser:(id)arg0 ;
-(id)_ensureXPCStarted;
-(id)description;
-(id)descriptionWithLevel:(int)arg0 ;
-(id)init;
-(id)initWithXPCObject:(id)arg0 error:(*id)arg1 ;
-(void)_activate;
-(void)_activateDirectStart;
-(void)_activateXPCCompleted:(id)arg0 ;
-(void)_activateXPCStart:(BOOL)arg0 ;
-(void)_interrupted;
-(void)_invalidateDirect;
-(void)_invalidated;
-(void)_update;
-(void)_updateIfNeededWithBlock:(id)arg0 ;
-(void)_xpcReceivedMessage:(id)arg0 ;
-(void)_xpcReceivedPowerStateChanged:(id)arg0 ;
-(void)activateWithCompletion:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithXPCObject:(id)arg0 ;
-(void)invalidate;
-(void)xpcReceivedMessage:(id)arg0 ;


@end


#endif