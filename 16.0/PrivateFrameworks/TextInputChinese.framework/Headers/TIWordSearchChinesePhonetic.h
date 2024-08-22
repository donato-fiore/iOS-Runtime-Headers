// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TIWORDSEARCHCHINESEPHONETIC_H
#define TIWORDSEARCHCHINESEPHONETIC_H

@class TIWordSearch, NSArray;



@interface TIWordSearchChinesePhonetic : TIWordSearch

@property (nonatomic) BOOL fuzzyPinyinEnabled; // ivar: _fuzzyPinyinEnabled
@property (retain, nonatomic) NSArray *fuzzyPinyinPairs; // ivar: _fuzzyPinyinPairs
@property (nonatomic) int shuangpinType; // ivar: _shuangpinType
@property (nonatomic) BOOL tenKeyPinyinEnabled; // ivar: _tenKeyPinyinEnabled


+(id)pinyinCharacterSetWithTones;
-(BOOL)shareVocabulary;
-(NSUInteger)mecabraAnalysisOptionsWithAutocorrectionEnabled:(BOOL)arg0 firstSyllableLocked:(BOOL)arg1 reanalysisMode:(BOOL)arg2 hardwareKeyboardMode:(BOOL)arg3 predictionEnabled:(BOOL)arg4 ;
-(id)candidatesCacheKeyForOperation:(id)arg0 ;
-(id)uncachedCandidatesForOperation:(id)arg0 ;
-(int)mecabraInputMethodType;
-(unsigned char)nameReadingPairGenerationMode;
-(void)clearCacheForInputString:(id)arg0 keyboardInput:(id)arg1 unambiguousSyllableCount:(NSUInteger)arg2 selectedDisambiguationCandidateIndex:(NSUInteger)arg3 ;
-(void)dealloc;
-(void)updateFuzzyPinyinSettings;
-(void)updateMecabraState;
-(void)updateShuangpinTypeWithReanalysisMode:(BOOL)arg0 ;


@end


#endif