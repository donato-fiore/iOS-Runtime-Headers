// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UITABLEVIEWSUBVIEWMANAGER_H
#define _UITABLEVIEWSUBVIEWMANAGER_H

@class UITableView<_UITableViewSubviewManagerDelegate>, NSCountedSet, NSMapTable, NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "UITableViewCell.h"

@interface _UITableViewSubviewManager : NSObject {
    UITableViewCell *_reorderingCell;
    UITableView<_UITableViewSubviewManagerDelegate> *_tableView;
    NSCountedSet *_reusePreventedCells;
    NSMapTable *_cellsReadyForReuse;
    NSMutableDictionary *_prefetchedCells;
    NSMapTable *_indexPathsForPrefetchedCells;
}






@end


#endif