// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFTABLEDATASOURCETREENODE_H
#define WFTABLEDATASOURCETREENODE_H

@class WFTreeNode, NSArray, NSIndexPath;
@protocol WFTreeObserver;


#import "WFTableDataSource.h"

@interface WFTableDataSourceTreeNode : WFTreeNode

@property (weak, nonatomic) WFTableDataSource *dataSource; // ivar: _dataSource
@property (readonly, nonatomic) NSArray *flattenedDescendents; // ivar: _flattenedDescendents
@property (readonly, nonatomic) NSIndexPath *indexPath;
@property (weak, nonatomic) NSObject<WFTreeObserver> *observer; // ivar: _observer


-(id)initWithRepresentedObject:(id)arg0 ;
-(void)childDescendentsDidChange:(id)arg0 oldValue:(id)arg1 changeSource:(id)arg2 ;
-(void)insertNode:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)removeNodeAtIndex:(NSUInteger)arg0 ;
-(void)setChildNodes:(id)arg0 ;


@end


#endif