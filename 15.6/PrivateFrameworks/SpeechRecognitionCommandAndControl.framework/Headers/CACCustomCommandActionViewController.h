// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CACCUSTOMCOMMANDACTIONVIEWCONTROLLER_H
#define CACCUSTOMCOMMANDACTIONVIEWCONTROLLER_H

@class UITableViewController, NSString, AXSiriShortcut;
@protocol AXGestureRecorderMainViewControllerDelegate, CACShortcutsSelectionDelegate, UITextViewDelegate, CACCustomCommandActionViewControllerDelegate;


#import "CACSpokenCommandItem.h"

@interface CACCustomCommandActionViewController : UITableViewController <AXGestureRecorderMainViewControllerDelegate, CACShortcutsSelectionDelegate, UITextViewDelegate>



@property (retain, nonatomic) CACSpokenCommandItem *commandItem; // ivar: _commandItem
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CACCustomCommandActionViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isPresentingGestureRecorder; // ivar: _isPresentingGestureRecorder
@property (retain, nonatomic) AXSiriShortcut *selectedShortcutForCommand; // ivar: _selectedShortcutForCommand
@property (readonly) Class superclass;


-(BOOL)_canShowWhileLocked;
-(BOOL)_shouldDisallowSelectingRowAtIndexPath:(id)arg0 ;
-(BOOL)_useDetailCell;
-(BOOL)isModalInPresentation;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_stringFromPasteboardDataArray:(id)arg0 ;
-(id)init;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 willSelectRowAtIndexPath:(id)arg1 ;
-(void)_updateForAction:(NSInteger)arg0 ;
-(void)didSelectShortcut:(id)arg0 ;
-(void)gestureRecorder:(id)arg0 saveReplayableGesture:(id)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)textViewDidEndEditing:(id)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif