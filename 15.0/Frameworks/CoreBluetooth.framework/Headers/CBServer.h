// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CBSERVER_H
#define CBSERVER_H

@class NSMutableSet, NSString;
@protocol CBPeripheralManagerDelegate, CBActivatable, CBLabelable, CBStateReporting, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CBPeripheralManager.h"

@interface CBServer : NSObject <CBPeripheralManagerDelegate, CBActivatable, CBLabelable, CBStateReporting>

 {
    BOOL _activateCalled;
    id *_activateCompletion;
    NSMutableSet *_connections;
    BOOL _invalidateCalled;
    CBPeripheralManager *_peripheralManager;
    *LogCategory _ucat;
}


@property (copy, nonatomic) id *acceptHandler; // ivar: _acceptHandler
@property (nonatomic) unsigned short bleListenPSM; // ivar: _bleListenPSM
@property (readonly, nonatomic) unsigned short bleListeningPSM; // ivar: _bleListeningPSM
@property (readonly, nonatomic) NSInteger bluetoothState; // ivar: _bluetoothState
@property (copy, nonatomic) id *bluetoothStateChangedHandler; // ivar: _bluetoothStateChangedHandler
@property (copy, nonatomic) id *configChangedHandler; // ivar: _configChangedHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (readonly) Class superclass;


-(id)init;
-(void)_activateWithCompletion:(id)arg0 ;
-(void)_handleConnectionInvalidated:(id)arg0 ;
-(void)_invalidate;
-(void)_startIfNeeded;
-(void)activateWithCompletion:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)peripheralManager:(id)arg0 didOpenL2CAPChannel:(id)arg1 error:(id)arg2 ;
-(void)peripheralManager:(id)arg0 didPublishL2CAPChannel:(unsigned short)arg1 error:(id)arg2 ;
-(void)peripheralManager:(id)arg0 didUnpublishL2CAPChannel:(unsigned short)arg1 error:(id)arg2 ;
-(void)peripheralManagerDidUpdateState:(id)arg0 ;


@end


#endif