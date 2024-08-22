// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCFEATUREDARTICLESOPERATION_H
#define FCFEATUREDARTICLESOPERATION_H

@class NSArray;
@protocol FCContentContext;


#import "FCOperation.h"

@interface FCFeaturedArticlesOperation : FCOperation {
    NSArray *_networkEvents;
    id<FCContentContext> *_context;
    NSArray *_resultFeedItems;
}


@property (copy, nonatomic) id *fetchCompletionHandler; // ivar: _fetchCompletionHandler
@property (readonly, nonatomic) NSArray *networkEvents;


-(BOOL)validateOperation;
-(id)init;
-(id)initWithContext:(id)arg0 ;
-(void)operationWillFinishWithError:(id)arg0 ;
-(void)performOperation;


@end


#endif