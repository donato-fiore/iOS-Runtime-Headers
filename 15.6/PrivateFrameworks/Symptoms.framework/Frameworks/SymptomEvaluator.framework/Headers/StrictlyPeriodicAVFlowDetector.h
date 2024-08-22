// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STRICTLYPERIODICAVFLOWDETECTOR_H
#define STRICTLYPERIODICAVFLOWDETECTOR_H



#import "AVFlowDetector.h"

@interface StrictlyPeriodicAVFlowDetector : AVFlowDetector {
    CGFloat _maxPeriodicAVTCPFlowBusyInterval;
    CGFloat _minPeriodicAVTCPFlowCycleTime;
    CGFloat _maxPeriodicAVTCPFlowCycleTime;
    CGFloat _maxPeriodicAVTCPFlowCycleVariance;
    NSUInteger _minPeriodicAVTCPFlowCyclesToConsider;
    NSUInteger _maxPeriodicAVTCPFlowCyclesToConsider;
    CGFloat _maxPeriodicAVUDPFlowBusyInterval;
    CGFloat _minPeriodicAVUDPFlowCycleTime;
    CGFloat _maxPeriodicAVUDPFlowCycleTime;
    CGFloat _maxPeriodicAVUDPFlowCycleVariance;
    NSUInteger _minPeriodicAVUDPFlowCyclesToConsider;
    NSUInteger _maxPeriodicAVUDPFlowCyclesToConsider;
    unsigned int _scoreBaselinePass;
    unsigned int _scorePerCycleIncrement;
    unsigned int _scoreTCIncrement;
    unsigned int _scoreMax;
}




-(id)getState:(BOOL)arg0 ;
-(id)init;
-(int)possibleAVFlowScore:(id)arg0 result:(struct AVFlowDetectionResult *)arg1 ;
-(int)setConfiguration:(id)arg0 ;
-(void)setDefaults;


@end


#endif