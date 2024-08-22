// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCEMULATEDNETWORKALGORITHMQUEUEBANDWIDTH_H
#define VCEMULATEDNETWORKALGORITHMQUEUEBANDWIDTH_H

@class NSDictionary, NSString;
@protocol VCEmulatedNetworkAlgorithm;

#import <Foundation/Foundation.h>


@interface VCEmulatedNetworkAlgorithmQueueBandwidth : NSObject <VCEmulatedNetworkAlgorithm>

 {
    NSDictionary *_policies;
    unsigned int _networkQueueServiceRate;
    unsigned int _networkQueueServiceRateMean;
    unsigned int _networkQueueServiceRateStdDev;
    int _currentIndexForServiceRate;
    int _currentIndexForServiceRateDistribution;
    CGFloat _lastNetworkQueueServiceRateLoadTime;
    CGFloat _lastNetworkQueueServiceRateDistributionLoadTime;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat expectedProcessEndTime; // ivar: _expectedProcessEndTime
@property (readonly) NSUInteger hash;
@property unsigned int packetCountInNetworkQueue; // ivar: _packetCountInNetworkQueue
@property (readonly) Class superclass;


-(CGFloat)computeNetworkServiceRate;
-(id)init;
-(void)process:(id)arg0 ;
-(void)updateSettingsAtTime:(CGFloat)arg0 impairments:(id)arg1 ;


@end


#endif