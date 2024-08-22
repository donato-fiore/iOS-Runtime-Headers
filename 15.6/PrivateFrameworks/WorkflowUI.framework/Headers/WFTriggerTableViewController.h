// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFTRIGGERTABLEVIEWCONTROLLER_H
#define WFTRIGGERTABLEVIEWCONTROLLER_H

@class UITableViewController, NSString, NSArray;
@protocol WFTriggerTableViewControllerDelegate;



@interface WFTriggerTableViewController : UITableViewController

@property (nonatomic) BOOL anyOptionSelected; // ivar: _anyOptionSelected
@property (weak, nonatomic) NSObject<WFTriggerTableViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy, nonatomic) NSString *mainSectionTitle; // ivar: _mainSectionTitle
@property (readonly, copy, nonatomic) NSString *nameOfAnyOption; // ivar: _nameOfAnyOption
@property (retain, nonatomic) NSArray *options; // ivar: _options
@property (readonly, nonatomic) NSArray *sections; // ivar: _sections


-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)infoForSection:(NSInteger)arg0 ;
-(id)initWithOptions:(id)arg0 anySelected:(BOOL)arg1 nameOfAnyOption:(id)arg2 mainSectionTitle:(id)arg3 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)cancel:(id)arg0 ;
-(void)done:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)updateDoneButtonEnabledState;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif