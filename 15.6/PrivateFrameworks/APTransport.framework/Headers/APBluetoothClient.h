// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef APBLUETOOTHCLIENT_H
#define APBLUETOOTHCLIENT_H

@class NSString, NSMutableDictionary, NSDictionary, WPAirPlaySolo;
@protocol WPAirPlaySoloDelegate, APBluetoothClientDelegate, OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface APBluetoothClient : NSObject <WPAirPlaySoloDelegate>

 {
    id<APBluetoothClientDelegate> *_delegate;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isFirstCycle; // ivar: _isFirstCycle
@property (nonatomic) BOOL isSourcePresenceAdvertising; // ivar: _isSourcePresenceAdvertising
@property (nonatomic) BOOL isStartAdvertisingPending; // ivar: _isStartAdvertisingPending
@property (nonatomic) BOOL isStopAdvertisingPending; // ivar: _isStopAdvertisingPending
@property (retain, nonatomic) NSMutableDictionary *nearbyDevices; // ivar: _nearbyDevices
@property (nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (copy, nonatomic) NSDictionary *sourcePresenceAdvertisingData; // ivar: _sourcePresenceAdvertisingData
@property (nonatomic) NSObject<OS_dispatch_source> *sourcePresenceAdvertisingTimer; // ivar: _sourcePresenceAdvertisingTimer
@property (nonatomic) NSObject<OS_dispatch_source> *sourcePresenceWaitingTimer; // ivar: _sourcePresenceWaitingTimer
@property (readonly) NSInteger state;
@property (readonly) Class superclass;
@property (retain, nonatomic) WPAirPlaySolo *wpAirPlaySolo; // ivar: _wpAirPlaySolo


-(id)delegate;
-(id)init;
-(id)initWithDelegate:(id)arg0 queue:(id)arg1 ;
-(void)airPlaySolo:(id)arg0 didLosePeer:(id)arg1 withData:(id)arg2 ;
-(void)airPlaySolo:(id)arg0 didStartTrackingPeer:(id)arg1 withData:(id)arg2 error:(id)arg3 ;
-(void)airPlaySolo:(id)arg0 didStopTrackingPeer:(id)arg1 withData:(id)arg2 ;
-(void)airPlaySolo:(id)arg0 failedToStartAdvertisingWithError:(id)arg1 ;
-(void)airPlaySolo:(id)arg0 failedToStartScanningWithError:(id)arg1 ;
-(void)airPlaySolo:(id)arg0 foundDevice:(id)arg1 withData:(id)arg2 ;
-(void)airPlaySoloAdvertisingPending:(id)arg0 ;
-(void)airPlaySoloDidUpdateState:(id)arg0 ;
-(void)airPlaySoloStartedAdvertising:(id)arg0 ;
-(void)airPlaySoloStartedScanning:(id)arg0 ;
-(void)airPlaySoloStoppedAdvertising:(id)arg0 ;
-(void)airPlaySoloStoppedScanning:(id)arg0 ;
-(void)dealloc;
-(void)setDelegate:(id)arg0 ;
-(void)startConnectionlessAdvertisingWithData:(id)arg0 ;
-(void)startConnectionlessScanningWithData:(id)arg0 ;
-(void)startSourcePresenceAdvertisingCycle;
-(void)startSourcePresenceConnectionlessAdvertising;
-(void)startSourcePresenceWaitingCycle;
-(void)startTrackingPeer:(id)arg0 withData:(id)arg1 ;
-(void)stopConnectionlessAdvertising;
-(void)stopConnectionlessScanningWithData:(id)arg0 ;
-(void)stopSourcePresenceAdvertisingCycle;
-(void)stopSourcePresenceConnectionlessAdvertising;
-(void)stopSourcePresenceWaitingCycle;
-(void)stopTrackingPeer:(id)arg0 withData:(id)arg1 ;


@end


#endif