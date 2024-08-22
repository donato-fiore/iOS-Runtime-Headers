// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PREDICTOR_H
#define PREDICTOR_H

@class MLMultiArray, MLPredictionOptions;

#import <Foundation/Foundation.h>

#import "Te_c3seuakuh8Input.h"
#import "Te_tjejjxf8q3Input.h"
#import "Te_c3seuakuh8Output.h"
#import "Te_tjejjxf8q3Output.h"
#import "Te_c3seuakuh8.h"
#import "Te_tjejjxf8q3.h"

@interface Predictor : NSObject

@property (readonly, nonatomic) MLMultiArray *TeModelInput; // ivar: _TeModelInput
@property (readonly, nonatomic) Te_c3seuakuh8Input *TeModelInput_c3seuakuh8; // ivar: _TeModelInput_c3seuakuh8
@property (readonly, nonatomic) Te_tjejjxf8q3Input *TeModelInput_tjejjxf8q3; // ivar: _TeModelInput_tjejjxf8q3
@property (readonly, nonatomic) Te_c3seuakuh8Output *TeModelOutput_c3seuakuh8; // ivar: _TeModelOutput_c3seuakuh8
@property (readonly, nonatomic) Te_tjejjxf8q3Output *TeModelOutput_tjejjxf8q3; // ivar: _TeModelOutput_tjejjxf8q3
@property (readonly, nonatomic) Te_c3seuakuh8 *mTe_c3seuakuh8; // ivar: _mTe_c3seuakuh8
@property (readonly, nonatomic) Te_tjejjxf8q3 *mTe_tjejjxf8q3; // ivar: _mTe_tjejjxf8q3
@property (readonly, nonatomic) MLPredictionOptions *modelOptions; // ivar: _modelOptions


-(BOOL)predict:(*void)arg0 afib:(*void)arg1 be_mode:(*BOOL)arg2 with_error_status:(*BOOL)arg3 ;
-(id)init;
-(void)resample:(*void)arg0 output:(*void)arg1 ;


@end


#endif