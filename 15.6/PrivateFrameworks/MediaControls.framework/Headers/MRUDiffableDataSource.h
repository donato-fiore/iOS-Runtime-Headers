// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MRUDIFFABLEDATASOURCE_H
#define MRUDIFFABLEDATASOURCE_H

@class UITableViewDiffableDataSource;
@protocol MRUDiffableDataSourceDelegate;



@interface MRUDiffableDataSource : UITableViewDiffableDataSource

@property (weak, nonatomic) NSObject<MRUDiffableDataSourceDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL supportsEditing; // ivar: _supportsEditing
@property (nonatomic) BOOL supportsReordering; // ivar: _supportsReordering


-(BOOL)tableView:(id)arg0 canEditRowAtIndexPath:(id)arg1 ;
-(BOOL)tableView:(id)arg0 canMoveRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 commitEditingStyle:(NSInteger)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg0 moveRowAtIndexPath:(id)arg1 toIndexPath:(id)arg2 ;


@end


#endif