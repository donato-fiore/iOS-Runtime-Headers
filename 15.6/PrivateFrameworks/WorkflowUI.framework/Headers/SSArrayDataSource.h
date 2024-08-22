// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SSARRAYDATASOURCE_H
#define SSARRAYDATASOURCE_H

@class NSMutableArray, NSString;


#import "SSBaseDataSource.h"

@interface SSArrayDataSource : SSBaseDataSource

@property (retain, nonatomic) NSMutableArray *items; // ivar: _items
@property (copy, nonatomic) NSString *keyPath; // ivar: _keyPath
@property (retain, nonatomic) id *target; // ivar: _target


-(NSUInteger)numberOfItemsInSection:(NSInteger)arg0 ;
-(NSUInteger)numberOfSections;
-(id)allItems;
-(id)indexPathForItemWithId:(id)arg0 ;
-(id)initWithItems:(id)arg0 ;
-(id)initWithTarget:(id)arg0 keyPath:(id)arg1 ;
-(id)itemAtIndexPath:(id)arg0 ;
-(void)appendItem:(id)arg0 ;
-(void)appendItems:(id)arg0 ;
-(void)clearItems;
-(void)dealloc;
-(void)insertItem:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)insertItems:(id)arg0 atIndexes:(id)arg1 ;
-(void)moveItemAtIndex:(NSUInteger)arg0 toIndex:(NSUInteger)arg1 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)registerKVO;
-(void)removeAllItems;
-(void)removeItemAtIndex:(NSUInteger)arg0 ;
-(void)removeItems:(id)arg0 ;
-(void)removeItemsAtIndexes:(id)arg0 ;
-(void)removeItemsInRange:(struct _NSRange )arg0 ;
-(void)replaceItemAtIndex:(NSUInteger)arg0 withItem:(id)arg1 ;
-(void)replaceItemsAtIndexes:(id)arg0 withItemsFromArray:(id)arg1 ;
-(void)replaceItemsInRange:(struct _NSRange )arg0 withItemsFromArray:(id)arg1 ;
-(void)tableView:(id)arg0 moveRowAtIndexPath:(id)arg1 toIndexPath:(id)arg2 ;
-(void)unregisterKVO;
-(void)updateItems:(id)arg0 ;


@end


#endif