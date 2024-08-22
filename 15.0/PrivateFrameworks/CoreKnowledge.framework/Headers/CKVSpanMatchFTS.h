// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKVSPANMATCHFTS_H
#define CKVSPANMATCHFTS_H

@class NSString;
@protocol CKVSpanMatchSearchIndex;

#import <Foundation/Foundation.h>

#import "CKVDatabaseSearcher.h"

@interface CKVSpanMatchFTS : NSObject <CKVSpanMatchSearchIndex>

 {
    CKVDatabaseSearcher *_databaseSearcher;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_shouldMergeSpanWithRange:(struct _NSRange )arg0 inTokenChain:(id)arg1 withSearchResult:(id)arg2 ;
-(id)_characterRangeFromTokenRange:(struct _NSRange )arg0 inTokenChain:(id)arg1 ;
-(id)_findLongestSpansMatchingResult:(id)arg0 withTokenIndexes:(id)arg1 ofTokenChain:(id)arg2 ;
-(id)_preprocessTokenChain:(id)arg0 ;
-(id)_searchFTSForToken:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithDatabaseSearcher:(id)arg0 ;
-(id)locale;
-(id)searchIndexForTokenChain:(id)arg0 ;
-(void)_mapSearchResults:(id)arg0 toTokenIndex:(NSUInteger)arg1 withMap:(id)arg2 ;


@end


#endif