// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VNOPTICALFLOWOBSERVATION_H
#define VNOPTICALFLOWOBSERVATION_H



#import "VNPixelBufferObservation.h"
#import "LKTOpticalFlow.h"
#import "VNImageSignature.h"

@interface VNOpticalFlowObservation : VNPixelBufferObservation

@property (retain, nonatomic) LKTOpticalFlow *opticalFlow; // ivar: _opticalFlow
@property (retain, nonatomic) VNImageSignature *targetImageSignature; // ivar: _targetImageSignature


+(id)defaultOriginatingRequestClassNameForRequestRevision:(NSUInteger)arg0 ;


@end


#endif