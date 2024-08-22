// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CHCYRILLICADDALTERNATIVESCRIPTCANDIDATESSTEP_H
#define CHCYRILLICADDALTERNATIVESCRIPTCANDIDATESSTEP_H



#import "CHPostprocessingStep.h"

@interface CHCyrillicAddAlternativeScriptCandidatesStep : CHPostprocessingStep

@property (nonatomic) *_LXLexicon customLexicon; // ivar: _customLexicon
@property (nonatomic) *_LXLexicon staticLexicon; // ivar: _staticLexicon


-(id)initWithStaticLexicon:(struct _LXLexicon *)arg0 customLexicon:(struct _LXLexicon *)arg1 ;
-(id)process:(id)arg0 options:(id)arg1 ;


@end


#endif