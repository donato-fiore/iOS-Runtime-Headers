// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AR3DSKELETONLIFTINGTECHNIQUE_H
#define AR3DSKELETONLIFTINGTECHNIQUE_H

@class NSString;


#import "ARMLImageProcessingTechnique.h"

@interface AR3DSkeletonLiftingTechnique : ARMLImageProcessingTechnique {
    NSString *_inputTensorName;
}




+(BOOL)_adjustBoneLength:(*NSUInteger)arg0 count;
+(void)_transformRelativeToHip:(*NSUInteger)arg0 count;
-(CGFloat)requiredTimeInterval;
-(NSUInteger)requiredSensorDataTypes;
-(id)init;
-(id)processEspressoTensor:(id)arg0 ;
-(void)_endLoadingMLModelSignpost;
-(void)_endMLCreateResultSignpostWithTimestamp:(CGFloat)arg0 ;
-(void)_endMLProcessingSignpostWithTimestamp:(CGFloat)arg0 ;
-(void)_endMLRunNetworkSignpostWithTimestamp:(CGFloat)arg0 ;
-(void)_startLoadingMLModelSignpost;
-(void)_startMLCreateResultSignpostWithTimestamp:(CGFloat)arg0 orientation:(NSInteger)arg1 outputSize:(struct CGSize )arg2 ;
-(void)_startMLProcessingSignpostWithTimestamp:(CGFloat)arg0 ;
-(void)_startMLRunNetworkSignpostWithTimestamp:(CGFloat)arg0 ;
-(void)changeEspressoConfig:(id)arg0 ;


@end


#endif