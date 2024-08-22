// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKVSEARCHSERVICECONNECTION_H
#define CKVSEARCHSERVICECONNECTION_H

@protocol CKVSearchService;


#import "CKVServiceConnection.h"
#import "CKVDatabaseSearcher.h"
#import "CKVSpanMatcher.h"

@interface CKVSearchServiceConnection : CKVServiceConnection <CKVSearchService>

 {
    CKVDatabaseSearcher *_databaseSearcher;
    CKVSpanMatcher *_spanMatcher;
}




-(id)_convertFTSResultsToSearchResults:(id)arg0 ;
-(id)initWithServiceQueue:(id)arg0 databaseSearcherProvider:(id)arg1 spanMatcherProvider:(id)arg2 ;
-(id)matchSpansWithString:(id)arg0 ;
-(id)matchSpansWithTokenChain:(id)arg0 ;
-(id)searchFTSWithCriteria:(id)arg0 error:(*id)arg1 ;
-(void)prewarmSpanMatcher;


@end


#endif