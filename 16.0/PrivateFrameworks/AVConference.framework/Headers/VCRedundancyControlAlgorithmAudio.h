// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCREDUNDANCYCONTROLALGORITHMAUDIO_H
#define VCREDUNDANCYCONTROLALGORITHMAUDIO_H

@class NSString;
@protocol VCRedundancyControlAlgorithm;

#import <Foundation/Foundation.h>


@interface VCRedundancyControlAlgorithmAudio : NSObject <VCRedundancyControlAlgorithm>

 {
    CGFloat _packetLossPercentageIncreaseThresholds;
    CGFloat _packetLossPercentageDecreaseThresholds;
    BOOL _isPacketLossIncreasing;
    CGFloat _packetLossPercentage;
    CGFloat _packetLossPercentageThreshold;
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
-(unsigned int)updateRedundancyPercentageWithPLRThresholds:(*CGFloat)arg0 ;
-(void)computeRedundancyInfo;
-(void)processNWConnectionStatistics:(struct ? )arg0 ;
-(void)processRCNetworkStatistics:(struct ? )arg0 ;
-(void)updateRedundancyStrategyWithNetworkStatistics:(struct ? )arg0 ;


@end


#endif