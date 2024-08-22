// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKINPUTPOINTALTITUDEANDAZIMUTHBUCKETINGFILTER_H
#define PKINPUTPOINTALTITUDEANDAZIMUTHBUCKETINGFILTER_H



#import "PKInputPointBaseFilter.h"

@interface PKInputPointAltitudeAndAzimuthBucketingFilter : PKInputPointBaseFilter {
    NSInteger _numAzimuthBuckets;
    NSInteger _numAltitudeBuckets;
}




-(void)addInputPoint:(struct ? )arg0 ;


@end


#endif