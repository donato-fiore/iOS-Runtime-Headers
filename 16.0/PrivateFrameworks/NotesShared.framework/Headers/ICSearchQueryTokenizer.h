// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICSEARCHQUERYTOKENIZER_H
#define ICSEARCHQUERYTOKENIZER_H


#import <Foundation/Foundation.h>


@interface ICSearchQueryTokenizer : NSObject



+(id)_expandedTokensForSearchQuerySegmentArray:(id)arg0 searchString:(id)arg1 language:(id)arg2 ;
+(id)_queryTokensForSearchString:(id)arg0 language:(id)arg1 ;
+(id)connectorCharacterSet;
+(id)expandedTokensForSearchString:(id)arg0 language:(id)arg1 ;
+(id)nonConnectorCharacterSet;
+(id)spellChecker;
+(id)spellCheckerGuessesForSearchString:(id)arg0 inRange:(struct _NSRange )arg1 language:(id)arg2 ;
+(id)tokenizer;
+(id)tokensFromString:(id)arg0 language:(id)arg1 ;
+(void)_combineConnectorAndTokensAndRemoveDividersInPlaceForMutableTokenArray:(id)arg0 searchString:(id)arg1 ;
+(void)_insertConnectorAndDividerSegmentsIntoMutableTokenArray:(id)arg0 searchString:(id)arg1 ;
+(void)_sortMutableSearchQueryTokensInPlace:(id)arg0 ;


@end


#endif