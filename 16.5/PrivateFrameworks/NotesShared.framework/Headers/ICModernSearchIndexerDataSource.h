// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICMODERNSEARCHINDEXERDATASOURCE_H
#define ICMODERNSEARCHINDEXERDATASOURCE_H

@class ICBaseSearchIndexerDataSource;



@interface ICModernSearchIndexerDataSource : ICBaseSearchIndexerDataSource



-(BOOL)isFolderWithServerShareChanged:(id)arg0 ;
-(BOOL)isPaperKitOrSynapseAttachment:(id)arg0 ;
-(NSUInteger)indexingPriority;
-(id)addNotesFromSubtree:(id)arg0 ;
-(id)additionalItemsForObject:(id)arg0 ;
-(id)additionalUniqueIdentifiersToDeleteForObject:(id)arg0 ;
-(id)allIndexableObjectIDsInReversedReindexingOrderWithContext:(id)arg0 ;
-(id)dataSourceIdentifier;
-(id)newManagedObjectContext;
-(id)persistentStoreCoordinator;
-(id)searchableItemForSynapseContentItem:(id)arg0 note:(id)arg1 attachment:(id)arg2 ;
-(id)searchableItemResultForObject:(id)arg0 ;
-(id)synapseItemsForObject:(id)arg0 ;
-(void)contextWillSave:(id)arg0 ;


@end


#endif