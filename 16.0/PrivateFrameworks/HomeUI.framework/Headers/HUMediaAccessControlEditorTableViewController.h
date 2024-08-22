// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUMEDIAACCESSCONTROLEDITORTABLEVIEWCONTROLLER_H
#define HUMEDIAACCESSCONTROLEDITORTABLEVIEWCONTROLLER_H

@class NSString, HMHome;
@protocol HUMediaAccessControlEditorModuleControllerDelegate;


#import "HUItemTableViewController.h"
#import "HUMediaAccessControlEditorModuleController.h"

@interface HUMediaAccessControlEditorTableViewController : HUItemTableViewController <HUMediaAccessControlEditorModuleControllerDelegate>



@property (readonly, nonatomic) HUMediaAccessControlEditorModuleController *accessControlEditorModuleController; // ivar: _accessControlEditorModuleController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HMHome *home; // ivar: _home
@property (readonly) Class superclass;


-(id)initWithHome:(id)arg0 ;
-(id)itemModuleControllers;
-(id)tableView:(id)arg0 viewForFooterInSection:(NSInteger)arg1 ;
-(void)_updateFooterView:(id)arg0 forSection:(NSInteger)arg1 ;
-(void)accessControlEditorModuleController:(id)arg0 didUpdateAccessControl:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif