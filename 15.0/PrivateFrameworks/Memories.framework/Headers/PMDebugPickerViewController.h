// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PMDEBUGPICKERVIEWCONTROLLER_H
#define PMDEBUGPICKERVIEWCONTROLLER_H

@class UITableViewController, NSDictionary, NSString, NSArray;
@protocol NSCopying, PMPlayerControlling;



@interface PMDebugPickerViewController : UITableViewController

@property (retain, nonatomic) NSDictionary *displayNamesByEntryID; // ivar: _displayNamesByEntryID
@property (retain, nonatomic) NSDictionary *entryIDsByMood; // ivar: _entryIDsByMood
@property (copy, nonatomic) NSString *moodID; // ivar: _moodID
@property (copy, nonatomic) NSObject<NSCopying> *originalEntryID; // ivar: _originalEntryID
@property (weak, nonatomic) NSObject<PMPlayerControlling> *playerController; // ivar: _playerController
@property (copy, nonatomic) id *replaceMoodPartForEntryIDBlock; // ivar: _replaceMoodPartForEntryIDBlock
@property (nonatomic) NSInteger selectedRow; // ivar: _selectedRow
@property (nonatomic) NSInteger selectedSection; // ivar: _selectedSection
@property (retain, nonatomic) NSArray *sortedMoodIDs; // ivar: _sortedMoodIDs


-(BOOL)_setSelected:(id)arg0 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_entryIDForIndexPath:(id)arg0 ;
-(id)_indexPathForEntryID:(id)arg0 ;
-(id)_moodIDForSection:(NSInteger)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)_addObserverForTextSizeDidChange;
-(void)_removeObserverForTextSizeDidChange;
-(void)didReceiveMemoryWarning;
-(void)prepareForSegue:(id)arg0 sender:(id)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)userTextSizeDidChange;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif