// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPROXIMITYDETECTOR_H
#define PKPROXIMITYDETECTOR_H

@class SFDeviceDiscovery, NSUUID;
@protocol OS_dispatch_source, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PKProximityDetector : NSObject {
    SFDeviceDiscovery *_nearbyInfoDiscovery;
    BOOL _advertisingDeviceNearby;
    NSObject<OS_dispatch_source> *_timer;
    NSObject<OS_dispatch_queue> *_timerQueue;
    NSObject<OS_dispatch_queue> *_discoveryQueue;
    unsigned int _powerAssertionIdentifier;
}


@property (readonly, nonatomic) NSUUID *advertisingDeviceUUID; // ivar: _advertisingDeviceUUID
@property (copy, nonatomic) id *handler; // ivar: _handler
@property (readonly, nonatomic) BOOL isDetecting; // ivar: _isDetecting


-(id)_createDeviceFoundBlockWithName:(SEL)arg0 ;
-(id)_createDeviceLostBlockWithName:(SEL)arg0 ;
-(id)_createDiscoveryActivationBlockWithName:(SEL)arg0 duration:(id)arg1 completion:(CGFloat)arg2 ;
-(id)initWithAdvertisingDeviceUUID:(id)arg0 ;
-(void)_createPowerAssertion;
-(void)_endPowerAssertion;
-(void)_queue_endDetecting;
-(void)dealloc;
-(void)endDetecting;
-(void)startDetectingWithDuration:(CGFloat)arg0 completion:(id)arg1 ;


@end


#endif