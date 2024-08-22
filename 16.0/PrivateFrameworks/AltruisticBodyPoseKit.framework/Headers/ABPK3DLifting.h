// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ABPK3DLIFTING_H
#define ABPK3DLIFTING_H

@class NSArray, NSMutableDictionary, NSString;
@protocol ABPK3DLiftingAlgorithm;

#import <Foundation/Foundation.h>

#import "ABPKMLNetworkV2.h"
#import "ABPK3DLiftingResult.h"
#import "ABPKSkeletonDefinition.h"
#import "ABPKMLModelConfiguration3DLifting.h"

@interface ABPK3DLifting : NSObject <ABPK3DLiftingAlgorithm>

 {
    NSArray *_inputTensorNames;
    NSArray *_outputTensorNames;
    *void _context;
    *void _plan;
    ? _network;
    ABPKMLNetworkV2 *_networkV2;
    NSMutableDictionary *inputBufferDict;
    NSMutableDictionary *outputBufferDict;
    BOOL _useEspressoV2;
    ? _outputTensor;
    ABPK3DLiftingResult *_liftingResult;
    vector<simd_float4x4, std::allocator<simd_float4x4>> _liftingResultAsModelPoses;
    ABPKSkeletonDefinition *_abpkLiftingSkeletonDefinition;
    ABPKMLModelConfiguration3DLifting *_mlConfig;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)initMLNetwork;
-(id)getLiftingResults;
-(id)init;
-(int)runLiftingModelWithData:(id)arg0 atTimestamp:(CGFloat)arg1 ;
-(struct ? *)get3DLiftingResultsAsModelPoses;
-(void)_adjustBoneLength;
-(void)_endLoading3DLiftingMLModelSignpost;
-(void)_endPostProcessDataSignpostWithTimestamp:(CGFloat)arg0 ;
-(void)_endPrepareLiftingInputSignpostWithTimestamp:(CGFloat)arg0 ;
-(void)_endRunLiftingModelSignpostWithTimestamp:(CGFloat)arg0 ;
-(void)_startLoading3DLiftingMLModelSignpost;
-(void)_startPostProcessDataSignpostWithTimestamp:(CGFloat)arg0 ;
-(void)_startPrepareLiftingInputSignpostWithTimestamp:(CGFloat)arg0 ;
-(void)_startRunLiftingModelSignpostWithTimestamp:(CGFloat)arg0 ;
-(void)_transformRelativeToHip:(*NSUInteger)arg0 count;
-(void)dealloc;


@end


#endif