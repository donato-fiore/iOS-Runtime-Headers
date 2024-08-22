// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIDOCUMENTPICKEROVERVIEWVIEWCONTROLLER_H
#define _UIDOCUMENTPICKEROVERVIEWVIEWCONTROLLER_H

@class UIContainerHuggingTableViewController, NSArray;
@protocol _UIDocumentPickerOverviewDelegate;



@interface _UIDocumentPickerOverviewViewController : UIContainerHuggingTableViewController

@property (retain, nonatomic) NSArray *allPickers; // ivar: _allPickers
@property (retain, nonatomic) NSArray *auxiliaryOptions; // ivar: _auxiliaryOptions
@property (weak, nonatomic) NSObject<_UIDocumentPickerOverviewDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSArray *fileTypes; // ivar: _fileTypes
@property (nonatomic) BOOL manage; // ivar: _manage
@property (nonatomic) NSUInteger mode; // ivar: _mode


-(CGFloat)tableView:(id)arg0 heightForFooterInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithFileTypes:(id)arg0 mode:(NSUInteger)arg1 auxiliaryOptions:(id)arg2 includeManagementItem:(BOOL)arg3 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 viewForFooterInSection:(NSInteger)arg1 ;
-(void)setPreferredContentSize:(struct CGSize )arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateContents;
-(void)updatePreferredContentSize;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif