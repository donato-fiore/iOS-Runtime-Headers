// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXPEOPLENAMEPICKERRESULTSTABLEVIEWCONTROLLER_H
#define PXPEOPLENAMEPICKERRESULTSTABLEVIEWCONTROLLER_H

@class UITableViewController, NSMutableArray, NSString, NSArray;



@interface PXPeopleNamePickerResultsTableViewController : UITableViewController

@property (readonly, nonatomic) BOOL hasResults;
@property (retain) NSMutableArray *items; // ivar: _items
@property (retain) NSString *personLocalIdentifier; // ivar: _personLocalIdentifier
@property (retain) NSArray *suggestedContacts; // ivar: _suggestedContacts


-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)contactAtIndexPath:(id)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 personLocalIdentifier:(id)arg1 suggestedContacts:(id)arg2 ;
-(id)personAtIndexPath:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)updateItemsForSearchString:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif