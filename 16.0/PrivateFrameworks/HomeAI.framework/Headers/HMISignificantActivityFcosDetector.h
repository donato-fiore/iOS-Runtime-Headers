// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMISIGNIFICANTACTIVITYFCOSDETECTOR_H
#define HMISIGNIFICANTACTIVITYFCOSDETECTOR_H

@class HMFObject, NSString, NSArray;
@protocol HMFLogging;


#import "HMINMSConfiguration.h"

@interface HMISignificantActivityFcosDetector : HMFObject <HMFLogging>

 {
    float _confidenceThresholds;
    CGSize _anchorStrides;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) CGSize inputDimensions; // ivar: _inputDimensions
@property (readonly) NSString *inputFeatureValueName; // ivar: _inputFeatureValueName
@property (readonly) HMINMSConfiguration *nmsConfiguration; // ivar: _nmsConfiguration
@property (readonly) NSArray *offsetsOneFeatureValueNames; // ivar: _offsetsOneFeatureValueNames
@property (readonly) NSArray *offsetsZeroFeatureValueNames; // ivar: _offsetsZeroFeatureValueNames
@property (readonly) NSArray *rollsFeatureValueNames; // ivar: _rollsFeatureValueNames
@property (readonly) NSArray *scoresFeatureValueNames; // ivar: _scoresFeatureValueNames
@property (readonly) Class superclass;
@property (readonly) NSArray *yawsFeatureValueNames; // ivar: _yawsFeatureValueNames


+(id)defaultAssetPath;
+(id)defaultNMSConfiguration;
+(id)logCategory;
+(id)sharedModel;
-(BOOL)_runNeuralNetworkOnPixelBuffer:(struct __CVBuffer *)arg0 offsetsZero:(id)arg1 offsetsOne:(id)arg2 scores:(id)arg3 yaws:(id)arg4 rolls:(id)arg5 error:(*id)arg6 ;
-(BOOL)predict:(struct __CVBuffer *)arg0 detectedObjects:(id)arg1 error:(*id)arg2 ;
-(id)initWithConfidenceThresholds:(id)arg0 nmsConfiguration:(id)arg1 assetPath:(id)arg2 error:(*id)arg3 ;
-(void)_postProcessOffsetsZero:(id)arg0 offsetsOne:(id)arg1 scores:(id)arg2 yaws:(id)arg3 rolls:(id)arg4 outputPredictions:(id)arg5 ;


@end


#endif