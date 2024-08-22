// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PTUIMODULECONTROLLER_H
#define PTUIMODULECONTROLLER_H

@class UITableViewController, PTModule, NSString, PTSettings;
@protocol PTModuleObserver;



@interface PTUIModuleController : UITableViewController <PTModuleObserver>

 {
    PTModule *_module;
    NSString *_title;
    NSString *_rowTitle;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PTSettings *settings;
@property (readonly) Class superclass;


-(BOOL)_canShowWhileLocked;
-(BOOL)tableView:(id)arg0 shouldIndentWhileEditingRowAtIndexPath:(id)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_initWithModule:(id)arg0 presentingRow:(id)arg1 ;
-(id)initWithSettings:(id)arg0 ;
-(id)initWithSettings:(id)arg0 presentingRow:(id)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 viewForHeaderInSection:(NSInteger)arg1 ;
-(void)_reloadWithModule:(id)arg0 ;
-(void)_updateTitle;
-(void)module:(id)arg0 didInsertRows:(id)arg1 deleteRows:(id)arg2 ;
-(void)module:(id)arg0 didInsertSections:(id)arg1 deleteSections:(id)arg2 ;
-(void)moduleDidReload:(id)arg0 ;
-(void)showActionsForRowTableViewCell:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;


@end


#endif