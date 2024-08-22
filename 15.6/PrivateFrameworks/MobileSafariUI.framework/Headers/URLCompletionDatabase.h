// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef URLCOMPLETIONDATABASE_H
#define URLCOMPLETIONDATABASE_H

@class WBSURLCompletionDatabase, NSArray, NSCache, NSString;
@protocol WBSURLCompletionDataSource, OS_dispatch_queue, WBBookmarkProvider;


#import "CloudTabStore.h"

@interface URLCompletionDatabase : WBSURLCompletionDatabase <WBSURLCompletionDataSource>

 {
    CloudTabStore *_cloudTabStore;
    NSArray *_cloudDevices;
    NSObject<OS_dispatch_queue> *_cloudTabsAccessQueue;
    NSCache *_bookmarksCache;
    id<WBBookmarkProvider> *_bookmarkProvider;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) int searchableCollectionsMask; // ivar: _searchableCollectionsMask
@property (readonly) Class superclass;


-(id)fakeBookmarkMatchDataWithURLString:(id)arg0 title:(id)arg1 shouldPreload:(BOOL)arg2 ;
-(id)initWithCloudTabStore:(id)arg0 searchableCollectionsMask:(int)arg1 bookmarkProvider:(id)arg2 ;
-(void)_updateCloudDevices:(id)arg0 ;
-(void)clearBookmarksCache;
-(void)dealloc;
-(void)enumerateMatchDataForTypedStringHint:(id)arg0 options:(NSUInteger)arg1 withBlock:(id)arg2 ;


@end


#endif