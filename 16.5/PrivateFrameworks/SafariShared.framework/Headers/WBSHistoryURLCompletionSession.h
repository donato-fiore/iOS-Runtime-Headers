// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSHISTORYURLCOMPLETIONSESSION_H
#define WBSHISTORYURLCOMPLETIONSESSION_H

@class NSString;
@protocol WBSURLCompletionDataSource, WBSURLCompletionSessionProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "WBSHistoryService.h"
#import "WBSHistoryServiceDatabase.h"
#import "WBSURLCompletionDatabase.h"

@interface WBSHistoryURLCompletionSession : NSObject <WBSURLCompletionDataSource, WBSURLCompletionSessionProtocol>

 {
    WBSHistoryService *_historyService;
    NSObject<OS_dispatch_queue> *_internalQueue;
    WBSHistoryServiceDatabase *_database;
    WBSURLCompletionDatabase *_urlCompletionDatabase;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_databaseConnectionOptions;
-(id)_matchSnapshotForCompletionMatch:(id)arg0 ;
-(id)fakeBookmarkMatchDataWithURLString:(id)arg0 title:(id)arg1 shouldPreload:(BOOL)arg2 ;
-(id)initWithHistoryService:(id)arg0 ;
-(void)_ensureDatabaseIsWarmed;
-(void)_getBestMatchesForTypedString:(id)arg0 limit:(NSUInteger)arg1 forQueryID:(NSInteger)arg2 withSearchParameters:(id)arg3 completionHandler:(id)arg4 ;
-(void)enumerateMatchDataForTypedStringHint:(id)arg0 options:(NSUInteger)arg1 withBlock:(id)arg2 ;
-(void)getBestMatchesForTypedString:(id)arg0 limit:(NSUInteger)arg1 forQueryID:(NSInteger)arg2 withSearchParameters:(id)arg3 completionHandler:(id)arg4 ;


@end


#endif