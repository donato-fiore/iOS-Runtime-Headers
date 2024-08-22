// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRCTCPATH_H
#define CRCTCPATH_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CRCtcPath : NSObject {
    vector<unsigned int, std::allocator<unsigned int>> _tokenString;
    vector<unsigned int, std::allocator<unsigned int>> _histWordTokenIDs;
    NSUInteger _beginningCurrentWord;
    vector<_NSRange, std::allocator<_NSRange>> _whitespaceRanges;
    NSUInteger _numCustomWords;
}


@property (nonatomic) *_LXCursor lxDynamicCursor; // ivar: _lxDynamicCursor
@property (nonatomic) *_LXCursor lxStaticCursor; // ivar: _lxStaticCursor
@property CGFloat probBlank; // ivar: _probBlank
@property CGFloat probCharNGram; // ivar: _probCharNGram
@property (readonly) CGFloat probLM;
@property CGFloat probLexCurrWord; // ivar: _probLexCurrWord
@property CGFloat probLexHist; // ivar: _probLexHist
@property CGFloat probNonBlank; // ivar: _probNonBlank
@property (readonly) CGFloat probTotal;
@property (readonly) CGFloat probTotalNorm;
@property CGFloat probWM; // ivar: _probWM
@property (retain) NSString *string; // ivar: _string


+(BOOL)_isWordCustom:(id)arg0 dynamicLexicon:(struct _LXLexicon *)arg1 ;
+(CGFloat)lmProbForString:(id)arg0 forPath:(id)arg1 originalWordRanges:(id)arg2 originalWordIDs:(id)arg3 wordRanges:(id)arg4 wordIDs:(id)arg5 wordModel:(*void)arg6 ;
+(id)_getQueue;
+(unsigned int)normalizeLMTokenIDForWord:(id)arg0 withTokenID:(unsigned int)arg1 outScore:(*CGFloat)arg2 wordModel:(*void)arg3 ;
+(void)updateLexiconProbForPath:(id)arg0 stemmingFromPath:(id)arg1 staticLexicon:(struct _LXLexicon *)arg2 dynamicLexicon:(struct _LXLexicon *)arg3 forChar:(unsigned short)arg4 ;
+(void)updateNGramProbForPath:(id)arg0 stemmingFromPath:(id)arg1 withModel:(*void)arg2 forChar:(unsigned short)arg3 ;
+(void)updateWMProbForPath:(id)arg0 stemmingFromPath:(id)arg1 wordModel:(*void)arg2 locale:(id)arg3 forChar:(unsigned short)arg4 ;
+(void)useLMTokenizerOnString:(id)arg0 outTokenIDs:(*id)arg1 outTokenRanges:(*id)arg2 wordModel:(*void)arg3 locale:(id)arg4 ;
-(BOOL)containsCustomWords:(struct _LXLexicon *)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(id)childPathWithBlankProb:(CGFloat)arg0 ;
-(id)init;
-(id)pathByExtendingWithCharacter:(unsigned short)arg0 characterNGramModel:(*void)arg1 staticLexicon:(struct _LXLexicon *)arg2 dynamicLexicon:(struct _LXLexicon *)arg3 wordModel:(*void)arg4 locale:(id)arg5 forTimeSample:(NSUInteger)arg6 ;
-(id)whiteSpaceRangesExcludingTrailing;
-(void)dealloc;
-(void)merge:(id)arg0 replaceWhiteSpaces:(BOOL)arg1 ;
-(void)updateWhitespacesForTimeSample:(NSUInteger)arg0 ;


@end


#endif