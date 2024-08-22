// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SEARCHSUGGESTIONPROVIDER_H
#define SEARCHSUGGESTIONPROVIDER_H

@class NSString, WBSCompletionQuery, NSURLSession, NSMutableSet;
@protocol NSURLSessionDataDelegate, OS_dispatch_queue, LoadProgressObserver;


#import "CompletionProvider.h"
#import "UniversalSearchSession.h"

@interface SearchSuggestionProvider : CompletionProvider <NSURLSessionDataDelegate>

 {
    NSString *_currentSearchString;
    WBSCompletionQuery *_currentCompletionQuery;
    NSString *_userAgentString;
    NSURLSession *_session;
}


@property (retain, nonatomic) NSObject<OS_dispatch_queue> *connectionQueue; // ivar: _connectionQueue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<LoadProgressObserver> *loadProgressObserver; // ivar: _loadProgressObserver
@property (retain, nonatomic) NSMutableSet *pendingTasks; // ivar: _pendingTasks
@property (readonly) Class superclass;
@property (weak, nonatomic) UniversalSearchSession *universalSearchSession; // ivar: _universalSearchSession


-(NSUInteger)maximumCachedCompletionCount;
-(id)completionsForQuery:(id)arg0 ;
-(id)init;
-(id)suggestionStringsForData:(id)arg0 ;
-(void)_didFinishSearchTask:(id)arg0 ;
-(void)_willStartSearchTask:(id)arg0 ;
-(void)dealloc;
-(void)setQueryToComplete:(id)arg0 ;
-(void)stop;


@end


#endif