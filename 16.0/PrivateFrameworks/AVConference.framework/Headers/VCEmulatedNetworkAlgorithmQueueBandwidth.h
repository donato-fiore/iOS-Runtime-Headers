// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


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
    unsigned int _networkQueueAQMRate;
    int _currentIndexForServiceRate;
    int _currentIndexForServiceRateDistribution;
    int _currentIndexForAQMRate;
    CGFloat _lastNetworkQueueServiceRateLoadTime;
    CGFloat _lastNetworkQueueServiceRateDistributionLoadTime;
    CGFloat _lastNetworkQueueAQMRateLoadTime;
    CGFloat _budgetBufferPktTime;
    CGFloat _budgetBufferPktSize;
    int _budgentBufferIndex;
    int _budgetBufferSize;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat expectedProcessEndTime; // ivar: _expectedProcessEndTime
@property (readonly) NSUInteger hash;
@property unsigned int packetCountInNetworkQueue; // ivar: _packetCountInNetworkQueue
@property (readonly) Class superclass;


-(BOOL)shouldDropPacketWithCurrentAQMBudget:(id)arg0 ;
-(CGFloat)computeNetworkServiceRate;
-(id)init;
-(int)getRemainingAQMBudgetWithPacket:(id)arg0 ;
-(void)addPacketToBudgetBuffer:(id)arg0 ;
-(void)process:(id)arg0 ;
-(void)updateSettingsAtTime:(CGFloat)arg0 impairments:(id)arg1 ;


@end


#endif