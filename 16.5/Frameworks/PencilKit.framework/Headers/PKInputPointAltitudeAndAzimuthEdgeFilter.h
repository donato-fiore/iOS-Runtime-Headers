// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKINPUTPOINTALTITUDEANDAZIMUTHEDGEFILTER_H
#define PKINPUTPOINTALTITUDEANDAZIMUTHEDGEFILTER_H

@protocol PKInputPointAltitudeAndAzimuthEdgeFilterDelegate;


#import "PKInputPointBaseFilter.h"

@interface PKInputPointAltitudeAndAzimuthEdgeFilter : PKInputPointBaseFilter {
    id<PKInputPointAltitudeAndAzimuthEdgeFilterDelegate> *_delegate;
    CGFloat _edgeLimit;
    CGFloat _lastKnownAzimuth;
    CGFloat _lastKnownAltitude;
}




-(void)addInputPoint:(struct ? )arg0 ;


@end


#endif