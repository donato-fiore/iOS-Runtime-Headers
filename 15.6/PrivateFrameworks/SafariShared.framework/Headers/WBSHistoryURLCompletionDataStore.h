// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSHISTORYURLCOMPLETIONDATASTORE_H
#define WBSHISTORYURLCOMPLETIONDATASTORE_H

@class NSDate;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "WBSHistoryService.h"
#import "WBSURLCompletionHistorySnapshot.h"

@interface WBSHistoryURLCompletionDataStore : NSObject {
    WBSHistoryService *_historyService;
    NSObject<OS_dispatch_queue> *_dataStoreQueue;
    NSDate *_snapshotLastModifiedDate;
    WBSURLCompletionHistorySnapshot *_snapshot;
}




-(id)initWithHistoryService:(id)arg0 ;
-(struct Ref<SafariShared::HistoryURLCompletionItem, WTF::RawPtrTraits<SafariShared::HistoryURLCompletionItem>> )_completionItemFromRow:(id)arg0 ;
-(struct RefPtr<SafariShared::HistoryURLCompletionItem, WTF::RawPtrTraits<SafariShared::HistoryURLCompletionItem>, WTF::DefaultRefDerefTraits<SafariShared::HistoryURLCompletionItem>> )_completionItemFromDatabase:(id)arg0 withVisitDatabaseID:(NSInteger)arg1 ;
-(void)_enumerateCompletionItemsForMostRecentVisitsFromDatabase:(id)arg0 usingBlock:(id)arg1 ;
-(void)_loadFromDatabaseIfNecessary;
-(void)getSnapshotWithCompletionHandler:(id)arg0 ;


@end


#endif