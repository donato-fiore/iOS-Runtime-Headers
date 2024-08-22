// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ARFACELIGHTESTIMATIONTECHNIQUE_H
#define ARFACELIGHTESTIMATIONTECHNIQUE_H

@protocol OS_dispatch_semaphore, OS_dispatch_queue;


#import "ARTechnique.h"
#import "ARDirectionalLightEstimate.h"

@interface ARFaceLightEstimationTechnique : ARTechnique {
    NSObject<OS_dispatch_semaphore> *_resultSemaphore;
    ARDirectionalLightEstimate *_lastLightEstimate;
    float _lightIntensity;
    float _temperature;
    ExponentialSmoother<float> _smoother;
    NSObject<OS_dispatch_queue> *_lightEstimationQueue;
    NSObject<OS_dispatch_semaphore> *_estimatingSemaphore;
    FacialLightEstimation _faceLightEstimator;
    float _shSmoothingAlpha;
}




+(float)_computeShSmoothingAlpha:(CGFloat)arg0 ;
+(struct shared_ptr<arkit::FaceTrackingData> )_transformFaceTrackingData:(id)arg0 ;
-(NSUInteger)requiredSensorDataTypes;
-(id)init;
-(id)processData:(id)arg0 ;
-(void)_processFaceDataInBackground:(id)arg0 pixelBuffer:(struct __CVBuffer *)arg1 lightIntensity:(float)arg2 timestamp:(CGFloat)arg3 ;
-(void)dealloc;
-(void)requestResultDataAtTimestamp:(CGFloat)arg0 context:(id)arg1 ;


@end


#endif