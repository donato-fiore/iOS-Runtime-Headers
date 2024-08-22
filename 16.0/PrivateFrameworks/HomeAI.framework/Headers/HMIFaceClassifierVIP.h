// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMIFACECLASSIFIERVIP_H
#define HMIFACECLASSIFIERVIP_H

@class HMFObject, NSString;
@protocol HMIFaceClassifier, HMFLogging;


#import "HMIFaceQualityFilterSVM.h"
#import "HMIFaceprinter.h"

@interface HMIFaceClassifierVIP : HMFObject <HMIFaceClassifier, HMFLogging>



@property (readonly) CGFloat classificationThresholdKnown; // ivar: _classificationThresholdKnown
@property (readonly) CGFloat classificationThresholdUnknown; // ivar: _classificationThresholdUnknown
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) HMIFaceQualityFilterSVM *faceAestheticQualityFilter; // ivar: _faceAestheticQualityFilter
@property (readonly) HMIFaceQualityFilterSVM *faceRecognizabilityFilter; // ivar: _faceRecognizabilityFilter
@property (readonly) HMIFaceprinter *faceprinter; // ivar: _faceprinter
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)logCategory;
-(id)classifyFaceEvent:(id)arg0 pixelBuffer:(struct __CVBuffer *)arg1 fastMode:(BOOL)arg2 homeUUID:(id)arg3 error:(*id)arg4 ;
-(id)initWithError:(*id)arg0 ;
-(id)qualityPredictionFromSVMUsingFaceQualityFilterSVM:(id)arg0 detectorConfidence:(CGFloat)arg1 laplacian:(CGFloat)arg2 yaw:(CGFloat)arg3 boxSize:(CGFloat)arg4 error:(*id)arg5 ;


@end


#endif