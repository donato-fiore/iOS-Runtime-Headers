// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AREXPOSURELIGHTESTIMATIONTECHNIQUE_H
#define AREXPOSURELIGHTESTIMATIONTECHNIQUE_H

@class NSString;
@protocol ARTechniqueBusyState, OS_dispatch_semaphore;


#import "ARTechnique.h"

@interface ARExposureLightEstimationTechnique : ARTechnique <ARTechniqueBusyState>

 {
    NSObject<OS_dispatch_semaphore> *_resultSemaphore;
    float _temperature;
    float _lightIntensity;
    ExponentialSmoother<float> _smoother;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isBusy;
@property (readonly) Class superclass;


-(NSUInteger)requiredSensorDataTypes;
-(id)init;
-(id)processData:(id)arg0 ;
-(void)requestResultDataAtTimestamp:(CGFloat)arg0 context:(id)arg1 ;


@end


#endif