// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UITABLEVIEWUPDATESUPPORT_H
#define _UITABLEVIEWUPDATESUPPORT_H

@class NSArray, NSMutableIndexSet, NSMutableArray;
@protocol _UITableViewIgnoreDragsToken;

#import <Foundation/Foundation.h>

#import "UITableView.h"
#import "UITableViewRowData.h"

@interface _UITableViewUpdateSupport : NSObject {
    NSInteger oldSection;
    NSInteger newSection;
    NSInteger oldGlobalRow;
    NSInteger newGlobalRow;
    UITableView *tableView;
    _NSRange visibleRows;
    NSArray *updateItems;
    UITableViewRowData *oldRowData;
    UITableViewRowData *newRowData;
    _NSRange oldRowRange;
    _NSRange newRowRange;
    NSMutableIndexSet *rows;
    NSMutableIndexSet *movedRows;
    NSMutableIndexSet *movedSections;
    CGRect oldTableViewVisibleBounds;
    CGRect newTableViewVisibleBounds;
    CGRect tableViewVisibleBoundsUnion;
    CGFloat tableViewVisibleBoundsOffset;
    NSInteger oldSectionCount;
    NSInteger newSectionCount;
    *NSInteger oldSectionMap;
    *NSInteger newSectionMap;
    NSInteger oldGlobalRowCount;
    NSInteger newGlobalRowCount;
    *NSInteger oldGlobalRowMap;
    *NSInteger newGlobalRowMap;
    *id animatedCells;
    *id animatedHeaders;
    *id animatedFooters;
    NSInteger globalReorderingRow;
    id *_context;
    id<_UITableViewIgnoreDragsToken> *_ignoringDragsToken;
    NSMutableArray *viewAnimations;
    NSMutableArray *deletedSections;
    NSMutableArray *insertedSections;
    NSMutableArray *gaps;
}




-(void)dealloc;


@end


#endif