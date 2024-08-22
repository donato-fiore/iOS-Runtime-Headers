// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFBLEADVERTISER_H
#define SFBLEADVERTISER_H

@class NSData, NSDictionary, NSString, CURetrier, WPNearby, NSArray;
@protocol WPNearbyDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SFBLEAdvertiser : NSObject <WPNearbyDelegate>

 {
    BOOL _activateCalled;
    NSInteger _advertiseState;
    BOOL _invalidateCalled;
    NSData *_payloadDataCurrent;
    NSData *_payloadDataPrevious;
    NSDictionary *_payloadFields;
    NSString *_payloadIdentifier;
    NSInteger _payloadType;
    CURetrier *_startRetrier;
    WPNearby *_wpNearby;
    NSInteger _wpNearbyType;
    *LogCategory _ucat;
}


@property (nonatomic) NSInteger advertiseRate; // ivar: _advertiseRate
@property (copy, nonatomic) id *advertiseStateChangedHandler; // ivar: _advertiseStateChangedHandler
@property (copy, nonatomic) id *bluetoothStateChangedHandler; // ivar: _bluetoothStateChangedHandler
@property (copy, nonatomic) id *connectionHandler; // ivar: _connectionHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (copy, nonatomic) NSArray *lePipeDevices; // ivar: _lePipeDevices
@property (readonly) Class superclass;


-(id)_preparePayloadNearbyAction:(*int)arg0 ;
-(id)_preparePayloadNearbyInfo:(*int)arg0 ;
-(id)initWithType:(NSInteger)arg0 ;
-(int)_preparePayload:(BOOL)arg0 ;
-(void)_activateWithCompletion:(id)arg0 ;
-(void)_invalidate;
-(void)_restartIfNeeded:(BOOL)arg0 ;
-(void)activateWithCompletion:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)nearby:(id)arg0 didConnectToPeer:(id)arg1 transport:(NSInteger)arg2 error:(id)arg3 ;
-(void)nearby:(id)arg0 didDeferAdvertisingType:(NSInteger)arg1 ;
-(void)nearby:(id)arg0 didFailToStartAdvertisingOfType:(NSInteger)arg1 withError:(id)arg2 ;
-(void)nearby:(id)arg0 didStartAdvertisingType:(NSInteger)arg1 ;
-(void)nearby:(id)arg0 didStopAdvertisingType:(NSInteger)arg1 withError:(id)arg2 ;
-(void)nearbyDidUpdateState:(id)arg0 ;
-(void)setPayloadData:(id)arg0 ;
-(void)setPayloadFields:(id)arg0 ;


@end


#endif