// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ML3QUERYRESULTSET_H
#define ML3QUERYRESULTSET_H

@class NSMutableArray;
@protocol NSCopying, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "ML3QueryResultSet_BackingStore.h"
#import "ML3Query.h"

@interface ML3QueryResultSet : NSObject <NSCopying>

 {
    ML3QueryResultSet_BackingStore *_backingStore;
    BOOL _supportsIncrementalUpdate;
    NSMutableArray *_updateToLibraryCurrentRevisionCompletionBlocks;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_fixedPriorityQueue;
}


@property (readonly, nonatomic) NSUInteger count;
@property (readonly, nonatomic) NSInteger localRevision; // ivar: _localRevision
@property (readonly, nonatomic) ML3Query *query; // ivar: _query
@property (readonly, nonatomic) NSInteger revision; // ivar: _revision


-(BOOL)_updateToLibraryCurrentRevision;
-(BOOL)updateToLibraryCurrentRevision;
-(NSInteger)persistentIDAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)entityLimit;
-(id)_initWithQuery:(id)arg0 supportsIncrementalUpdate:(BOOL)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithQuery:(id)arg0 ;
-(void)_loadCurrentFullResults;
-(void)_mergeChangesWithFromNewPIDs:(*void)arg0 changedPIDs:(*void)arg1 ;
-(void)_onQueueAddUpdateFinishedBlock:(id)arg0 ;
-(void)_onQueueInvokeAndClearUpdateFinishedBlocksWithDidUpdateResult:(BOOL)arg0 ;
-(void)enumeratePersistentIDsUsingBlock:(id)arg0 ;
-(void)enumerateSectionsUsingBlock:(id)arg0 ;


@end


#endif