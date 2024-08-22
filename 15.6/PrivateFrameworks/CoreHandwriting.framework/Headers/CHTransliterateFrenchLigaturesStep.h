// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHTRANSLITERATEFRENCHLIGATURESSTEP_H
#define CHTRANSLITERATEFRENCHLIGATURESSTEP_H

@class CVNLPDecodingLanguageModel;


#import "CHPostprocessingStep.h"

@interface CHTransliterateFrenchLigaturesStep : CHPostprocessingStep

@property (retain, nonatomic) CVNLPDecodingLanguageModel *characterLM; // ivar: _characterLM
@property (nonatomic) *_LXLexicon staticLexicon; // ivar: _staticLexicon


-(id)handleFrenchLigaturesInToken:(id)arg0 ;
-(id)initWithCharacterLM:(id)arg0 staticLexicon:(struct _LXLexicon *)arg1 ;
-(id)process:(id)arg0 options:(id)arg1 ;


@end


#endif