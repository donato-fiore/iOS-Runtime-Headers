// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKINPUTPOINTALTITUDEANDAZIMUTHNOISEFILTER_H
#define PKINPUTPOINTALTITUDEANDAZIMUTHNOISEFILTER_H



#import "PKInputPointBaseFilter.h"

@interface PKInputPointAltitudeAndAzimuthNoiseFilter : PKInputPointBaseFilter {
    linear_congruential_engine<unsigned int, 48271U, 0U, 2147483647U> generator;
    CGFloat currentAzimuthOffsetValue;
    CGFloat currentAltitudeOffsetValue;
    BOOL _noiseIsHeightBased;
    CGFloat _altitudeJitterNoise;
    CGFloat _azimuthJitterNoise;
    CGFloat _altitudeOffsetNoise;
    CGFloat _azimuthOffsetNoise;
}




-(void)_recalculateOffsets;
-(void)addInputPoint:(struct ? )arg0 ;
-(void)resetFilter;


@end


#endif