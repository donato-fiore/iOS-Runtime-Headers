// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AR3DSKELETONLIFTINGTECHNIQUE_H
#define AR3DSKELETONLIFTINGTECHNIQUE_H

@protocol ABPK3DLiftingAlgorithm;


#import "ARMLImageProcessingTechnique.h"

@interface AR3DSkeletonLiftingTechnique : ARMLImageProcessingTechnique {
    id<ABPK3DLiftingAlgorithm> *_liftingAlgorithm;
}




-(CGFloat)requiredTimeInterval;
-(NSUInteger)requiredSensorDataTypes;
-(id)init;
-(id)processEspressoTensor:(id)arg0 ;
-(void)_endLoadingMLModelSignpost;
-(void)_endMLCreateResultSignpostWithTimestamp:(CGFloat)arg0 ;
-(void)_endMLProcessingSignpostWithTimestamp:(CGFloat)arg0 ;
-(void)_endMLRunNetworkSignpostWithTimestamp:(CGFloat)arg0 ;
-(void)_prepareOnce:(BOOL)arg0 ;
-(void)_startLoadingMLModelSignpost;
-(void)_startMLCreateResultSignpostWithTimestamp:(CGFloat)arg0 orientation:(NSInteger)arg1 outputSize:(struct CGSize )arg2 ;
-(void)_startMLProcessingSignpostWithTimestamp:(CGFloat)arg0 ;
-(void)_startMLRunNetworkSignpostWithTimestamp:(CGFloat)arg0 ;
-(void)changeEspressoConfig:(id)arg0 ;


@end


#endif