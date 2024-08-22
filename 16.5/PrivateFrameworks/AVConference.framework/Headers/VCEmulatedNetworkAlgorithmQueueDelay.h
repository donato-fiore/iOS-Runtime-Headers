// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCEMULATEDNETWORKALGORITHMQUEUEDELAY_H
#define VCEMULATEDNETWORKALGORITHMQUEUEDELAY_H

@class NSDictionary, NSString;
@protocol VCEmulatedNetworkAlgorithm;

#import <Foundation/Foundation.h>


@interface VCEmulatedNetworkAlgorithmQueueDelay : NSObject <VCEmulatedNetworkAlgorithm>

 {
    NSDictionary *_policies;
    unsigned int _networkQueueDelay;
    unsigned int _networkQueueDelayMean;
    unsigned int _networkQueueDelayStdDev;
    int _currentIndexForDelay;
    int _currentIndexForDelayDistribution;
    CGFloat _lastNetworkQueueDelayLoadTime;
    CGFloat _lastNetworkQueueDelayDistributionLoadTime;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat expectedProcessEndTime; // ivar: _expectedProcessEndTime
@property (readonly) NSUInteger hash;
@property unsigned int packetCountInNetworkQueue; // ivar: _packetCountInNetworkQueue
@property (readonly) Class superclass;


-(CGFloat)computeNetworkDelay;
-(id)init;
-(void)process:(id)arg0 ;
-(void)updateSettingsAtTime:(CGFloat)arg0 impairments:(id)arg1 ;


@end


#endif