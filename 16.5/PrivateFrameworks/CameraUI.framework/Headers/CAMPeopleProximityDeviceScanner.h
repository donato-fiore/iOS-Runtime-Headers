// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CAMPEOPLEPROXIMITYDEVICESCANNER_H
#define CAMPEOPLEPROXIMITYDEVICESCANNER_H

@class SFDeviceDiscovery, NSMutableDictionary, NSString;
@protocol CAMPeopleProximityScanner, CAMPeopleProximityScannerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CAMPeopleProximityDeviceScanner : NSObject <CAMPeopleProximityScanner>



@property (retain, nonatomic) SFDeviceDiscovery *_queue_deviceDiscovery; // ivar: __queue_deviceDiscovery
@property (retain, nonatomic) NSMutableDictionary *_queue_discoveredDevices; // ivar: __queue_discoveredDevices
@property (retain, nonatomic) NSMutableDictionary *_queue_discoveredIdentities; // ivar: __queue_discoveredIdentities
@property (nonatomic) unsigned int _queue_sessionID; // ivar: __queue_sessionID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<CAMPeopleProximityScannerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isScanning;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;


-(id)initWithQueue:(id)arg0 delegate:(id)arg1 ;
-(void)_queue_discoveryActivatedWithError:(id)arg0 sessionID:(unsigned int)arg1 ;
-(void)_queue_discoveryDeviceFound:(id)arg0 sessionID:(unsigned int)arg1 ;
-(void)_queue_discoveryDeviceLost:(id)arg0 sessionID:(unsigned int)arg1 ;
-(void)_queue_discoveryInterruptedWithPeopleDiscoverySessionID:(unsigned int)arg0 ;
-(void)_queue_discoveryTimeoutForSessionID:(unsigned int)arg0 ;
-(void)dealloc;
-(void)startDiscoveryWithScanRate:(NSUInteger)arg0 timeout:(CGFloat)arg1 ;
-(void)stopDiscovery;


@end


#endif