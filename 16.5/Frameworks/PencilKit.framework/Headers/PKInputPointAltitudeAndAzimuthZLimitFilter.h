// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKINPUTPOINTALTITUDEANDAZIMUTHZLIMITFILTER_H
#define PKINPUTPOINTALTITUDEANDAZIMUTHZLIMITFILTER_H



#import "PKInputPointBaseFilter.h"

@interface PKInputPointAltitudeAndAzimuthZLimitFilter : PKInputPointBaseFilter {
    CGFloat _altitudeAndAzimuthZLimit;
    CGFloat _lastKnownAzimuth;
    CGFloat _lastKnownAltitude;
}




-(void)addInputPoint:(struct ? )arg0 ;


@end


#endif