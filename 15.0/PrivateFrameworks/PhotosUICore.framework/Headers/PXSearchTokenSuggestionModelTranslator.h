// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXSEARCHTOKENSUGGESTIONMODELTRANSLATOR_H
#define PXSEARCHTOKENSUGGESTIONMODELTRANSLATOR_H


#import <Foundation/Foundation.h>


@interface PXSearchTokenSuggestionModelTranslator : NSObject



+(BOOL)_isRTL;
+(id)_attributedTitleForTokenTitle:(id)arg0 searchText:(id)arg1 ;
+(id)_attributedTitleForWordEmbeddingMatchedText:(id)arg0 replacementText:(id)arg1 searchText:(id)arg2 ;
+(id)_bestParentWordEmbeddingsWithWordEmbeddings:(id)arg0 sceneAncestryInformation:(id)arg1 ;
+(id)_sortedWordEmbeddingsForCurrentQueryFromSubstitutions:(id)arg0 ;
+(id)searchTokenSuggestionsFromCompletions:(id)arg0 searchText:(id)arg1 ;
+(id)searchTokenSuggestionsFromNextTokenSuggestions:(id)arg0 ;
+(id)searchTokenSuggestionsFromWordEmbeddings:(id)arg0 sceneAncestryInformation:(id)arg1 searchText:(id)arg2 ;
-(id)init;


@end


#endif