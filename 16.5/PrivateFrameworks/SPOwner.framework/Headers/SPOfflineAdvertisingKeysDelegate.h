// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SPOFFLINEADVERTISINGKEYSDELEGATE_H
#define SPOFFLINEADVERTISINGKEYSDELEGATE_H

@class NSString, CBPeripheralManager, FMXPCServiceDescription, FMXPCSession;
@protocol CBPeripheralManagerPrivateDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SPBeaconManager.h"

@interface SPOfflineAdvertisingKeysDelegate : NSObject <CBPeripheralManagerPrivateDelegate>



@property (retain, nonatomic) SPBeaconManager *beaconManager; // ivar: _beaconManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL inLowPowerMode; // ivar: _inLowPowerMode
@property (retain, nonatomic) CBPeripheralManager *peripheralManager; // ivar: _peripheralManager
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) FMXPCServiceDescription *serviceDescription; // ivar: _serviceDescription
@property (retain, nonatomic) FMXPCSession *session; // ivar: _session
@property (readonly) Class superclass;


-(NSInteger)transformReason:(NSInteger)arg0 ;
-(id)initWithBeaconManager:(id)arg0 ;
-(id)proxy;
-(id)remoteInterface;
-(id)syncProxy;
-(id)userAgentProxy;
-(id)userAgentSyncProxy;
-(void)enterLowPowerMode;
-(void)peripheralManager:(id)arg0 offlineAdvPayloadRequestedWithReason:(NSInteger)arg1 ;
-(void)peripheralManagerDidUpdateState:(id)arg0 ;
-(void)processKeyResponse:(id)arg0 ;


@end


#endif