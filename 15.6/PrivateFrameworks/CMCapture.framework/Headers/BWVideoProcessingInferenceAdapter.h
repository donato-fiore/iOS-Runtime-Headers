// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BWVIDEOPROCESSINGINFERENCEADAPTER_H
#define BWVIDEOPROCESSINGINFERENCEADAPTER_H


#import <Foundation/Foundation.h>


@interface BWVideoProcessingInferenceAdapter : NSObject



-(id)inferenceProviderForType:(int)arg0 version:(struct ? )arg1 configuration:(id)arg2 resourceProvider:(id)arg3 status:(*int)arg4 ;
-(int)_executionTargetForAnalysisType:(NSUInteger)arg0 ;


@end


#endif