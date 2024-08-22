// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFTABLEDATASOURCE_H
#define WFTABLEDATASOURCE_H

@class NSString, NSMutableArray, NSArray, UITableView;
@protocol WFTreeObserver, UITableViewDataSource;

#import <Foundation/Foundation.h>

#import "WFTableDataSourceTreeNode.h"

@interface WFTableDataSource : NSObject <WFTreeObserver, UITableViewDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat indentationWidth; // ivar: _indentationWidth
@property (readonly, nonatomic) NSMutableArray *mutableSections; // ivar: _mutableSections
@property (copy, nonatomic) NSArray *sections;
@property (readonly) Class superclass;
@property (weak, nonatomic) UITableView *tableView; // ivar: _tableView
@property (readonly, nonatomic) WFTableDataSourceTreeNode *tree; // ivar: _tree


-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)cellIdentifierForItem:(id)arg0 ;
-(id)indexPathForItem:(id)arg0 ;
-(id)indexPathFromTableViewIndexPath:(id)arg0 ;
-(id)init;
-(id)initWithTableView:(id)arg0 ;
-(id)itemAtIndexPath:(id)arg0 ;
-(id)sectionAtIndex:(NSUInteger)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(id)treeNodeAtTableViewIndexPath:(id)arg0 ;
-(id)treeNodeAtTreeIndexPath:(id)arg0 ;
-(void)addSection:(id)arg0 ;
-(void)insertSection:(id)arg0 atIndex:(NSInteger)arg1 ;
-(void)performBatchUpdates:(id)arg0 ;
-(void)removeSection:(id)arg0 ;
-(void)removeSectionAtIndex:(NSInteger)arg0 ;
-(void)treeNode:(id)arg0 flattenedDescendentsDidChangeFrom:(id)arg1 to:(id)arg2 changeSource:(id)arg3 ;


@end


#endif