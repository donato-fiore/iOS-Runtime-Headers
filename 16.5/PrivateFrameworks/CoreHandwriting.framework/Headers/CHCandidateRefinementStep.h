// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CHCANDIDATEREFINEMENTSTEP_H
#define CHCANDIDATEREFINEMENTSTEP_H



#import "CHPostprocessingStep.h"

@interface CHCandidateRefinementStep : CHPostprocessingStep

@property (nonatomic) BOOL shouldKeepAlternativeLengths; // ivar: _shouldKeepAlternativeLengths
@property (nonatomic) BOOL shouldKeepDuplicateTokenIDs; // ivar: _shouldKeepDuplicateTokenIDs
@property (nonatomic) BOOL shouldKeepOriginalSpelling; // ivar: _shouldKeepOriginalSpelling
@property (nonatomic) BOOL shouldKeepOutOfLexiconAlternatives; // ivar: _shouldKeepOutOfLexiconAlternatives
@property (nonatomic) BOOL shouldKeepOutOfPatternCandidates; // ivar: _shouldKeepOutOfPatternCandidates
@property (nonatomic) BOOL shouldKeepSubstrings; // ivar: _shouldKeepSubstrings


-(id)initWithShouldKeepOutOfPatternCandidates:(BOOL)arg0 shouldKeepDuplicateTokenIDs:(BOOL)arg1 shouldKeepOutOfLexiconAlternatives:(BOOL)arg2 shouldKeepAlternativeLengths:(BOOL)arg3 shouldKeepSubstrings:(BOOL)arg4 shouldKeepOriginalSpelling:(BOOL)arg5 ;
-(id)process:(id)arg0 options:(id)arg1 ;


@end


#endif