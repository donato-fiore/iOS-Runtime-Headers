// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef URLCOMPLETIONPROVIDER_H
#define URLCOMPLETIONPROVIDER_H

@class NSString, WBSCompletionQuery, NSArray;
@protocol WBBookmarkProvider, OS_dispatch_queue, WBSParsecSearchSession;


#import "CompletionProvider.h"
#import "URLCompletionDatabase.h"

@interface URLCompletionProvider : CompletionProvider {
    id<WBBookmarkProvider> *_bookmarkProvider;
    NSUInteger _maxResults;
    NSString *_currentPrefix;
    BOOL _historyWasModified;
    BOOL _bookmarksWereModified;
    _opaque_pthread_mutex_t _prefixMutex;
    NSUInteger _urlCompletionBackgroundTaskIdentifier;
    URLCompletionDatabase *_completionDatabase;
    NSObject<OS_dispatch_queue> *_completionQueue;
    NSObject<OS_dispatch_queue> *_cfCompletionQueue;
    BOOL _needScheduleBackgroundTaskOnAppSuspend;
    WBSCompletionQuery *_query;
}


@property (retain, nonatomic) NSObject<WBSParsecSearchSession> *parsecSearchSession; // ivar: _parsecSearchSession
@property (nonatomic) BOOL providesTopHits; // ivar: _providesTopHits
@property (retain, nonatomic) NSArray *searchParametersList; // ivar: _searchParametersList


-(NSUInteger)cfErrorForQuery:(id)arg0 ;
-(NSUInteger)maximumCachedCompletionCount;
-(id)_doUpdateForPrefix:(id)arg0 withSearchParameters:(id)arg1 ;
-(id)completionsForQuery:(id)arg0 isCFSearch:(BOOL)arg1 ;
-(id)findCompletionsForKey:(id)arg0 isCFSearch:(BOOL)arg1 ;
-(id)getKeyForQueryString:(id)arg0 isCFSearch:(BOOL)arg1 ;
-(id)initWithBookmarkProvider:(id)arg0 cloudTabStore:(id)arg1 maxResults:(NSUInteger)arg2 searchableCollectionsMask:(int)arg3 ;
-(void)_applicationDidEnterBackground:(id)arg0 ;
-(void)_bookmarksDidChange:(id)arg0 ;
-(void)_endURLCompletionBackgroundTask;
-(void)_historyDidChange:(id)arg0 ;
-(void)clearCachedCompletions;
-(void)dealloc;
-(void)setQueryToComplete:(id)arg0 ;


@end


#endif