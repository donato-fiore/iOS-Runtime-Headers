// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SLODLDPROCESSOR_H
#define SLODLDPROCESSOR_H

@protocol SLODLDModelComponent, SLODLDPreProcessingComponent, SLODLDTokenizerComponent;

#import <Foundation/Foundation.h>

#import "SLODLDConfigDecoder.h"

@interface SLODLDProcessor : NSObject

@property (retain, nonatomic) SLODLDConfigDecoder *config; // ivar: _config
@property (retain, nonatomic) NSObject<SLODLDModelComponent> *model; // ivar: _model
@property (retain, nonatomic) NSObject<SLODLDPreProcessingComponent> *preprocessor; // ivar: _preprocessor
@property (retain, nonatomic) NSObject<SLODLDTokenizerComponent> *tokenizer; // ivar: _tokenizer


-(id)_getPreprocessorForType:(NSUInteger)arg0 withConfig:(id)arg1 ;
-(id)_getTokenizerForType:(NSUInteger)arg0 withConfig:(id)arg1 ;
-(id)_setupPipelineComponentsUsingConfig:(id)arg0 ;
-(id)initWithConfigFile:(id)arg0 error:(*id)arg1 ;
-(id)processInputUtterance:(id)arg0 ;


@end


#endif