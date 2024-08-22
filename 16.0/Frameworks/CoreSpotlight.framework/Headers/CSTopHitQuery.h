// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSTOPHITQUERY_H
#define CSTOPHITQUERY_H

@class NSMutableArray;


#import "CSUserQuery.h"

@interface CSTopHitQuery : CSUserQuery {
    NSMutableArray *_batches;
}




+(void)sortSearchableItemsByL2:(id)arg0 ;
-(BOOL)isTopHitQuery;
-(NSUInteger)dispatchApplyWidth;
-(id)initWithQueryString:(id)arg0 context:(id)arg1 ;
-(id)initWithQueryString:(id)arg0 queryContext:(id)arg1 ;
-(id)initWithUserQueryString:(id)arg0 queryContext:(id)arg1 ;
-(id)initWithUserString:(id)arg0 queryContext:(id)arg1 ;
-(void)filterRankedResults:(id)arg0 hitCount:(NSUInteger)arg1 ;
-(void)handleBatches:(id)arg0 ;
-(void)handleCompletion:(id)arg0 ;
-(void)handleFoundItems:(id)arg0 ;


@end


#endif