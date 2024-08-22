// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKVSEARCHSERVICECONNECTION_H
#define CKVSEARCHSERVICECONNECTION_H

@class KVSpanMatcher, NSString, KVTokenizer;
@protocol CKVSearchService;

#import <Foundation/Foundation.h>

#import "CKVDatabaseSearcher.h"

@interface CKVSearchServiceConnection : NSObject <CKVSearchService>

 {
    CKVDatabaseSearcher *_databaseSearcher;
    KVSpanMatcher *_spanMatcher;
    NSString *_userId;
    KVTokenizer *_tokenizer;
}




-(id)_convertFTSResultsToSearchResults:(id)arg0 ;
-(id)_convertSpanMatchResults:(id)arg0 ;
-(id)initWithUserId:(id)arg0 databaseSearcherProvider:(id)arg1 spanMatcherProvider:(id)arg2 ;
-(id)matchSpansOfString:(id)arg0 ;
-(id)matchSpansWithTokenChain:(id)arg0 ;
-(id)searchFTSWithCriteria:(id)arg0 error:(*id)arg1 ;
-(void)prewarmSpanMatcher;


@end


#endif