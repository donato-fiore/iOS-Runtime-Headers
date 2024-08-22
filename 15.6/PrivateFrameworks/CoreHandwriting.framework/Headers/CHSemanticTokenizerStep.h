// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHSEMANTICTOKENIZERSTEP_H
#define CHSEMANTICTOKENIZERSTEP_H



#import "CHPostprocessingStep.h"
#import "CHStringOVSChecker.h"

@interface CHSemanticTokenizerStep : CHPostprocessingStep

@property (nonatomic) *void languageModel; // ivar: _languageModel
@property (retain, nonatomic) CHStringOVSChecker *ovsStringChecker; // ivar: _ovsStringChecker


-(id)initWithLanguageModel:(*void)arg0 ovsStringChecker:(id)arg1 ;
-(id)process:(id)arg0 options:(id)arg1 ;
-(void)_updateTokenInappropriateFlag:(id)arg0 ;
-(void)dealloc;


@end


#endif