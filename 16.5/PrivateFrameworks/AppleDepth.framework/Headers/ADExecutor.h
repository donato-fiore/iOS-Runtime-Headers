// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ADEXECUTOR_H
#define ADEXECUTOR_H

@class ADEspressoRunner, NSString;

#import <Foundation/Foundation.h>


@interface ADExecutor : NSObject {
    CGRect _inputRoi;
    NSUInteger _layout;
    unsigned int _inputOrientation;
    NSUInteger _engineType;
    ADEspressoRunner *_espressoRunner;
    NSUInteger _rotationPreference;
    NSInteger _rotationConstant;
}


@property (readonly, copy, nonatomic) NSString *networkVersionString;


-(NSInteger)convertIntrinsicsFrom:(struct __CVBuffer *)arg0 cropBy:(struct CGRect )arg1 to:(struct __CVBuffer *)arg2 ;
-(NSInteger)numberOfExecutionSteps;
-(NSInteger)prepareForEngineType:(NSUInteger)arg0 roi:(struct CGRect )arg1 descriptorForROI:(id)arg2 exifOrientation:(unsigned int)arg3 rotationPreference:(NSUInteger)arg4 inferenceDescriptor:(id)arg5 ;
-(NSInteger)solveRotationPreference:(NSUInteger)arg0 ;
-(id)getIntermediateWithName:(id)arg0 ;
-(id)getIntermediates;
-(id)init;


@end


#endif