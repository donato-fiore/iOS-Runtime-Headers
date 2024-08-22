// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUTABLEVIEWDIFFABLEDATASOURCE_H
#define HUTABLEVIEWDIFFABLEDATASOURCE_H

@class UITableViewDiffableDataSource;
@protocol HUTableViewDiffableDataSourceDelegate;



@interface HUTableViewDiffableDataSource : UITableViewDiffableDataSource

@property (weak, nonatomic) NSObject<HUTableViewDiffableDataSourceDelegate> *delegate; // ivar: _delegate


-(BOOL)respondsToSelector:(SEL)arg0 ;
-(BOOL)tableView:(id)arg0 canEditRowAtIndexPath:(id)arg1 ;
-(BOOL)tableView:(id)arg0 canMoveRowAtIndexPath:(id)arg1 ;
// -(id)initWithTableView:(id)arg0 cellProvider:(id)arg1 delegate:(unk)arg2  ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)tableView:(id)arg0 commitEditingStyle:(NSInteger)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg0 moveRowAtIndexPath:(id)arg1 toIndexPath:(id)arg2 ;


@end


#endif