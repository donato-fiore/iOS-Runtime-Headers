// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BWPERSONSEGMENTATIONFILTERINGNODE_H
#define BWPERSONSEGMENTATIONFILTERINGNODE_H

@class FigSemanticStyleFilteringV1;


#import "BWNode.h"

@interface BWPersonSegmentationFilteringNode : BWNode {
    int _gpuPriority;
    BOOL _frameRateUpsamplingEnabled;
    BOOL _alignsMaskWithPrimaryCaptureRect;
    unsigned int _inputOrientationRelativeToSensor;
    FigSemanticStyleFilteringV1 *_segmentationMaskFilter;
    *opaqueCMSampleBuffer _cachedFilteredMaskSampleBuffer;
    *opaqueCMFormatDescription _filteredMaskFormatDescription;
}




+(void)initialize;
-(BOOL)alignsMaskWithPrimaryCaptureRect;
-(id)initWithGPUPriority:(int)arg0 frameRateUpsamplingEnabled:(BOOL)arg1 ;
-(id)nodeSubType;
-(id)nodeType;
-(unsigned int)inputOrientationRelativeToSensor;
-(void)dealloc;
-(void)didReachEndOfDataForInput:(id)arg0 ;
-(void)didSelectFormat:(id)arg0 forInput:(id)arg1 forAttachedMediaKey:(id)arg2 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 forInput:(id)arg1 ;
-(void)setAlignsMaskWithPrimaryCaptureRect:(BOOL)arg0 ;
-(void)setInputOrientationRelativeToSensor:(unsigned int)arg0 ;


@end


#endif