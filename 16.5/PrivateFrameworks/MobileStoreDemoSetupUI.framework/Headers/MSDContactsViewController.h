// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSDCONTACTSVIEWCONTROLLER_H
#define MSDCONTACTSVIEWCONTROLLER_H

@class UIViewController, NSString, NSMutableArray;
@protocol UITableViewDataSource;


#import "MSDStoreContactsModel.h"

@interface MSDContactsViewController : UIViewController <UITableViewDataSource>



@property (retain, nonatomic) MSDStoreContactsModel *contactsModel; // ivar: _contactsModel
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableArray *regions; // ivar: _regions
@property (readonly) Class superclass;


-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)init;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)viewDidLoad;


@end


#endif