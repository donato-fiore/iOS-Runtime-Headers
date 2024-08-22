// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSPASSWORDPATTERNMATCHER_H
#define WBSPASSWORDPATTERNMATCHER_H


#import <Foundation/Foundation.h>


@interface WBSPasswordPatternMatcher : NSObject



-(NSUInteger)_directionFromHexCoordinate:(id)arg0 to:(id)arg1 ;
-(id)_characterRepetitionPatternForPasscode:(id)arg0 ;
-(id)_commonPasscodeCharacterRepetitionPatterns;
-(id)_commonlySubstitutedCharacterSet;
-(id)_commonlySubstitutedCharactersMap;
-(id)_dateMatchesForPasscode:(id)arg0 ;
-(id)_keyboardLayoutPatternMatchesForPassword:(id)arg0 ;
-(id)_keyboardMatchWithPassword:(id)arg0 range:(struct _NSRange )arg1 shiftedCharacterCount:(NSUInteger)arg2 keyboardIdentifier:(id)arg3 keyboard:(id)arg4 ;
-(id)_keyboardsByIdentifier;
-(id)_obviousSequenceStartCharacterSet;
-(id)_passwordVariationsWithoutCommonCharacterSubstitutions:(id)arg0 ;
-(id)_passwordWithoutShiftedCharacters:(id)arg0 shiftMap:(id)arg1 outShiftedCharacterIndexSet:(*id)arg2 ;
-(id)_patternWithFewestGuessesRequiredWithRange:(struct _NSRange )arg0 patternMatches:(id)arg1 ;
-(id)_repetitionMatchesForPasscode:(id)arg0 ;
-(id)_repetitionMatchesForPassword:(id)arg0 withMatches:(id)arg1 ;
-(id)_sequenceMatchesForPasscode:(id)arg0 ;
-(id)_sequencePatternMatchWithPassword:(id)arg0 startIndex:(NSUInteger)arg1 endIndex:(NSUInteger)arg2 delta:(NSInteger)arg3 ;
-(id)_sequencePatternMatchesForPassword:(id)arg0 ;
-(id)_wordListMatchesForPasscode:(id)arg0 withWordListCollection:(id)arg1 ;
-(id)_wordListMatchesForPassword:(id)arg0 withWordListCollection:(id)arg1 ;
-(id)patternMatchesForPasscode:(id)arg0 withWordListCollection:(id)arg1 ;
-(id)patternMatchesForPassword:(id)arg0 withWordListCollection:(id)arg1 ;
-(void)_enumerateGraphemeClusterSubrangesOfString:(id)arg0 withMinimumLength:(NSUInteger)arg1 usingBlock:(id)arg2 ;


@end


#endif