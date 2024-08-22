// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFTABLESECTION_H
#define WFTABLESECTION_H

@class NSString, NSMutableArray;
@protocol WFTreeObserver;

#import <Foundation/Foundation.h>

#import "WFTableDataSource.h"
#import "WFTableSectionTreeNode.h"

@interface WFTableSection : NSObject <WFTreeObserver>



@property (readonly, weak, nonatomic) WFTableDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *footerText; // ivar: _footerText
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *headerText; // ivar: _headerText
@property (readonly, nonatomic) NSMutableArray *mutableItems; // ivar: _mutableItems
@property (readonly, nonatomic) WFTableSectionTreeNode *node; // ivar: _node
@property (readonly) Class superclass;


+(id)section;
+(id)sectionWithCellClass:(Class)arg0 representedObjects:(id)arg1 configurationBlock:(id)arg2 ;
+(id)sectionWithItems:(id)arg0 ;
+(id)sectionWithStyle:(NSInteger)arg0 representedObjects:(id)arg1 configurationBlock:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)currentIndex;
-(NSUInteger)recursiveChildrenCount;
-(id)initWithItems:(id)arg0 ;
-(id)tableView;
-(void)applyItems:(id)arg0 ;
-(void)performBatchUpdates:(id)arg0 ;
-(void)treeNode:(id)arg0 flattenedDescendentsDidChangeFrom:(id)arg1 to:(id)arg2 changeSource:(id)arg3 ;
-(void)updateCellForItem:(id)arg0 ;


@end


#endif