// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SSSECTIONEDDATASOURCE_H
#define SSSECTIONEDDATASOURCE_H

@class NSMutableArray;


#import "SSBaseDataSource.h"

@interface SSSectionedDataSource : SSBaseDataSource

@property (readonly, nonatomic) NSMutableArray *sections; // ivar: _sections
@property (nonatomic) BOOL shouldRemoveEmptySections; // ivar: _shouldRemoveEmptySections


-(BOOL)adjustSectionAtIndex:(NSUInteger)arg0 toNumberOfItems:(NSUInteger)arg1 ;
-(CGFloat)heightForFooterInSection:(NSInteger)arg0 ;
-(CGFloat)heightForHeaderInSection:(NSInteger)arg0 ;
-(NSUInteger)indexOfSectionWithIdentifier:(id)arg0 ;
-(NSUInteger)numberOfItemsInSection:(NSInteger)arg0 ;
-(NSUInteger)numberOfSections;
-(id)headerFooterViewWithClass:(Class)arg0 ;
-(id)init;
-(id)initWithItems:(id)arg0 ;
-(id)initWithSection:(id)arg0 ;
-(id)initWithSections:(id)arg0 ;
-(id)itemAtIndexPath:(id)arg0 ;
-(id)sectionAtIndex:(NSInteger)arg0 ;
-(id)sectionWithIdentifier:(id)arg0 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(id)titleForFooterInSection:(NSInteger)arg0 ;
-(id)titleForHeaderInSection:(NSInteger)arg0 ;
-(id)viewForFooterInSection:(NSInteger)arg0 ;
-(id)viewForHeaderInSection:(NSInteger)arg0 ;
-(void)appendItems:(id)arg0 toSection:(NSInteger)arg1 ;
-(void)appendSection:(id)arg0 ;
-(void)clearSections;
-(void)insertItem:(id)arg0 atIndexPath:(id)arg1 ;
-(void)insertItems:(id)arg0 atIndexes:(id)arg1 inSection:(NSInteger)arg2 ;
-(void)insertSection:(id)arg0 atIndex:(NSInteger)arg1 ;
-(void)insertSections:(id)arg0 atIndexes:(id)arg1 ;
-(void)moveSectionAtIndex:(NSInteger)arg0 toIndex:(NSInteger)arg1 ;
-(void)removeAllSections;
-(void)removeItemAtIndexPath:(id)arg0 ;
-(void)removeItemsAtIndexes:(id)arg0 inSection:(NSInteger)arg1 ;
-(void)removeItemsInRange:(struct _NSRange )arg0 inSection:(NSInteger)arg1 ;
-(void)removeSectionAtIndex:(NSInteger)arg0 ;
-(void)removeSectionWithIdentifier:(id)arg0 ;
-(void)removeSectionsAtIndexes:(id)arg0 ;
-(void)removeSectionsInRange:(struct _NSRange )arg0 ;
-(void)replaceItemAtIndexPath:(id)arg0 withItem:(id)arg1 ;
-(void)tableView:(id)arg0 moveRowAtIndexPath:(id)arg1 toIndexPath:(id)arg2 ;


@end


#endif