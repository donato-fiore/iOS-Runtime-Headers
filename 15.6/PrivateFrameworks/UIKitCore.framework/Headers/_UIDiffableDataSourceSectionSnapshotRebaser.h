// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIDIFFABLEDATASOURCESECTIONSNAPSHOTREBASER_H
#define _UIDIFFABLEDATASOURCESECTIONSNAPSHOTREBASER_H

@class NSMapTable;

#import <Foundation/Foundation.h>

#import "NSDiffableDataSourceSnapshot.h"
#import "_UIDiffableDataSourceDiffer.h"

@interface _UIDiffableDataSourceSectionSnapshotRebaser : NSObject {
    NSDiffableDataSourceSnapshot *_initialSnapshot;
    NSDiffableDataSourceSnapshot *_finalSnapshot;
    _UIDiffableDataSourceDiffer *_dataSourceDiffer;
    NSMapTable *_initialSectionSnapshots;
}


@property (readonly, nonatomic) NSMapTable *rebasedSectionSnapshots; // ivar: _rebasedSectionSnapshots


-(id)_computeSectionTransactionsIncludingSectionDifferences:(BOOL)arg0 ;
-(id)_transactionIncludingSectionDifferences:(BOOL)arg0 source:(NSInteger)arg1 ;
-(id)computeApplyTransactionIncludingSectionDifferences:(BOOL)arg0 ;
-(id)computeReorderingTransaction;
-(id)initWithInitialSnapshot:(id)arg0 finalSnapshot:(id)arg1 initialSectionSnapshots:(id)arg2 ;
-(id)initWithInitialSnapshot:(id)arg0 finalSnapshot:(id)arg1 initialSectionSnapshots:(id)arg2 dataSourceDiffer:(id)arg3 ;
-(id)initWithInitialSnapshot:(id)arg0 finalSnapshot:(id)arg1 initialSectionSnapshots:(id)arg2 dataSourceDiffer:(id)arg3 shouldPerformChildSnapshotMoves:(BOOL)arg4 ;
-(void)_rebaseForInitialSnapshot:(id)arg0 finalSnapshot:(id)arg1 initialSectionSnapshots:(id)arg2 dataSourceDiffer:(id)arg3 shouldPerformChildSnapshotMoves:(BOOL)arg4 ;


@end


#endif