// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CVNLPCAPTIONPOSTPROCESSINGHANDLER_H
#define CVNLPCAPTIONPOSTPROCESSINGHANDLER_H

@class NSCharacterSet;

#import <Foundation/Foundation.h>

#import "CVNLPCaptionRuntimeParameters.h"

@interface CVNLPCaptionPostProcessingHandler : NSObject

@property (readonly, weak) CVNLPCaptionRuntimeParameters *runtimeParameters; // ivar: _runtimeParameters
@property (readonly) NSCharacterSet *trimSet; // ivar: _trimSet


-(BOOL)_checkAboveThreshold:(id)arg0 observationConfidence:(CGFloat)arg1 difference:(*id)arg2 ;
-(id)_checkForBlockingTokens:(id)arg0 blockingTokens:(id)arg1 ;
-(id)_checkForBlockingTokens:(id)arg0 visionObservations:(id)arg1 ;
-(id)_excludeGenderReplacements:(id)arg0 genderOption:(int)arg1 error:(*id)arg2 ;
-(id)_excludeGenderTriggers:(id)arg0 genderOption:(int)arg1 error:(*id)arg2 ;
-(id)_filterVisionObservations:(id)arg0 ;
-(id)_replacements:(id)arg0 genderOption:(int)arg1 ;
-(id)initWithOptions:(id)arg0 runtimeParameters:(id)arg1 ;
-(id)postProcessCaptions:(id)arg0 genderOption:(int)arg1 error:(*id)arg2 ;
-(id)postProcessCaptions:(id)arg0 visionObservations:(id)arg1 ;


@end


#endif