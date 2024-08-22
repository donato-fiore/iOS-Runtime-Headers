// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NUJSRENDERPIPELINEFUNCTION_H
#define NUJSRENDERPIPELINEFUNCTION_H

@class NSDictionary, NSString;


#import "NURenderPipelineFunction.h"

@interface NUJSRenderPipelineFunction : NURenderPipelineFunction {
    NSDictionary *_params;
    NSString *_source;
}




-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToFunction:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)evaluate:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithParameters:(id)arg0 source:(id)arg1 ;


@end


#endif