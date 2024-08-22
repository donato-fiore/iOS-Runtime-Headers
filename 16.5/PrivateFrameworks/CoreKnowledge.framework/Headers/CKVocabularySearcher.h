// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKVOCABULARYSEARCHER_H
#define CKVOCABULARYSEARCHER_H

@protocol CKVSearchService;

#import <Foundation/Foundation.h>


@interface CKVocabularySearcher : NSObject {
    NSObject<CKVSearchService> *_searchService;
}




+(id)makeSearcher;
+(id)makeSearcherForUserId:(id)arg0 ;
+(void)initialize;
-(BOOL)_validateAppIds:(id)arg0 andAddToCriteria:(id)arg1 ;
-(BOOL)_validateCustomTypes:(id)arg0 andAddToCriteria:(id)arg1 ;
-(BOOL)_validateUtteranceTokens:(id)arg0 ;
-(id)init;
-(id)initWithSearchService:(id)arg0 userId:(id)arg1 prewarm:(BOOL)arg2 ;
-(id)matchSpansOfString:(id)arg0 ;
-(id)matchSpansOfUtterance:(id)arg0 ;
-(id)searchCustomVocabulary:(id)arg0 appIds:(id)arg1 vocabularyTypes:(id)arg2 ;
-(id)searchCustomVocabularyWithWildcardPatterns:(id)arg0 appIds:(id)arg1 vocabularyTypes:(id)arg2 ;


@end


#endif