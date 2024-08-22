// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKTABLEVIEWDIFFABLEDATASOURCE_H
#define PKTABLEVIEWDIFFABLEDATASOURCE_H

@class UITableViewDiffableDataSource;



@interface PKTableViewDiffableDataSource : UITableViewDiffableDataSource

@property (copy, nonatomic) id *commitEditingHandler; // ivar: _commitEditingHandler
@property (copy, nonatomic) id *sectionFooterProvider; // ivar: _sectionFooterProvider
@property (copy, nonatomic) id *sectionHeaderProvider; // ivar: _sectionHeaderProvider


-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)tableView:(id)arg0 commitEditingStyle:(NSInteger)arg1 forRowAtIndexPath:(id)arg2 ;


@end


#endif