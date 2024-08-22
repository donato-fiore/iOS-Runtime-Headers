// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MPSSILIMPLEMENTATION_H
#define _MPSSILIMPLEMENTATION_H

@class NSMutableArray;
@protocol _MPSSILDelegate;


#import "MPSectionedIdentifierList.h"
#import "MPRandomDistribution.h"

@interface _MPSSILImplementation : MPSectionedIdentifierList

@property (retain, nonatomic) NSMutableArray *candidateItems; // ivar: _candidateItems
@property (weak, nonatomic) NSObject<_MPSSILDelegate> *delegate;
@property (readonly, nonatomic) MPRandomDistribution *randomDistribution; // ivar: _randomDistribution


+(BOOL)supportsSecureCoding;
-(BOOL)_isSequentialSection:(id)arg0 withExclusiveAccessToken:(id)arg1 ;
-(NSInteger)itemCount;
-(id)_createShuffleCloneForItem:(id)arg0 inSection:(id)arg1 withExclusiveAccessToken:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSectionedIdentifierList:(id)arg0 randomSource:(id)arg1 startingItemEntry:(id)arg2 withExclusiveAccessToken:(id)arg3 ;
-(void)_addShuffleSection:(id)arg0 dataSource:(id)arg1 withExclusiveAccessToken:(id)arg2 ;
-(void)_appendShuffledItems:(id)arg0 withExclusiveAccessToken:(id)arg1 ;
-(void)_beforeInitWithCoder:(id)arg0 ;
-(void)_dequeueCandidatesWithQuota:(NSInteger)arg0 withExclusiveAccessToken:(id)arg1 ;
-(void)_enumerator:(id)arg0 didEncounterEntry:(id)arg1 withExclusiveAccessToken:(id)arg2 ;
-(void)_reverseEnumeratorWillStartAtEnd:(id)arg0 withExclusiveAccessToken:(id)arg1 ;
-(void)addDataSource:(id)arg0 section:(id)arg1 sequentially:(BOOL)arg2 afterItem:(id)arg3 inSection:(id)arg4 ;
-(void)addDataSource:(id)arg0 section:(id)arg1 sequentially:(BOOL)arg2 afterTailOfSection:(id)arg3 ;
-(void)addDataSourceAtEnd:(id)arg0 section:(id)arg1 sequentially:(BOOL)arg2 ;
-(void)addDataSourceAtStart:(id)arg0 section:(id)arg1 sequentially:(BOOL)arg2 ;
-(void)dataSourceInsertItems:(id)arg0 afterItem:(id)arg1 inSection:(id)arg2 ;
-(void)dataSourceInsertItemsAtHead:(id)arg0 inSection:(id)arg1 ;
-(void)dataSourceInsertItemsAtTail:(id)arg0 inSection:(id)arg1 ;
-(void)dataSourceReloadItem:(id)arg0 inSection:(id)arg1 ;
-(void)dataSourceRemoveItem:(id)arg0 fromSection:(id)arg1 ;
-(void)dequeueCandidatesWithQuota:(NSInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 withExclusiveAccessToken:(id)arg1 ;
-(void)safelyReshuffleAfterItem:(id)arg0 inSection:(id)arg1 ;


@end


#endif