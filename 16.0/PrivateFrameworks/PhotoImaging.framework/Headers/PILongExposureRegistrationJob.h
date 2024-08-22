// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PILONGEXPOSUREREGISTRATIONJOB_H
#define PILONGEXPOSUREREGISTRATIONJOB_H

@class NURenderJob, VNImageHomographicAlignmentObservation, CIImage;



@interface PILongExposureRegistrationJob : NURenderJob

@property (nonatomic) ? guideExtent; // ivar: _guideExtent
@property (retain, nonatomic) VNImageHomographicAlignmentObservation *observation; // ivar: _observation
@property (retain, nonatomic) CIImage *stillImage; // ivar: _stillImage


-(BOOL)prepare:(*id)arg0 ;
-(BOOL)render:(*id)arg0 ;
-(BOOL)wantsCompleteStage;
-(BOOL)wantsOutputGeometry;
-(BOOL)wantsOutputImage;
-(BOOL)wantsRenderScaleClampedToNativeScale;
-(id)newRenderPipelineStateForEvaluationMode:(NSInteger)arg0 ;
-(id)registrationRequest;
-(id)result;
-(id)scalePolicy;


@end


#endif