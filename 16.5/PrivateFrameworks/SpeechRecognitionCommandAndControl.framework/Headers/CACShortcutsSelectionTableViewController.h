// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CACSHORTCUTSSELECTIONTABLEVIEWCONTROLLER_H
#define CACSHORTCUTSSELECTIONTABLEVIEWCONTROLLER_H

@class UITableViewController, NSArray, NSIndexPath, AXSiriShortcut, NSString;
@protocol CACShortcutsSelectionDelegate;



@interface CACShortcutsSelectionTableViewController : UITableViewController

@property (retain, nonatomic) NSArray *cachedShortcuts; // ivar: _cachedShortcuts
@property (retain, nonatomic) NSIndexPath *previouslySelectedIndex; // ivar: _previouslySelectedIndex
@property (retain, nonatomic) AXSiriShortcut *previouslySelectedShortcut; // ivar: _previouslySelectedShortcut
@property (retain, nonatomic) NSObject<CACShortcutsSelectionDelegate> *shortcutsSelectionDelegate; // ivar: _shortcutsSelectionDelegate
@property (retain, nonatomic) NSString *shortcutsToken; // ivar: _shortcutsToken


-(BOOL)_canShowWhileLocked;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithPreviouslySelectedShortcut:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)cancelButtonAction;
-(void)shortcutsDidChange:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif