// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICINDEXITEMSOPERATION_H
#define ICINDEXITEMSOPERATION_H

@class NSOperation, NSMutableDictionary, NSArray, NSError, NSMutableArray, CSSearchableIndex;



@interface ICIndexItemsOperation : NSOperation

@property (retain, nonatomic) NSMutableDictionary *contextCache; // ivar: _contextCache
@property (copy, nonatomic) NSArray *dataSources; // ivar: _dataSources
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (retain, nonatomic) NSMutableArray *objectIDURIsToDelete; // ivar: _objectIDURIsToDelete
@property (retain, nonatomic) NSMutableArray *objectIDsToIndex; // ivar: _objectIDsToIndex
@property (retain, nonatomic) CSSearchableIndex *searchableIndex; // ivar: _searchableIndex
@property (retain, nonatomic) NSMutableArray *searchableItemsToIndex; // ivar: _searchableItemsToIndex
@property (nonatomic) NSUInteger totalSizeOfSearchableItemsToIndex; // ivar: _totalSizeOfSearchableItemsToIndex


-(BOOL)_shouldCommitDeletionWithHasItemsToDeleteThenUpdate:(BOOL)arg0 shouldForceCommit:(BOOL)arg1 ;
-(BOOL)_shouldCommitIndexingWithHasItemsToDeleteThenUpdate:(BOOL)arg0 shouldForceCommit:(BOOL)arg1 ;
-(id)init;
-(id)initWithSearchableIndex:(id)arg0 dataSources:(id)arg1 ;
-(id)managedObjectContextForDataSource:(id)arg0 ;
-(void)_commitObjectIDURIsToDeleteForDataSource:(id)arg0 ;
-(void)_commitObjectIDsToIndexForDataSource:(id)arg0 ;
-(void)commitIfNecessaryForDataSource:(id)arg0 hasItemsToDeleteThenUpdate:(BOOL)arg1 forceCommit:(BOOL)arg2 ;
-(void)main;
-(void)processItems;


@end


#endif