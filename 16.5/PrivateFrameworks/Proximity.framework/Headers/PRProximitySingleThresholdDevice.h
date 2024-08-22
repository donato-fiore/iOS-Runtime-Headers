// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRPROXIMITYSINGLETHRESHOLDDEVICE_H
#define PRPROXIMITYSINGLETHRESHOLDDEVICE_H

@class NSString, NSUUID;
@protocol PRProximityDeviceProtocol, OS_os_log;

#import <Foundation/Foundation.h>


@interface PRProximitySingleThresholdDevice : NSObject <PRProximityDeviceProtocol>

 {
    NSObject<OS_os_log> *_logger;
    NSString *_model;
    deque<BtProxData, std::allocator<BtProxData>> _samples;
    NSInteger _proximity;
    unique_ptr<SingleThresholdProx::Estimator, std::default_delete<SingleThresholdProx::Estimator>> _estimator;
    NSInteger _sampleCount;
    CGFloat _mostRecentSampleTime;
}


@property (readonly) NSUUID *peer; // ivar: _peer


-(BOOL)proxReady;
-(NSInteger)deviceProximity;
-(id)init;
-(id)initWithPeer:(id)arg0 andPeerModel:(id)arg1 withError:(*id)arg2 ;
-(void)addSample:(struct BtProxData )arg0 ;


@end


#endif