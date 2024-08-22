// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _NURENDERPIPELINEBLOCKVARIABLE_H
#define _NURENDERPIPELINEBLOCKVARIABLE_H



#import "NURenderPipelineFunction.h"

@interface _NURenderPipelineBlockVariable : NURenderPipelineFunction {
    id *_evaluationBlock;
}




-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToBlockVariable:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)evaluate:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithEvaluationBlock:(id)arg0 ;


@end


#endif