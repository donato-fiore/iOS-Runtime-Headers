// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCREDUNDANCYCONTROLALGORITHMVIDEOMULTIWAY_H
#define VCREDUNDANCYCONTROLALGORITHMVIDEOMULTIWAY_H

@class NSString;
@protocol VCRedundancyControlAlgorithm;

#import <Foundation/Foundation.h>


@interface VCRedundancyControlAlgorithmVideoMultiway : NSObject <VCRedundancyControlAlgorithm>

 {
    CGFloat _packetLossPercentage;
    CGFloat _plrEnvelope;
    CGFloat _currentTime;
    CGFloat _lastPercentageChange;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat redundancyInterval; // ivar: _redundancyInterval
@property (readonly, nonatomic) unsigned int redundancyPercentage; // ivar: _redundancyPercentage
@property (readonly) Class superclass;


-(id)init;
-(void)updateRedundancyPercentage;
-(void)updateRedundancyStrategyWithNetworkStatistics:(struct ? )arg0 ;


@end


#endif