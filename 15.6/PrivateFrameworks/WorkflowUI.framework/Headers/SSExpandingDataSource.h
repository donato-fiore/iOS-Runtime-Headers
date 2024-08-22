// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SSEXPANDINGDATASOURCE_H
#define SSEXPANDINGDATASOURCE_H



#import "SSSectionedDataSource.h"

@interface SSExpandingDataSource : SSSectionedDataSource

@property (copy, nonatomic) id *collapsedSectionCountBlock; // ivar: _collapsedSectionCountBlock


-(BOOL)isItemVisibleAtIndexPath:(id)arg0 ;
-(BOOL)isSectionExpandedAtIndex:(NSInteger)arg0 ;
-(NSUInteger)numberOfCollapsedRowsInSection:(NSInteger)arg0 ;
-(NSUInteger)numberOfItemsInSection:(NSInteger)arg0 ;
-(id)expandedSectionIndexes;
-(void)appendItems:(id)arg0 toSection:(NSInteger)arg1 ;
-(void)insertItem:(id)arg0 atIndexPath:(id)arg1 ;
-(void)insertItems:(id)arg0 atIndexes:(id)arg1 inSection:(NSInteger)arg2 ;
-(void)performBatchUpdates:(id)arg0 ;
-(void)removeItemAtIndexPath:(id)arg0 ;
-(void)removeItemsAtIndexes:(id)arg0 inSection:(NSInteger)arg1 ;
-(void)removeItemsInRange:(struct _NSRange )arg0 inSection:(NSInteger)arg1 ;
-(void)replaceItemAtIndexPath:(id)arg0 withItem:(id)arg1 ;
-(void)setSection:(id)arg0 expanded:(BOOL)arg1 ;
-(void)setSectionAtIndex:(NSInteger)arg0 expanded:(BOOL)arg1 ;
-(void)toggleSectionAtIndex:(NSInteger)arg0 ;


@end


#endif