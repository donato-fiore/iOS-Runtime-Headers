// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CONTINUOUSAVFLOWDETECTOR_H
#define CONTINUOUSAVFLOWDETECTOR_H



#import "AVFlowDetector.h"

@interface ContinuousAVFlowDetector : AVFlowDetector {
    NSUInteger _minUDPFlowSamplesForAudioVideoDetermination;
    CGFloat _minUDPFlowElapsedTimeForAudioVideoDetermination;
    CGFloat _minUDPFlowDuplexThroughputForAudioVideoDetermination;
    NSUInteger _minTCPFlowSamplesForAudioVideoDetermination;
    CGFloat _minTCPFlowElapsedTimeForAudioVideoDetermination;
    CGFloat _minTCPFlowDuplexThroughputForAudioVideoDetermination;
}




-(id)init;
-(int)possibleAVFlowScore:(id)arg0 result:(struct AVFlowDetectionResult *)arg1 ;
-(void)setDefaults;


@end


#endif