// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MRUUPNEXTPICKER_H
#define MRUUPNEXTPICKER_H

@class UIView, NSString, UITableView;
@protocol UITableViewDelegate, MRUUpNextDataSourceDelegate, MRUDiffableDataSourceDelegate;


#import "MRUUpNextDataSource.h"
#import "MRUDiffableDataSource.h"

@interface MRUUpNextPicker : UIView <UITableViewDelegate, MRUUpNextDataSourceDelegate, MRUDiffableDataSourceDelegate>



@property (readonly, nonatomic) MRUUpNextDataSource *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) MRUDiffableDataSource *diffableDataSource; // ivar: _diffableDataSource
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) UITableView *tableView; // ivar: _tableView


-(BOOL)tableView:(id)arg0 shouldIndentWhileEditingRowAtIndexPath:(id)arg1 ;
-(NSInteger)tableView:(id)arg0 editingStyleForRowAtIndexPath:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 dataSource:(id)arg1 ;
-(id)reponseItemForIndexPath:(id)arg0 ;
-(id)tableView:(id)arg0 willSelectRowAtIndexPath:(id)arg1 ;
-(void)configureCell:(id)arg0 forMovie:(id)arg1 ;
-(void)configureCell:(id)arg0 forSong:(id)arg1 ;
-(void)configureCell:(id)arg0 forTVEpisode:(id)arg1 ;
-(void)dataSource:(id)arg0 didDeleteItemWithIdentifier:(id)arg1 ;
-(void)dataSource:(id)arg0 moveItemToTopWithIdentifier:(id)arg1 ;
-(void)dataSource:(id)arg0 moveItemWithIdentifier:(id)arg1 aferIndentifier:(id)arg2 ;
-(void)layoutSubviews;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)upNextDataSource:(id)arg0 didChangeResponseItemIDs:(id)arg1 ;
-(void)updateDiffableDataSourceAnimated:(BOOL)arg0 ;


@end


#endif