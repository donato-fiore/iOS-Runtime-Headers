// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUTABLEVIEWCONTROLLER_H
#define SUTABLEVIEWCONTROLLER_H

@class NSIndexPath, NSString, UITableView;
@protocol UITableViewDataSource, UITableViewDelegate;


#import "SUViewController.h"
#import "SUTableDataSource.h"

@interface SUTableViewController : SUViewController <UITableViewDataSource, UITableViewDelegate>

 {
    NSInteger _disappearOrientation;
    NSIndexPath *_firstTapIndexPath;
    NSInteger _placeholderRowCount;
    BOOL _preferUserInteractionWhileScrolling;
}


@property (retain, nonatomic) SUTableDataSource *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger numberOfRows;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UITableView *tableView; // ivar: _tableView
@property (nonatomic) NSInteger tableViewStyle; // ivar: _tableViewStyle


-(BOOL)canSelectRowAtIndexPath:(id)arg0 ;
-(BOOL)deleteRowAtIndexPath:(id)arg0 ;
-(BOOL)handleSelectionForIndexPath:(id)arg0 tapCount:(NSInteger)arg1 ;
-(BOOL)indexPathIsPlaceholder:(id)arg0 ;
-(CGFloat)tableView:(id)arg0 heightForFooterInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForHeaderInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 editingStyleForRowAtIndexPath:(id)arg1 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(NSInteger)tableView:(id)arg0 sectionForSectionIndexTitle:(id)arg1 atIndex:(NSInteger)arg2 ;
-(id)copyArchivableContext;
-(id)copyDefaultScriptProperties;
-(id)copyScriptProperties;
-(id)init;
-(id)newTableView;
-(id)sectionIndexTitlesForTableView:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 viewForHeaderInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 willSelectRowAtIndexPath:(id)arg1 ;
-(int)clippedCornersForIndexPath:(id)arg0 ;
-(void)_deliverTapCount:(NSInteger)arg0 forIndexPath:(id)arg1 ;
-(void)_doubleTapTimeout;
-(void)_reloadPlaceholderCells;
-(void)dealloc;
-(void)didReceiveMemoryWarning;
-(void)loadView;
-(void)reloadData;
-(void)reloadForChangedRowCount:(NSInteger)arg0 ;
-(void)scrollToRowAtIndexPath:(id)arg0 atScrollPosition:(NSInteger)arg1 animated:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)setScriptProperties:(id)arg0 ;
-(void)tableView:(id)arg0 commitEditingStyle:(NSInteger)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)willAnimateRotationToInterfaceOrientation:(NSInteger)arg0 duration:(CGFloat)arg1 ;


@end


#endif