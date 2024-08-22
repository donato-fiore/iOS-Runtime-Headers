// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CVNLPCTCTEXTDECODINGPATH_H
#define CVNLPCTCTEXTDECODINGPATH_H

@class NSString;


#import "CVNLPTextDecodingPath.h"
#import "CVNLPLexiconCursors.h"
#import "CVNLPLanguageResourceBundle.h"

@interface CVNLPCTCTextDecodingPath : CVNLPTextDecodingPath {
    vector<unsigned int, std::allocator<unsigned int>> _tokenString;
    vector<unsigned int, std::allocator<unsigned int>> _histWordTokenIDs;
    NSUInteger _beginningCurrentWord;
    vector<double, std::allocator<double>> _cumulativeTokenLogProbabilities;
    vector<double, std::allocator<double>> _tokenBoundaryLogProbabilities;
    vector<unsigned long, std::allocator<unsigned long>> _tokenStringSegmentationPositions;
    vector<unsigned long, std::allocator<unsigned long>> _tokenMaxActivations;
    vector<unsigned long, std::allocator<unsigned long>> _tokenCommitCharacterLengths;
    BOOL _hasContext;
    CGFloat _normalizedTotalLogProbability;
    NSString *_latestExpandedSymbolIncludingPseudospace;
    BOOL _hasExpanded;
    BOOL _hasProblematicMixedScriptWords;
    BOOL _hasCalculatedHasProblematicMixedScriptWords;
    int _lastCodeUnitType;
}


@property CGFloat activeWordLexiconLogProbability; // ivar: _activeWordLexiconLogProbability
@property CGFloat blankLogProbability; // ivar: _blankLogProbability
@property (nonatomic) *CVNLPLanguageModelWithState characterLMState; // ivar: _characterLMState
@property (retain, nonatomic) CVNLPLexiconCursors *cursors; // ivar: _cursors
@property (readonly, nonatomic) BOOL hasExpanded;
@property CGFloat historyLexiconLogProbability; // ivar: _historyLexiconLogProbability
@property (readonly, retain, nonatomic) CVNLPLanguageResourceBundle *languageResourceBundle; // ivar: _languageResourceBundle
@property (readonly) CGFloat languageResourceLogProbability; // ivar: _languageResourceLogProbability
@property CGFloat lastTokenBoundaryLogProbability;
@property (readonly, nonatomic) NSString *latestExpandedSymbol;
@property (readonly, nonatomic) NSString *latestExpandedSymbolIncludingPseudospace;
@property CGFloat nonBlankLogProbability; // ivar: _nonBlankLogProbability
@property (readonly) CGFloat normalizedActivationLogProbability;
@property (readonly) CGFloat normalizedTotalLogProbability;
@property (readonly) BOOL optimizingAlignment; // ivar: _optimizingAlignment
@property (readonly, nonatomic) id *scoringFunction; // ivar: _scoringFunction


+(id)_getQueue;
+(void)applyWordLanguageModelProbabilityToPath:(id)arg0 stemmedFromPath:(id)arg1 isCommittingToken:(BOOL)arg2 ;
-(BOOL)hasProblematicMixedScriptWords;
-(CGFloat)lexiconScore;
-(CGFloat)modelLogProbability;
-(CGFloat)scoreForTokenIndex:(NSInteger)arg0 ;
-(NSInteger)characterCount;
-(NSInteger)compare:(id)arg0 ;
-(NSInteger)pseudoSpaceCount;
-(NSInteger)tokenCount;
-(NSUInteger)_currentTokenStringLength;
-(float)_wordLanguageModelLogProbabilityForString:(id)arg0 originalWordRanges:(id)arg1 originalWordIDs:(struct vector<unsigned int, std::allocator<unsigned int>> )arg2 wordRanges:(id)arg3 wordIDs:(struct vector<unsigned int, std::allocator<unsigned int>> )arg4 ;
-(id)childPathWithBlankLogProb:(CGFloat)arg0 ;
-(id)debugDescription;
-(id)description;
// -(id)initWithLanguageResourceBundle:(id)arg0 scoringFunction:(id)arg1 initialCharacterLMState:(unk)arg2 characterTokenIDs:(struct CVNLPLanguageModelWithState *)arg3 wordTokenIDs:(struct vector<unsigned int, std::allocator<unsigned int>> )arg4 optimizingAlignment:(struct vector<unsigned int, std::allocator<unsigned int>> )arg5 hasContext:(BOOL)arg6  ;
-(id)pathByExtendingWithString:(id)arg0 extendedPathString:(id)arg1 blankLogProb:(CGFloat)arg2 nonBlankLogProb:(CGFloat)arg3 timestep:(NSInteger)arg4 commitAction:(NSInteger)arg5 symbolLogProb:(CGFloat)arg6 ;
-(id)tokensWithTimestep:(NSInteger)arg0 isFinalTimestep:(BOOL)arg1 ;
-(void)_updateCharacterLanguageModelLogProbabilityForString:(id)arg0 stemmingFromPath:(id)arg1 normalizedCodepoint:(unsigned int)arg2 ;
-(void)_updateLexiconLogProbabilityForString:(id)arg0 stemmingFromPath:(id)arg1 ;
-(void)commitTokenAtTimestep:(NSInteger)arg0 currentSymbolLogProbability:(CGFloat)arg1 commitAction:(NSInteger)arg2 string:(id)arg3 stemmingFromPath:(id)arg4 ;
-(void)dealloc;
-(void)merge:(id)arg0 logProbCumulator:(id)arg1 ;
-(void)setCharacterCount:(NSInteger)arg0 ;
-(void)setCharacterLanguageModelLogProbability:(CGFloat)arg0 ;
-(void)setPseudoSpaceCount:(NSInteger)arg0 ;
-(void)setWordLanguageModelLogProbability:(CGFloat)arg0 ;
-(void)updateLastTokenWithMaxActivation:(NSInteger)arg0 totalLogProbability:(CGFloat)arg1 tokenBoundaryLogProbability:(CGFloat)arg2 ;


@end


#endif