// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PADALGORITHMS_H
#define _PADALGORITHMS_H

@class NSString;
@protocol PADAlgorithms;

#import <Foundation/Foundation.h>


@interface _PADAlgorithms : NSObject <PADAlgorithms>

 {
    shared_ptr<vision::mod::LivenessCheck_Options> _config;
    shared_ptr<vision::mod::LivenessCheckPredictor> _predictor;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)performTA:(struct __CVBuffer *)arg0 nccSignal:(*CGFloat)arg1 isSensitive:(BOOL)arg2 error:(*id)arg3 ;
-(CGFloat)getPRDFakeFrameThreshold;
-(CGFloat)getPRDLiveFrameThreshold;
-(CGFloat)performIDMatching:(id)arg0 toFaceprints:(id)arg1 error:(*id)arg2 ;
-(NSInteger)performSC:(id)arg0 assessmentTA:(id)arg1 assessmentFakePRD:(id)arg2 assessmentLivePRD:(id)arg3 assessmentID:(id)arg4 error:(*id)arg5 ;
-(NSUInteger)requiredObservationSetSizeFAC:(NSInteger)arg0 ;
-(id)_retrieveFaceprintsFromPredictorUsingObservationCompositeSet:(id)arg0 ;
-(id)_retrieveReferenceFramesFromPredictor;
-(id)getFACVersion;
-(id)init;
-(id)performFAC:(id)arg0 gesture:(NSInteger)arg1 error:(*id)arg2 ;
-(id)processFacePoseCompositeSet:(id)arg0 gesture:(NSInteger)arg1 error:(*id)arg2 ;


@end


#endif