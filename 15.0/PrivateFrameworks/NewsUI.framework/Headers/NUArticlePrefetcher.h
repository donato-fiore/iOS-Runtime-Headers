// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NUARTICLEPREFETCHER_H
#define NUARTICLEPREFETCHER_H

@class NSMutableDictionary, NSString, NSCountedSet, FCKeyedOperationQueue, NSTimer;
@protocol FCKeyedOperationQueueDelegate, NUArticlePrefetcherType, NUArticleDataProviderFactory, NUArticleFactory, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NUArticlePrefetcher : NSObject <FCKeyedOperationQueueDelegate, NUArticlePrefetcherType>



@property (retain, nonatomic) NSMutableDictionary *articleDataProviderCache; // ivar: _articleDataProviderCache
@property (retain, nonatomic) NSObject<NUArticleDataProviderFactory> *articleDataProviderFactory; // ivar: _articleDataProviderFactory
@property (retain, nonatomic) NSObject<NUArticleFactory> *articleFactory; // ivar: _articleFactory
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableDictionary *headlinesForArticles; // ivar: _headlinesForArticles
@property (nonatomic) NSUInteger highWaterMark; // ivar: _highWaterMark
@property (retain, nonatomic) NSMutableDictionary *interestModificationDates; // ivar: _interestModificationDates
@property (retain, nonatomic) NSCountedSet *interestedArticleIDs; // ivar: _interestedArticleIDs
@property (retain, nonatomic) FCKeyedOperationQueue *prefetchQueue; // ivar: _prefetchQueue
@property (retain, nonatomic) NSTimer *reprocessTimer; // ivar: _reprocessTimer
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


-(id)init;
-(id)initWithArticleFactory:(id)arg0 articleDataProviderFactory:(id)arg1 ;
-(id)keyedOperationQueue:(id)arg0 performAsyncOperationForKey:(id)arg1 completion:(id)arg2 ;
-(id)prefetchedArticleDataProviderForArticleID:(id)arg0 ;
-(void)_didChangeInterestedArticleIDs;
-(void)_flushDataProviderIfNeededForHeadline:(id)arg0 ;
-(void)_flushUnusedDataProvidersIfNeeded;
-(void)_reprocessInterestedArticleIDs;
-(void)_revisitSuspendedState;
-(void)addPrefetchInterestInArticleID:(id)arg0 headline:(id)arg1 ;
-(void)removePrefetchInterestInArticleID:(id)arg0 ;


@end


#endif