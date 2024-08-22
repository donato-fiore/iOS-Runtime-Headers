// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCREDUNDANCYCONTROLALGORITHMVIDEOMULTIWAY_H
#define VCREDUNDANCYCONTROLALGORITHMVIDEOMULTIWAY_H

@class NSString;
@protocol VCRedundancyControlAlgorithm;

#import <Foundation/Foundation.h>


@interface VCRedundancyControlAlgorithmVideoMultiway : NSObject <VCRedundancyControlAlgorithm>

 {
    CGFloat _packetLossPercentages;
    CGFloat _roundTripTime;
    CGFloat _packetLossThreshold;
    unsigned int _targetBitrate;
    unsigned int _packetLossWindowSize;
    unsigned int _packetLossPercentageIndex;
    int _mode;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat redundancyInterval; // ivar: _redundancyInterval
@property (readonly, nonatomic) unsigned int redundancyPercentage; // ivar: _redundancyPercentage
@property (readonly) Class superclass;


-(id)init;
-(void)updateInternalParametersWithMode:(int)arg0 ;
-(void)updateRedundancyPercentage;
-(void)updateRedundancyStrategyWithNetworkStatistics:(struct ? )arg0 ;
-(void)updateRoundTripTimeWithStatistics:(struct ? )arg0 ;


@end


#endif