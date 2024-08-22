// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LIVEFSFPSEARCHENUMERATORHELPER_H
#define LIVEFSFPSEARCHENUMERATORHELPER_H

@class NSFileProviderSearchQuery, NSMutableArray, NSSortDescriptor;
@protocol OS_dispatch_queue;


#import "LiveFSFPEnumeratorHelper.h"

@interface LiveFSFPSearchEnumeratorHelper : LiveFSFPEnumeratorHelper {
    NSFileProviderSearchQuery *_ourSearchQuery;
    NSMutableArray *searchResults;
    NSObject<OS_dispatch_queue> *_searchWorkQueue;
    NSMutableArray *_pendingReaderBlocks;
}


@property (retain) NSSortDescriptor *sortD; // ivar: _sortD


+(id)criteriaForQuery:(id)arg0 ;
+(id)newForQuery:(id)arg0 withExtension:(id)arg1 ;
-(id)copySearchCompletionBlock:(SEL)arg0 ;
-(id)copySearchResultBlock:(SEL)arg0 ;
-(id)initForQuery:(id)arg0 withExtension:(id)arg1 ;
-(void)enumerateItemsForObserver:(id)arg0 startingAtPage:(id)arg1 ;
-(void)finallyEnumerateItemsForObserver:(id)arg0 inRange:(struct _NSRange )arg1 ;
-(void)scheduleReaders;
-(void)start;
-(void)waitForSearchResultsForObserver:(id)arg0 startingAtPage:(id)arg1 ;


@end


#endif