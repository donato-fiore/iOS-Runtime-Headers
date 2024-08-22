// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMIPACKAGECANDIDATEDETECTORCONFIGURATION_H
#define HMIPACKAGECANDIDATEDETECTORCONFIGURATION_H

@class HMFObject;


#import "HMIBoundingBoxExtractorConfiguration.h"

@interface HMIPackageCandidateDetectorConfiguration : HMFObject

@property (readonly) HMIBoundingBoxExtractorConfiguration *boundingBoxConfig; // ivar: _boundingBoxConfig
@property (readonly) float deltaEThreshold; // ivar: _deltaEThreshold
@property (readonly) float densityMapScale; // ivar: _densityMapScale
@property (readonly) float densityThresholdPreAverage; // ivar: _densityThresholdPreAverage
@property (readonly) float temporalAverageDecay; // ivar: _temporalAverageDecay
@property (readonly) float temporalDensityThreshold; // ivar: _temporalDensityThreshold


+(id)defaultConfig;
-(id)initWithDeltaEThreshold:(float)arg0 densityThresholdPreAverage:(float)arg1 temporalDensityThreshold:(float)arg2 densityMapScale:(float)arg3 temporalAverageDecay:(float)arg4 boundingBoxConfig:(id)arg5 ;


@end


#endif