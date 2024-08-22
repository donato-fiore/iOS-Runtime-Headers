// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FBKBUGFORMDIFFABLEDATASOURCE_H
#define FBKBUGFORMDIFFABLEDATASOURCE_H

@class UITableViewDiffableDataSource, NSString;


#import "FBKBugFormTableViewController.h"

@interface FBKBugFormDiffableDataSource : UITableViewDiffableDataSource

@property (retain, nonatomic) NSString *_attachmentSectionHeaderCached; // ivar: __attachmentSectionHeaderCached
@property (weak, nonatomic) FBKBugFormTableViewController *thisViewController; // ivar: _thisViewController


-(BOOL)tableView:(id)arg0 canEditRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)applySnapshot:(id)arg0 animatingDifferences:(BOOL)arg1 ;


@end


#endif