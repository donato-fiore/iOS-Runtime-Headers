// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC7NEWSUI216MYMAGAZINESSTORE_H
#define _TTC7NEWSUI216MYMAGAZINESSTORE_H


#import <Foundation/Foundation.h>


@interface _TtC7NewsUI216MyMagazinesStore : NSObject {
    ? state;
    ? badgeIssueIDs;
    ? currentIssues;
    ? recentlyReadIssues;
    ? downloadedIssues;
    ? currentIssuesChecker;
    ? issueService;
    ? issueReadingHistory;
    ? subscriptionController;
    ? offlineIssueList;
    ? offlineIssueManager;
    ? paidBundleConfigManager;
    ? configManager;
    ? personalizationService;
    ? personalizationData;
    ? lazyPersistentStore;
    ? accessQueue;
    ? $__lazy_storage_$_lazyInitializingPromise;
    ? firstFullRefresh;
}




-(id)init;


@end


#endif