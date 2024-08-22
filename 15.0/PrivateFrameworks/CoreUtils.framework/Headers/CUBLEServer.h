// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CUBLESERVER_H
#define CUBLESERVER_H

@class NSMutableSet, CBPeripheralManager, NSString;
@protocol CBPeripheralManagerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CUBLEServer : NSObject <CBPeripheralManagerDelegate>

 {
    id *_activateCompletion;
    NSMutableSet *_connections;
    BOOL _invalidateCalled;
    CBPeripheralManager *_peripheralManager;
    *LogCategory _ucat;
}


@property (copy, nonatomic) id *connectionEndedHandler; // ivar: _connectionEndedHandler
@property (copy, nonatomic) id *connectionStartedHandler; // ivar: _connectionStartedHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (nonatomic) unsigned short listenPSM; // ivar: _listenPSM
@property (nonatomic) unsigned short listeningPSM; // ivar: _listeningPSM
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