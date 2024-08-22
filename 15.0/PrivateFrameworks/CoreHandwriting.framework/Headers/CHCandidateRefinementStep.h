// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHCANDIDATEREFINEMENTSTEP_H
#define CHCANDIDATEREFINEMENTSTEP_H



#import "CHPostprocessingStep.h"
#import "CHRecognizer.h"

@interface CHCandidateRefinementStep : CHPostprocessingStep

@property (nonatomic) CHRecognizer *recognizer; // ivar: _recognizer
@property (nonatomic) BOOL shouldKeepAlternativeLengths; // ivar: _shouldKeepAlternativeLengths
@property (nonatomic) BOOL shouldKeepDuplicateTokenIDs; // ivar: _shouldKeepDuplicateTokenIDs
@property (nonatomic) BOOL shouldKeepOriginalSpelling; // ivar: _shouldKeepOriginalSpelling
@property (nonatomic) BOOL shouldKeepOutOfLexiconAlternatives; // ivar: _shouldKeepOutOfLexiconAlternatives
@property (nonatomic) BOOL shouldKeepOutOfPatternCandidates; // ivar: _shouldKeepOutOfPatternCandidates
@property (nonatomic) BOOL shouldKeepSubstrings; // ivar: _shouldKeepSubstrings


-(id)initWithRecognizer:(id)arg0 shouldKeepOutOfPatternCandidates:(BOOL)arg1 shouldKeepDuplicateTokenIDs:(BOOL)arg2 shouldKeepOutOfLexiconAlternatives:(BOOL)arg3 shouldKeepAlternativeLengths:(BOOL)arg4 shouldKeepSubstrings:(BOOL)arg5 shouldKeepOriginalSpelling:(BOOL)arg6 ;
-(id)process:(id)arg0 ;


@end


#endif