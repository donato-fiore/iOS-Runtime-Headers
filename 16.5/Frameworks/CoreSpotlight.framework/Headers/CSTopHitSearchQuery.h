// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSTOPHITSEARCHQUERY_H
#define CSTOPHITSEARCHQUERY_H

@class NSMutableArray;


#import "CSUserQuery.h"

@interface CSTopHitSearchQuery : CSUserQuery {
    NSMutableArray *_batches;
}




-(BOOL)isTopHitQuery;
-(NSUInteger)dispatchApplyWidth;
-(id)initWithQueryString:(id)arg0 context:(id)arg1 ;
-(id)initWithSearchString:(id)arg0 keyboardLanguage:(id)arg1 attributes:(id)arg2 hitCount:(NSUInteger)arg3 ;
-(id)initWithUserString:(id)arg0 queryContext:(id)arg1 ;
-(void)_handleBatches:(id)arg0 ;
-(void)handleCompletion:(id)arg0 ;
-(void)handleFoundCompletions:(id)arg0 ;
-(void)handleFoundItems:(id)arg0 ;
-(void)handleFoundSuggestions:(id)arg0 ;
-(void)userEngagedWithResult:(id)arg0 interactionType:(int)arg1 ;


@end


#endif