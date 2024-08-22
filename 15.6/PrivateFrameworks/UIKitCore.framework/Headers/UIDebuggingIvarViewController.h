// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIDEBUGGINGIVARVIEWCONTROLLER_H
#define UIDEBUGGINGIVARVIEWCONTROLLER_H

@protocol UIDebuggingInformationViewController;

#import <Foundation/Foundation.h>

#import "UITableViewController.h"

@interface UIDebuggingIvarViewController : UITableViewController <UIDebuggingInformationViewController>



@property (weak, nonatomic) NSObject *inspectedObject; // ivar: _inspectedObject


-(Class)_classForTableSection:(NSInteger)arg0 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_classHierarchyForInspectedObject;
-(id)_ivarForIndexPath:(id)arg0 ;
-(id)_ivarsForInspectedObjectInClass:(Class)arg0 ;
-(id)init;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)prepareForDisplayAsTopLevelDebuggingViewController;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;


@end


#endif