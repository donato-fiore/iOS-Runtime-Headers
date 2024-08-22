// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCARTICLE_H
#define FCARTICLE_H

@class NSString, NSError;
@protocol OS_dispatch_group, FCHeadlineProviding;

#import <Foundation/Foundation.h>

#import "FCArticleContent.h"
#import "FCFetchOperation.h"

@interface FCArticle : NSObject

@property (readonly, nonatomic) NSString *articleID; // ivar: _articleID
@property (retain, nonatomic) FCArticleContent *content; // ivar: _content
@property (retain, nonatomic) NSError *fetchError; // ivar: _fetchError
@property (retain, nonatomic) NSObject<OS_dispatch_group> *fetchGroup; // ivar: _fetchGroup
@property (retain, nonatomic) NSObject<FCHeadlineProviding> *headline; // ivar: _headline
@property (retain, nonatomic) FCFetchOperation *headlineFetchOperation; // ivar: _headlineFetchOperation


-(id)init;
-(id)initWithContext:(id)arg0 articleID:(id)arg1 forceArticleUpdate:(BOOL)arg2 qualityOfService:(NSInteger)arg3 relativePriority:(NSInteger)arg4 ;
-(id)initWithContext:(id)arg0 headline:(id)arg1 ;
-(void)dealloc;
-(void)performBlockWhenContentIsLoaded:(id)arg0 ;
-(void)performBlockWhenFullyLoaded:(id)arg0 ;


@end


#endif