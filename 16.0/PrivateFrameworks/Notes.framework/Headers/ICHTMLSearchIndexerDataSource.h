// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICHTMLSEARCHINDEXERDATASOURCE_H
#define ICHTMLSEARCHINDEXERDATASOURCE_H

@class ICBaseSearchIndexerDataSource;



@interface ICHTMLSearchIndexerDataSource : ICBaseSearchIndexerDataSource



-(BOOL)isFolderWithServerShareChanged:(id)arg0 ;
-(NSUInteger)indexingPriority;
-(id)addNotesFromSubtree:(id)arg0 ;
-(id)allIndexableObjectIDsInReversedReindexingOrderWithContext:(id)arg0 ;
-(id)dataSourceIdentifier;
-(id)indexableObjectIDsMatchingPredicate:(id)arg0 sortByReversedReindexingOrder:(BOOL)arg1 context:(id)arg2 ;
-(id)newManagedObjectContext;
-(id)persistentStoreCoordinator;
-(void)contextWillSave:(id)arg0 ;


@end


#endif