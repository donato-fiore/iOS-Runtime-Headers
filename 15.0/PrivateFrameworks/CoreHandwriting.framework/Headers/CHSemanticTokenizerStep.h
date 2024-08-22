// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHSEMANTICTOKENIZERSTEP_H
#define CHSEMANTICTOKENIZERSTEP_H



#import "CHPostprocessingStep.h"
#import "CHRecognizer.h"

@interface CHSemanticTokenizerStep : CHPostprocessingStep

@property (nonatomic) *void languageModel; // ivar: _languageModel
@property (nonatomic) CHRecognizer *recognizer; // ivar: _recognizer


-(id)initWithRecognizer:(id)arg0 languageModel:(*void)arg1 ;
-(id)process:(id)arg0 ;
-(void)_updateTokenInappropriateFlag:(id)arg0 ;
-(void)dealloc;


@end


#endif