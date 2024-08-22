// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MLPROGRAMEVALUATOR_H
#define MLPROGRAMEVALUATOR_H

@protocol MLModeling, MLProgramInternal;

#import <Foundation/Foundation.h>


@interface MLProgramEvaluator : NSObject

@property (readonly, copy) NSObject<MLModeling> *model;
@property (retain, nonatomic) NSObject<MLProgramInternal> *program; // ivar: _program


-(id)evaluateFunction:(id)arg0 arguments:(id)arg1 context:(id)arg2 error:(*id)arg3 ;
-(id)evaluateFunction:(id)arg0 arguments:(id)arg1 context:(id)arg2 updateContext:(BOOL)arg3 error:(*id)arg4 ;
-(id)initWithProgram:(id)arg0 error:(*id)arg1 ;
-(id)newContextAndReturnError:(*id)arg0 ;
-(id)prepareArgumentsFromFeatures:(id)arg0 context:(id)arg1 forFunctionName:(id)arg2 ;
-(void)updateContext:(id)arg0 functionName:(id)arg1 result:(id)arg2 ;


@end


#endif