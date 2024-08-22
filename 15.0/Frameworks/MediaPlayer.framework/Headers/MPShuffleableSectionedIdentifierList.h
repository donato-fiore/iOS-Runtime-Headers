// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPSHUFFLEABLESECTIONEDIDENTIFIERLIST_H
#define MPSHUFFLEABLESECTIONEDIDENTIFIERLIST_H

@class NSString;
@protocol _MPSSILDelegate, MPShuffleableSectionedIdentifierListDelegate;


#import "MPSectionedIdentifierList.h"
#import "_MPSSILImplementation.h"

@interface MPShuffleableSectionedIdentifierList : MPSectionedIdentifierList <_MPSSILDelegate>

 {
    _MPSSILImplementation *_shuffledList;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MPShuffleableSectionedIdentifierListDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *shuffleStartingItemIdentifier; // ivar: _shuffleStartingItemIdentifier
@property (copy, nonatomic) NSString *shuffleStartingSectionIdentifier; // ivar: _shuffleStartingSectionIdentifier
@property (nonatomic) NSInteger shuffleType; // ivar: _shuffleType
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(NSInteger)_itemCountWithExclusiveAccessToken:(id)arg0 ;
-(id)_candidateItemsWithExclusiveAccessToken:(id)arg0 ;
-(id)_shuffledListWithExclusiveAccessToken:(id)arg0 ;
-(id)enumeratorWithOptions:(NSUInteger)arg0 startPosition:(id)arg1 endPosition:(id)arg2 withExclusiveAccessToken:(id)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(void)_dequeueCandidatesWithQuota:(NSInteger)arg0 withExclusiveAccessToken:(id)arg1 ;
-(void)addDataSource:(id)arg0 section:(id)arg1 afterHeadOfSection:(id)arg2 ;
-(void)addDataSource:(id)arg0 section:(id)arg1 afterItem:(id)arg2 inSection:(id)arg3 completion:(id)arg4 ;
-(void)addDataSource:(id)arg0 section:(id)arg1 afterTailOfSection:(id)arg2 completion:(id)arg3 ;
-(void)addDataSource:(id)arg0 section:(id)arg1 sequentially:(BOOL)arg2 afterItem:(id)arg3 inSection:(id)arg4 completion:(id)arg5 ;
-(void)addDataSource:(id)arg0 section:(id)arg1 sequentially:(BOOL)arg2 afterTailOfSection:(id)arg3 completion:(id)arg4 ;
-(void)addDataSourceAtEnd:(id)arg0 section:(id)arg1 completion:(id)arg2 ;
-(void)addDataSourceAtEnd:(id)arg0 section:(id)arg1 sequentially:(BOOL)arg2 completion:(id)arg3 ;
-(void)addDataSourceAtStart:(id)arg0 section:(id)arg1 completion:(id)arg2 ;
-(void)addDataSourceAtStart:(id)arg0 section:(id)arg1 sequentially:(BOOL)arg2 completion:(id)arg3 ;
-(void)dataSourceInsertItems:(id)arg0 afterItem:(id)arg1 inSection:(id)arg2 ;
-(void)dataSourceInsertItemsAtHead:(id)arg0 inSection:(id)arg1 ;
-(void)dataSourceInsertItemsAtTail:(id)arg0 inSection:(id)arg1 ;
-(void)dataSourceReloadItem:(id)arg0 inSection:(id)arg1 ;
-(void)dataSourceRemoveItem:(id)arg0 fromSection:(id)arg1 ;
-(void)didDequeueShuffledItemsInSSIL:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 withExclusiveAccessToken:(id)arg1 ;
-(void)moveItem:(id)arg0 fromSection:(id)arg1 afterHeadOfSection:(id)arg2 ;
-(void)moveItem:(id)arg0 fromSection:(id)arg1 afterItem:(id)arg2 inSection:(id)arg3 ;
-(void)moveItem:(id)arg0 fromSection:(id)arg1 afterTailOfSection:(id)arg2 ;
-(void)moveItemToEnd:(id)arg0 fromSection:(id)arg1 ;
-(void)moveItemToStart:(id)arg0 fromSection:(id)arg1 ;
-(void)removeItem:(id)arg0 fromSection:(id)arg1 ;
-(void)replaceDataSource:(id)arg0 forSection:(id)arg1 completion:(id)arg2 ;
-(void)safelyReshuffleAfterItem:(id)arg0 inSection:(id)arg1 ;


@end


#endif