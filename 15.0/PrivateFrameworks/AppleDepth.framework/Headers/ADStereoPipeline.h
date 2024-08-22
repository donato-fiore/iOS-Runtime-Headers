// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ADSTEREOPIPELINE_H
#define ADSTEREOPIPELINE_H


#import <Foundation/Foundation.h>

#import "ADNetworkProvider.h"
#import "ADEspressoStereoInferenceDescriptor.h"
#import "ADStereoPipelineParameters.h"

@interface ADStereoPipeline : NSObject {
    ADNetworkProvider *_networkProvider;
    ADEspressoStereoInferenceDescriptor *_inferenceDesc;
    NSInteger _prioritization;
}


@property (copy, nonatomic) ADStereoPipelineParameters *pipelineParameters; // ivar: _pipelineParameters
@property (readonly, nonatomic) BOOL shouldPreProcessColorInputs; // ivar: _shouldPreProcessColorInputs
@property (readonly, nonatomic) NSUInteger stereoImagesAlignment; // ivar: _stereoImagesAlignment


-(NSInteger)adjustForEngine:(NSUInteger)arg0 ;
-(NSInteger)preProcessColorInput:(struct __CVBuffer *)arg0 toBuffer:(struct __CVBuffer *)arg1 ;
-(id)inferenceDescriptor;
-(id)initWithInputAlignment:(NSUInteger)arg0 andPrioritization:(NSInteger)arg1 ;
-(id)initWithInputAlignment:(NSUInteger)arg0 prioritization:(NSInteger)arg1 andParameters:(id)arg2 ;


@end


#endif