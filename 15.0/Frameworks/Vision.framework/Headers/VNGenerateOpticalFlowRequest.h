// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VNGENERATEOPTICALFLOWREQUEST_H
#define VNGENERATEOPTICALFLOWREQUEST_H

@class NSArray;


#import "VNTargetedImageRequest.h"

@interface VNGenerateOpticalFlowRequest : VNTargetedImageRequest {
    NSUInteger _computationAccuracy;
}


@property (nonatomic) NSUInteger computationAccuracy;
@property (nonatomic) BOOL enableFiltering; // ivar: _enableFiltering
@property (nonatomic) float filterChromaWeight; // ivar: _filterChromaWeight
@property (nonatomic) float filterLumaWeight; // ivar: _filterLumaWeight
@property (nonatomic) float filterOcclusionWeight; // ivar: _filterOcclusionWeight
@property (nonatomic) NSUInteger filterSamplingDensity; // ivar: _filterSamplingDensity
@property (nonatomic) NSUInteger filterSize; // ivar: _filterSize
@property (nonatomic) NSUInteger generateLevel;
@property (nonatomic) NSUInteger levelCount; // ivar: _levelCount
@property (nonatomic) unsigned int outputPixelFormat; // ivar: _outputPixelFormat
@property (readonly, copy) NSArray *results;
@property (nonatomic) NSUInteger warpCount; // ivar: _warpCount


-(BOOL)_internalPerformRevision:(NSUInteger)arg0 inContext:(id)arg1 previousObservation:(id)arg2 error:(*id)arg3 ;
-(BOOL)allowsCachingOfResults;
-(BOOL)internalPerformRevision:(NSUInteger)arg0 inContext:(id)arg1 error:(*id)arg2 ;
-(BOOL)wantsSequencedRequestObservationsRecording;
-(BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg0 ;
-(id)_createGeneratorOptionsForRequestRevision:(NSUInteger)arg0 session:(id)arg1 images:(id)arg2 previousTargetImageIsCurrentRefImage:(BOOL)arg3 previousObservation:(id)arg4 ;
-(id)initWithTargetedImageBuffer:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif