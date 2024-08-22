// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BWVIDEODEPTHINFERENCECONFIGURATION_H
#define BWVIDEODEPTHINFERENCECONFIGURATION_H

@class NSString;


#import "BWInferenceConfiguration.h"

@interface BWVideoDepthInferenceConfiguration : BWInferenceConfiguration

@property (readonly, nonatomic) NSUInteger concurrencyWidth; // ivar: _concurrencyWidth
@property (readonly, nonatomic) ? inputDimensions; // ivar: _inputDimensions
@property (readonly, nonatomic) ? outputDimensions; // ivar: _outputDimensions
@property (readonly, nonatomic) NSString *portType; // ivar: _portType
@property (readonly, nonatomic) id *postProcessingCompletionBlock; // ivar: _postProcessingCompletionBlock
@property (readonly, nonatomic) unsigned int temporalDepthInputPixelFormat; // ivar: _temporalDepthInputPixelFormat
@property (readonly, nonatomic) int videoDepthAlgorithm; // ivar: _videoDepthAlgorithm


-(id)initWithInferenceType:(int)arg0 videoDepthAlgorithm:(int)arg1 outputDimensions:(struct ? )arg2 inputDimensions:(struct ? )arg3 temporalDepthInputPixelFormat:(unsigned int)arg4 portType:(id)arg5 concurrencyWidth:(NSUInteger)arg6 postProcessingCompletionBlock:(id)arg7 ;
-(void)dealloc;


@end


#endif