// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MLPIPELINECLASSIFIER_H
#define MLPIPELINECLASSIFIER_H



#import "MLClassifier.h"
#import "MLPipeline.h"

@interface MLPipelineClassifier : MLClassifier

@property (retain) MLPipeline *engine; // ivar: _engine
@property (readonly) MLPipeline *pipeline;


-(id)classify:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)initWithEngine:(id)arg0 description:(id)arg1 configuration:(id)arg2 error:(*id)arg3 ;


@end


#endif