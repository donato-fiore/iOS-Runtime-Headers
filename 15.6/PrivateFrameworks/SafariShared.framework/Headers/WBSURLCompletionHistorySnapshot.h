// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSURLCOMPLETIONHISTORYSNAPSHOT_H
#define WBSURLCOMPLETIONHISTORYSNAPSHOT_H

@class NSString;
@protocol WBSURLCompletionDataSource, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "WBSURLCompletionDatabase.h"

@interface WBSURLCompletionHistorySnapshot : NSObject <WBSURLCompletionDataSource>

 {
    NSObject<OS_dispatch_queue> *_completionDatabaseQueue;
    WBSURLCompletionDatabase *_completionDatabase;
    unique_ptr<std::vector<WTF::RefPtr<SafariShared::HistoryURLCompletionItem>>, std::default_delete<std::vector<WTF::RefPtr<SafariShared::HistoryURLCompletionItem>>>> _items;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_matchSnapshotForCompletionMatch:(id)arg0 ;
-(id)fakeBookmarkMatchDataWithURLString:(id)arg0 title:(id)arg1 shouldPreload:(BOOL)arg2 ;
-(id)init;
-(id)initWithItems:(struct unique_ptr<std::vector<WTF::RefPtr<SafariShared::HistoryURLCompletionItem>>, std::default_delete<std::vector<WTF::RefPtr<SafariShared::HistoryURLCompletionItem>>>> )arg0 ;
-(void)enumerateMatchDataForTypedStringHint:(id)arg0 options:(NSUInteger)arg1 withBlock:(id)arg2 ;
-(void)getBestMatchesForTypedString:(id)arg0 limit:(NSUInteger)arg1 forQueryID:(NSInteger)arg2 withSearchParameters:(id)arg3 completionHandler:(id)arg4 ;


@end


#endif