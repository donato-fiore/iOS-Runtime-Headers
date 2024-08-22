// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCEMULATEDNETWORKQUEUE_H
#define VCEMULATEDNETWORKQUEUE_H



#import "VCEmulatedNetworkElement.h"
#import "VCEmulatedNetworkAlgorithmQueueBandwidth.h"
#import "VCEmulatedNetworkAlgorithmQueueLoss.h"
#import "VCEmulatedNetworkAlgorithmQueueDelay.h"

@interface VCEmulatedNetworkQueue : VCEmulatedNetworkElement {
    VCEmulatedNetworkAlgorithmQueueBandwidth *_queueBandwidthAlgorithm;
    VCEmulatedNetworkAlgorithmQueueLoss *_queueLossAlgorithm;
    VCEmulatedNetworkAlgorithmQueueDelay *_queueDelayAlgorithm;
    CGFloat _lastPolicyLoadingTime;
}




-(id)initWithPolicies:(id)arg0 ;
-(int)dequeuePacket:(id)arg0 time:(CGFloat)arg1 ;
-(int)enqueuePacket:(id)arg0 ;
-(int)write:(id)arg0 ;
-(void)dealloc;
-(void)markPacketLoss:(id)arg0 ;
-(void)runUntilTime:(CGFloat)arg0 ;
-(void)updateSettingsAtTime:(CGFloat)arg0 ;


@end


#endif