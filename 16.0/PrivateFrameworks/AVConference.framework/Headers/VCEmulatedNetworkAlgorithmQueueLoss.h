// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCEMULATEDNETWORKALGORITHMQUEUELOSS_H
#define VCEMULATEDNETWORKALGORITHMQUEUELOSS_H

@class NSString;
@protocol VCEmulatedNetworkAlgorithm;

#import <Foundation/Foundation.h>


@interface VCEmulatedNetworkAlgorithmQueueLoss : NSObject <VCEmulatedNetworkAlgorithm>

 {
    CGFloat _networkQueueLossRate;
    unsigned int _networkQueueLossPattern;
    NSInteger _packetTypeForNetworkQueueLossPattern;
    unsigned int _networkQueueMaxSize;
    int _currentIndexForLossRate;
    int _currentIndexForLossPattern;
    int _currentLossPatternShift;
    int _currentIndexForQueueSize;
    CGFloat _lastNetworkQueueLossRateLoadTime;
    CGFloat _lastNetworkQueueLossPatternLoadTime;
    CGFloat _lastNetworkQueueSizeLoadTime;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat expectedProcessEndTime; // ivar: _expectedProcessEndTime
@property (readonly) NSUInteger hash;
@property unsigned int packetCountInNetworkQueue; // ivar: _packetCountInNetworkQueue
@property (readonly) Class superclass;


-(id)init;
-(void)process:(id)arg0 ;
-(void)updateSettingsAtTime:(CGFloat)arg0 impairments:(id)arg1 ;


@end


#endif