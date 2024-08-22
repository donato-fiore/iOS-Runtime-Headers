// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFTABLEVIEWDIFFABLEDATASOURCE_H
#define SFTABLEVIEWDIFFABLEDATASOURCE_H

@class UITableViewDiffableDataSource;
@protocol SFTableViewDiffableDataSourceDelegate;



@interface SFTableViewDiffableDataSource : UITableViewDiffableDataSource

@property (weak, nonatomic) NSObject<SFTableViewDiffableDataSourceDelegate> *delegate; // ivar: _delegate


-(BOOL)tableView:(id)arg0 canEditRowAtIndexPath:(id)arg1 ;
-(NSInteger)tableView:(id)arg0 sectionForSectionIndexTitle:(id)arg1 atIndex:(NSInteger)arg2 ;
-(id)sectionIndexTitlesForTableView:(id)arg0 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)tableView:(id)arg0 commitEditingStyle:(NSInteger)arg1 forRowAtIndexPath:(id)arg2 ;


@end


#endif