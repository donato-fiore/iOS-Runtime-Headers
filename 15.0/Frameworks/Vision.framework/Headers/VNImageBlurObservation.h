// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VNIMAGEBLUROBSERVATION_H
#define VNIMAGEBLUROBSERVATION_H



#import "VNImageScoreObservation.h"

@interface VNImageBlurObservation : VNImageScoreObservation



+(id)defaultOriginatingRequestClassNameForRequestRevision:(NSUInteger)arg0 ;
-(float)blurMeasure;


@end


#endif