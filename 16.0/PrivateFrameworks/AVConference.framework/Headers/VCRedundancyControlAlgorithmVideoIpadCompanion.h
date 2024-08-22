// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCREDUNDANCYCONTROLALGORITHMVIDEOIPADCOMPANION_H
#define VCREDUNDANCYCONTROLALGORITHMVIDEOIPADCOMPANION_H

@class NSString;
@protocol VCRedundancyControlAlgorithm;

#import <Foundation/Foundation.h>


@interface VCRedundancyControlAlgorithmVideoIpadCompanion : NSObject <VCRedundancyControlAlgorithm>

 {
    unsigned int _packetLossPercentage;
    unsigned int _burstyLoss;
    unsigned int _burstyLossArraySize;
    unsigned int _burstyLossArrayIndex;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat redundancyInterval; // ivar: _redundancyInterval
@property (readonly, nonatomic) unsigned int redundancyPercentage; // ivar: _redundancyPercentage
@property (readonly) Class superclass;


-(unsigned int)computeRedundancyWithBurstyLoss;
-(unsigned int)computeRedundancyWithLossPercentage;
-(void)updateBurstyLoss:(unsigned int)arg0 ;
-(void)updateRedundancyStrategyWithNetworkStatistics:(struct ? )arg0 ;


@end


#endif