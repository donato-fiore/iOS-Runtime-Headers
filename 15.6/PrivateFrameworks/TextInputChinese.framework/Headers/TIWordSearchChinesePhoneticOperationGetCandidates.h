// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TIWORDSEARCHCHINESEPHONETICOPERATIONGETCANDIDATES_H
#define TIWORDSEARCHCHINESEPHONETICOPERATIONGETCANDIDATES_H

@class TIWordSearchOperationGetCandidates, NSArray;



@interface TIWordSearchChinesePhoneticOperationGetCandidates : TIWordSearchOperationGetCandidates

@property (readonly, nonatomic) NSUInteger disambiguatedSyllablesCount; // ivar: _disambiguatedSyllablesCount
@property (readonly, nonatomic) NSArray *disambiguationCandidates; // ivar: _disambiguationCandidates
@property (readonly, nonatomic) BOOL regenerateDisambiguationCandidates; // ivar: _regenerateDisambiguationCandidates
@property (readonly, nonatomic) NSUInteger selectedDisambiguationCandidateIndex; // ivar: _selectedDisambiguationCandidateIndex
@property (readonly, nonatomic) NSUInteger unambiguousSyllableCount; // ivar: _unambiguousSyllableCount


-(id)initWithWordSearch:(id)arg0 inputString:(id)arg1 keyboardInput:(id)arg2 segmentBreakIndex:(NSUInteger)arg3 disambiguationCandidates:(id)arg4 unambiguousSyllableCount:(NSUInteger)arg5 selectedDisambiguationCandidateIndex:(NSUInteger)arg6 regenerateDisambiguationCandidates:(BOOL)arg7 predictionEnabled:(BOOL)arg8 reanalysisMode:(BOOL)arg9 target:(id)arg10 action:(SEL)arg11 geometryModelData:(id)arg12 hardwareKeyboardMode:(BOOL)arg13 logger:(id)arg14 ;


@end


#endif