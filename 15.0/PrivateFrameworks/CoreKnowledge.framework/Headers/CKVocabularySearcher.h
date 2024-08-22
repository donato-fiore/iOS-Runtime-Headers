// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKVOCABULARYSEARCHER_H
#define CKVOCABULARYSEARCHER_H

@protocol OS_dispatch_queue, CKVSearchService;

#import <Foundation/Foundation.h>


@interface CKVocabularySearcher : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<CKVSearchService> *_searchService;
}




+(id)makeSearcher;
+(void)initialize;
-(BOOL)_validateAppIds:(id)arg0 andAddToCriteria:(id)arg1 ;
-(BOOL)_validateCustomTypes:(id)arg0 andAddToCriteria:(id)arg1 ;
-(BOOL)_validateUtteranceTokens:(id)arg0 ;
-(id)init;
-(id)initWithSearchService:(id)arg0 dispatchQueue:(id)arg1 ;
-(id)matchSpansOfString:(id)arg0 ;
-(id)matchSpansOfUtterance:(id)arg0 ;
-(id)searchCustomVocabulary:(id)arg0 appIds:(id)arg1 vocabularyTypes:(id)arg2 ;
-(id)searchCustomVocabularyWithWildcardPatterns:(id)arg0 appIds:(id)arg1 vocabularyTypes:(id)arg2 ;


@end


#endif