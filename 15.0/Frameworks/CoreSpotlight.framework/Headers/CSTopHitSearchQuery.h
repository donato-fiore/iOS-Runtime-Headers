// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CSTOPHITSEARCHQUERY_H
#define CSTOPHITSEARCHQUERY_H

@class NSMutableArray;


#import "CSUserQuery.h"

@interface CSTopHitSearchQuery : CSUserQuery {
    NSMutableArray *_batches;
    NSUInteger _foundItemCount;
    id *foundItemsHandler;
    id *completionHandler;
}




-(BOOL)isTopHitQuery;
-(NSUInteger)foundItemCount;
-(id)completionHandler:(SEL)arg0 ;
-(id)foundItemsHandler:(SEL)arg0 ;
-(id)initWithQueryString:(id)arg0 context:(id)arg1 ;
-(id)initWithSearchString:(id)arg0 keyboardLanguage:(id)arg1 attributes:(id)arg2 hitCount:(NSUInteger)arg3 ;
-(void)_handleBatches:(id)arg0 ;
-(void)handleCompletion:(id)arg0 ;
-(void)handleFoundItems:(id)arg0 ;
-(void)setCompletionHandler:(id)arg0 ;
-(void)setFoundItemsHandler:(id)arg0 ;
-(void)userEngagedWithResult:(id)arg0 interactionType:(int)arg1 ;


@end


#endif