// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFCONTACTAUTOFILLDETAILVIEWCONTROLLER_H
#define SFCONTACTAUTOFILLDETAILVIEWCONTROLLER_H

@class UITableViewController;


#import "SFContactAutoFillPropertyValues.h"

@interface SFContactAutoFillDetailViewController : UITableViewController {
    SFContactAutoFillPropertyValues *_propertyValues;
}




-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithPropertyValues:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif