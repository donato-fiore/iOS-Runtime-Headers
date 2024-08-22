// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCREDUNDANCYCONTROLALGORITHMAUDIOLEGACY_H
#define VCREDUNDANCYCONTROLALGORITHMAUDIOLEGACY_H

@class NSString;
@protocol VCRedundancyControlAlgorithm;

#import <Foundation/Foundation.h>


@interface VCRedundancyControlAlgorithmAudioLegacy : NSObject <VCRedundancyControlAlgorithm>

 {
    unsigned int _packetLossPercentage;
    BOOL _isUplinkRecentlyCongested;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat redundancyInterval; // ivar: _redundancyInterval
@property (readonly, nonatomic) unsigned int redundancyPercentage; // ivar: _redundancyPercentage
@property (readonly) Class superclass;


-(void)computeRedundancyInfo;
-(void)updateRedundancyStrategyWithNetworkStatistics:(struct tagVCStatisticsMessage )arg0 ;


@end


#endif