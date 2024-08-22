// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFTABLEITEM_H
#define WFTABLEITEM_H

@class NSArray, NSMutableArray;

#import <Foundation/Foundation.h>

#import "WFTableItemTreeNode.h"
#import "WFTableSection.h"

@interface WFTableItem : NSObject

@property (nonatomic) NSInteger accessoryType; // ivar: _accessoryType
@property (readonly, nonatomic) Class cellClass; // ivar: _cellClass
@property (copy, nonatomic) NSArray *children;
@property (nonatomic, getter=isExpanded) BOOL expanded; // ivar: _expanded
@property (readonly, nonatomic) NSMutableArray *mutableChildren; // ivar: _mutableChildren
@property (readonly, nonatomic) WFTableItemTreeNode *node; // ivar: _node
@property (readonly, weak, nonatomic) WFTableSection *section;
@property (nonatomic, getter=isSelectable) BOOL selectable; // ivar: _selectable
@property (readonly, nonatomic) NSInteger style; // ivar: _style


+(id)itemWithCellClass:(Class)arg0 representedObject:(id)arg1 configurationBlock:(id)arg2 ;
+(id)itemWithPrimaryText:(id)arg0 ;
+(id)itemWithPrimaryText:(id)arg0 image:(id)arg1 ;
+(id)itemWithStyle:(NSInteger)arg0 primaryText:(id)arg1 ;
+(id)itemWithStyle:(NSInteger)arg0 primaryText:(id)arg1 image:(id)arg2 ;
+(id)itemWithStyle:(NSInteger)arg0 primaryText:(id)arg1 secondaryText:(id)arg2 ;
+(id)itemWithStyle:(NSInteger)arg0 primaryText:(id)arg1 secondaryText:(id)arg2 image:(id)arg3 ;
+(id)itemWithStyle:(NSInteger)arg0 representedObject:(id)arg1 configurationBlock:(id)arg2 ;
-(id)initWithCellClass:(Class)arg0 style:(NSInteger)arg1 ;
-(id)nextItemInSection;
-(void)addItem:(id)arg0 ;
-(void)configureCell:(id)arg0 ;
-(void)insertItem:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)performBatchUpdates:(id)arg0 ;
-(void)removeFromParent;
-(void)removeItem:(id)arg0 ;
-(void)removeItemAtIndex:(NSUInteger)arg0 ;
-(void)updateChildren;


@end


#endif