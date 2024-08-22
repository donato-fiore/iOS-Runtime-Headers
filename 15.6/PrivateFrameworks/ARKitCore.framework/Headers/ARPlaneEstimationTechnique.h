// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ARPLANEESTIMATIONTECHNIQUE_H
#define ARPLANEESTIMATIONTECHNIQUE_H

@class NSString;
@protocol ARWorldTrackingTechniqueObserver, OS_dispatch_semaphore;


#import "ARTechnique.h"
#import "ARPlaneData.h"
#import "ARRawSceneUnderstandingData.h"
#import "ARWorldTrackingTechnique.h"

@interface ARPlaneEstimationTechnique : ARTechnique <ARWorldTrackingTechniqueObserver>

 {
    NSObject<OS_dispatch_semaphore> *_semaphoreResult;
    ARPlaneData *_planeResultData;
    ARRawSceneUnderstandingData *_rawSceneUnderstandingData;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) ARWorldTrackingTechnique *worldTrackingTechnique; // ivar: _worldTrackingTechnique


+(id)_detectPlanesWithDetector:(struct CV3DSurfaceDetectionContext *)arg0 types:(NSUInteger)arg1 camera:(id)arg2 referenceFeaturePoints:(id)arg3 referenceOriginTransform:(struct ? )arg4 ;
+(id)detectPlanes:(NSUInteger)arg0 withFrame:(id)arg1 ;
-(BOOL)isBusy;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)reconfigurableFrom:(id)arg0 ;
-(id)_fullDescription;
-(id)initWithTrackingTechnique:(id)arg0 ;
-(id)resultDataClasses;
-(void)dealloc;
-(void)reconfigureFrom:(id)arg0 ;
-(void)requestResultDataAtTimestamp:(CGFloat)arg0 context:(id)arg1 ;
-(void)siblingTechniquesDidChange:(id)arg0 ;
-(void)technique:(id)arg0 didDetectPlane:(id)arg1 timestamp:(CGFloat)arg2 ;
-(void)technique:(id)arg0 didOutputSceneUnderstandingData:(id)arg1 timestamp:(CGFloat)arg2 ;


@end


#endif