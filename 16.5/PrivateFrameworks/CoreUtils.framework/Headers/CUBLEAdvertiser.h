// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CUBLEADVERTISER_H
#define CUBLEADVERTISER_H

@class NSDictionary, CBPeripheralManager, NSData, NSString;
@protocol CBPeripheralManagerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CURetrier.h"

@interface CUBLEAdvertiser : NSObject <CBPeripheralManagerDelegate>

 {
    BOOL _activateCalled;
    NSDictionary *_advertiseParametersCurrent;
    BOOL _changesPending;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    CBPeripheralManager *_peripheralManager;
    CURetrier *_retrier;
    BOOL _startAdvertisingCalled;
    *LogCategory _ucat;
}


@property (nonatomic) unsigned int advertiseFlags; // ivar: _advertiseFlags
@property (copy, nonatomic) NSData *appleManufacturerData; // ivar: _appleManufacturerData
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (copy, nonatomic) NSData *lgBTAddress; // ivar: _lgBTAddress
@property (copy, nonatomic) NSData *lgDeviceID; // ivar: _lgDeviceID
@property (readonly) Class superclass;


-(id)_advertiseParameters;
-(id)_advertiseParametersSummary:(id)arg0 ;
-(id)init;
-(void)_advertiseParametersAddLGWake:(id)arg0 ;
-(void)_advertiseParametersAddOSR;
-(void)_ensureStarted;
-(void)_ensureStopped;
-(void)_invalidate;
-(void)_invalidated;
-(void)activate;
-(void)dealloc;
-(void)invalidate;
-(void)peripheralManagerDidStartAdvertising:(id)arg0 error:(id)arg1 ;
-(void)peripheralManagerDidUpdateState:(id)arg0 ;


@end


#endif