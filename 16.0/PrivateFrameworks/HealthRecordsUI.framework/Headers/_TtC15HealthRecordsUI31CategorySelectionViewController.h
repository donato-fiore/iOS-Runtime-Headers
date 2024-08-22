// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC15HEALTHRECORDSUI31CATEGORYSELECTIONVIEWCONTROLLER_H
#define _TTC15HEALTHRECORDSUI31CATEGORYSELECTIONVIEWCONTROLLER_H

@class UITableViewController;



@interface _TtC15HealthRecordsUI31CategorySelectionViewController : UITableViewController {
    ? delegate;
    ? allCategories;
    ? selectedCategories;
}




-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithStyle:(NSInteger)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 viewForHeaderInSection:(NSInteger)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif