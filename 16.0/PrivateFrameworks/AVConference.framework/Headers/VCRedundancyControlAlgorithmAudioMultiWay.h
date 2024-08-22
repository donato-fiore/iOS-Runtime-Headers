// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCREDUNDANCYCONTROLALGORITHMAUDIOMULTIWAY_H
#define VCREDUNDANCYCONTROLALGORITHMAUDIOMULTIWAY_H

@class NSString;
@protocol VCRedundancyControlAlgorithm;

#import <Foundation/Foundation.h>


@interface VCRedundancyControlAlgorithmAudioMultiWay : NSObject <VCRedundancyControlAlgorithm>

 {
    unsigned int _packetLossPercentageIncreaseThresholds;
    unsigned int _packetLossPercentageDecreaseThresholds;
    BOOL _isPacketLossIncreasing;
    CGFloat _packetLossPercentage;
    CGFloat _packetLossPercentageThreshold;
    CGFloat _plrEnvelope;
    unsigned int _burstLossPacketCount;
    BOOL _isUplinkRecentlyCongested;
    float _offChannelTimeRatio;
    BOOL _isOffChannelActivityHigh;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat redundancyInterval; // ivar: _redundancyInterval
@property (readonly, nonatomic) unsigned int redundancyPercentage; // ivar: _redundancyPercentage
@property (readonly) Class superclass;


-(id)init;
-(unsigned int)updateRedundancyPercentageWithPLRThresholds:(*unsigned int)arg0 ;
-(void)computeRedundancyInfo;
-(void)processNWConnectionStatistics:(struct ? )arg0 ;
-(void)processRCNetworkStatistics:(struct ? )arg0 ;
-(void)updateRedundancyStrategyWithNetworkStatistics:(struct ? )arg0 ;


@end


#endif