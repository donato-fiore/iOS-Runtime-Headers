// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCOFFLINEISSUELIST_H
#define FCOFFLINEISSUELIST_H

@class NSHashTable, NSArray;

#import <Foundation/Foundation.h>

#import "FCKeyValueStore.h"

@interface FCOfflineIssueList : NSObject {
    FCKeyValueStore *_localStore;
    NSHashTable *_observers;
}


@property (readonly, nonatomic) NSArray *issueIDs;


-(BOOL)containsIssueID:(id)arg0 ;
-(BOOL)everContainedIssueID:(id)arg0 ;
-(NSInteger)sourceForIssueID:(id)arg0 ;
-(id)dateAddedForIssueID:(id)arg0 ;
-(id)dateRemovedForIssueID:(id)arg0 ;
-(id)init;
-(id)initWithStoreDirectoryFileURL:(id)arg0 ;
-(id)initWithStoreDirectoryFileURL:(id)arg0 appActivityMonitor:(id)arg1 backgroundTaskable:(id)arg2 ;
-(void)addIssueID:(id)arg0 source:(NSInteger)arg1 ;
-(void)addObserver:(id)arg0 ;
-(void)removeAllIssues;
-(void)removeIssueIDs:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif