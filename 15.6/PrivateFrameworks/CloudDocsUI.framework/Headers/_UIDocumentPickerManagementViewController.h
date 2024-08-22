// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIDOCUMENTPICKERMANAGEMENTVIEWCONTROLLER_H
#define _UIDOCUMENTPICKERMANAGEMENTVIEWCONTROLLER_H

@class UIContainerHuggingTableViewController, NSArray;



@interface _UIDocumentPickerManagementViewController : UIContainerHuggingTableViewController

@property (retain, nonatomic) NSArray *allPickers; // ivar: _allPickers
@property (retain, nonatomic) NSArray *fileTypes; // ivar: _fileTypes
@property (nonatomic) NSUInteger mode; // ivar: _mode


-(BOOL)tableView:(id)arg0 canMoveRowAtIndexPath:(id)arg1 ;
-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(BOOL)tableView:(id)arg0 shouldIndentWhileEditingRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 editingStyleForRowAtIndexPath:(id)arg1 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFileTypes:(id)arg0 mode:(NSUInteger)arg1 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithStyle:(NSInteger)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 targetIndexPathForMoveFromRowAtIndexPath:(id)arg1 toProposedIndexPath:(id)arg2 ;
-(void)_doneButtonPressed;
-(void)_updateContentSize;
-(void)switchToggled:(id)arg0 ;
-(void)tableView:(id)arg0 moveRowAtIndexPath:(id)arg1 toIndexPath:(id)arg2 ;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif