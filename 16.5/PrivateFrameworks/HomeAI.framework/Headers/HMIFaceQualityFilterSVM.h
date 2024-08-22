// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMIFACEQUALITYFILTERSVM_H
#define HMIFACEQUALITYFILTERSVM_H

@class HMFObject, NSString, MLModel;
@protocol HMFLogging;



@interface HMIFaceQualityFilterSVM : HMFObject <HMFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) MLModel *mlModel; // ivar: _mlModel
@property (readonly) MLModel *scalerModel; // ivar: _scalerModel
@property (readonly) Class superclass;


+(id)dataScalerInputName;
+(id)dataScalerOutputName;
+(id)defaultAestheticQualityDataScalerPath;
+(id)defaultAestheticQualityModelPath;
+(id)defaultRecognizabilityDataScalerPath;
+(id)defaultRecognizabilityModelPath;
+(id)logCategory;
+(id)modelPathForResource:(id)arg0 ;
+(id)svmInputName;
+(id)svmOutputName;
-(BOOL)predict:(id)arg0 output:(*CGFloat)arg1 error:(*id)arg2 ;
-(id)initWithModelPath:(id)arg0 dataScalerPath:(id)arg1 error:(*id)arg2 ;


@end


#endif