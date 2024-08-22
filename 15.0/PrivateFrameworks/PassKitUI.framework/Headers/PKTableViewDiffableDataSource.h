// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKTABLEVIEWDIFFABLEDATASOURCE_H
#define PKTABLEVIEWDIFFABLEDATASOURCE_H

@class UITableViewDiffableDataSource;



@interface PKTableViewDiffableDataSource : UITableViewDiffableDataSource

@property (copy, nonatomic) id *commitEditingHandler; // ivar: _commitEditingHandler


-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)tableView:(id)arg0 commitEditingStyle:(NSInteger)arg1 forRowAtIndexPath:(id)arg2 ;


@end


#endif