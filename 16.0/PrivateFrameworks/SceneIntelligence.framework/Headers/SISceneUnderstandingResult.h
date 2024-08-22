// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SISCENEUNDERSTANDINGRESULT_H
#define SISCENEUNDERSTANDINGRESULT_H


#import <Foundation/Foundation.h>


@interface SISceneUnderstandingResult : NSObject {
    ? _labelsTensor;
    ? _probabilitiesTensor;
    ? _normalsTensor;
}


@property (readonly, nonatomic) _SITensorDim labelTensorDimensions; // ivar: _labelTensorDimensions
@property (readonly, nonatomic) _SITensorDim normalTensorDimensions; // ivar: _normalTensorDimensions
@property (readonly, nonatomic) _SITensorDim probabilitiesTensorDimensions; // ivar: _probabilitiesTensorDimensions
@property (readonly, nonatomic) CGSize resolution; // ivar: _resolution


+(struct CGSize )outputDimensions;
-(NSInteger)writeLabels:(struct __CVBuffer *)arg0 ;
-(NSInteger)writeNormals:(struct __CVBuffer *)arg0 orientation:(NSInteger)arg1 ;
-(NSInteger)writeProbabilities:(struct __CVBuffer *)arg0 ;
-(id)initWithModel:(id)arg0 ;
-(struct ? *)labelsTensor;
-(struct ? *)normalsTensor;
-(struct ? *)probabilitiesTensor;
-(void)dealloc;


@end


#endif