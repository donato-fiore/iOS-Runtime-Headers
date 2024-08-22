// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BWESPRESSOINFERENCEBOUNDINGBOXPROPAGATOR_H
#define BWESPRESSOINFERENCEBOUNDINGBOXPROPAGATOR_H

@class NSString, FTBipartiteMatcher;
@protocol BWInferencePropagatable;

#import <Foundation/Foundation.h>

#import "BWInferenceDataRequirement.h"
#import "FigCaptureLogSmartCameraGating.h"

@interface BWEspressoInferenceBoundingBoxPropagator : NSObject <BWInferencePropagatable>

 {
    BWInferenceDataRequirement *_boxRequirement;
    BWInferenceDataRequirement *_scoreRequirement;
    BWInferenceDataRequirement *_angularOffsetRequirement;
    BWInferenceDataRequirement *_fontSizeRequirement;
    NSString *_inferenceResultKey;
    BOOL _suppressInterior;
    float _interiorPadding;
    float _maxMatchCost;
    float _angularOffsetExponentialSmoothing;
    float _fontSizeStartReportingThreshold;
    float _fontSizeStopReportingThreshold;
    FigCaptureLogSmartCameraGating *_logger;
    FTBipartiteMatcher *_matcher;
    NSInteger _maxRegionID;
    float _trackingThreshold;
    BWSmartCameraScene _filterTemplate;
    *? _lastRegions;
    NSUInteger _lastRegionCount;
}


@property (readonly, nonatomic) BOOL allowsAsyncPropagation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)initialize;
-(id)initWithBoxRequirement:(id)arg0 scoreRequirement:(id)arg1 angularOffsetRequirement:(id)arg2 fontSizeRequirement:(id)arg3 configuration:(id)arg4 toInferenceResultKey:(id)arg5 ;
-(void)dealloc;
-(void)matchCurRegions:(struct ? *)arg0 curCount:(NSUInteger)arg1 ;
-(void)propagateInferenceResultsToInferenceDictionary:(id)arg0 usingStorage:(id)arg1 propagationSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 ;


@end


#endif