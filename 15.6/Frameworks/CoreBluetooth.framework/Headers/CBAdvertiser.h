// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CBADVERTISER_H
#define CBADVERTISER_H

@class NSData, NSString, NSArray;
@protocol CBXPCReceivable, CUXPCCodable, CBActivatable, CBAdvertisingAddressReporting, CBErrorReporting, CBInterruptable, CBLabelable, CBStateReporting, CBUseCaseable, OS_xpc_object, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CBAdvertiser : NSObject <CBXPCReceivable, CUXPCCodable, CBActivatable, CBAdvertisingAddressReporting, CBErrorReporting, CBInterruptable, CBLabelable, CBStateReporting, CBUseCaseable>

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
@property (copy, nonatomic) id *advertisingAddressChangedHandler; // ivar: _advertisingAddressChangedHandler
@property (copy, nonatomic) NSData *advertisingAddressDataConnectable; // ivar: _advertisingAddressDataConnectable
@property (copy, nonatomic) NSData *advertisingAddressDataNonConnectable; // ivar: _advertisingAddressDataNonConnectable
@property (nonatomic) unsigned char airplaySourceFlags; // ivar: _airplaySourceFlags
@property (nonatomic) unsigned char airplayTargetConfigSeed; // ivar: _airplayTargetConfigSeed
@property (nonatomic) unsigned char airplayTargetFlags; // ivar: _airplayTargetFlags
@property (nonatomic) unsigned int airplayTargetIPv4; // ivar: _airplayTargetIPv4
@property (nonatomic) unsigned short airplayTargetPort; // ivar: _airplayTargetPort
@property (readonly, nonatomic) NSInteger bluetoothState; // ivar: _bluetoothState
@property (copy, nonatomic) id *bluetoothStateChangedHandler; // ivar: _bluetoothStateChangedHandler
@property (nonatomic) unsigned int clientID; // ivar: _clientID
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (nonatomic) unsigned char dsActionFlags; // ivar: _dsActionFlags
@property (nonatomic) char dsActionMeasuredPower; // ivar: _dsActionMeasuredPower
@property (nonatomic) unsigned char dsActionTieBreaker; // ivar: _dsActionTieBreaker
@property (nonatomic) unsigned char dsInfoVehicleConfidence; // ivar: _dsInfoVehicleConfidence
@property (nonatomic) unsigned char dsInfoVehicleState; // ivar: _dsInfoVehicleState
@property (copy, nonatomic) id *errorHandler; // ivar: _errorHandler
@property (copy, nonatomic) NSData *fidoPayloadData; // ivar: _fidoPayloadData
@property (nonatomic) unsigned char heySiriConfidence; // ivar: _heySiriConfidence
@property (nonatomic) unsigned short heySiriDeviceClass; // ivar: _heySiriDeviceClass
@property (nonatomic) unsigned short heySiriPerceptualHash; // ivar: _heySiriPerceptualHash
@property (nonatomic) unsigned char heySiriProductType; // ivar: _heySiriProductType
@property (nonatomic) unsigned char heySiriRandom; // ivar: _heySiriRandom
@property (nonatomic) unsigned char heySiriSNR; // ivar: _heySiriSNR
@property (nonatomic) unsigned int internalFlags; // ivar: _internalFlags
@property (copy, nonatomic) id *interruptionHandler; // ivar: _interruptionHandler
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (nonatomic) unsigned int nearbyActionFlags; // ivar: _nearbyActionFlags
@property (nonatomic) unsigned char nearbyActionType; // ivar: _nearbyActionType
@property (nonatomic) unsigned int nearbyActionV2Flags; // ivar: _nearbyActionV2Flags
@property (copy, nonatomic) NSData *nearbyActionV2TargetData; // ivar: _nearbyActionV2TargetData
@property (nonatomic) unsigned char nearbyActionV2Type; // ivar: _nearbyActionV2Type
@property (nonatomic) unsigned int nearbyInfoFlags; // ivar: _nearbyInfoFlags
@property (nonatomic) CGFloat nearbyInfoStatusProgress; // ivar: _nearbyInfoStatusProgress
@property (nonatomic) unsigned char nearbyInfoStatusTime; // ivar: _nearbyInfoStatusTime
@property (nonatomic) unsigned char nearbyInfoStatusType; // ivar: _nearbyInfoStatusType
@property (nonatomic) int useCase; // ivar: _useCase
@property (copy, nonatomic) NSArray *useCaseClientIDs; // ivar: _useCaseClientIDs
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
-(void)_xpcReceivedAdvertisingAddressChanged:(id)arg0 ;
-(void)_xpcReceivedMessage:(id)arg0 ;
-(void)_xpcReceivedPowerStateChanged:(id)arg0 ;
-(void)activateWithCompletion:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithXPCObject:(id)arg0 ;
-(void)invalidate;
-(void)xpcReceivedMessage:(id)arg0 ;


@end


#endif