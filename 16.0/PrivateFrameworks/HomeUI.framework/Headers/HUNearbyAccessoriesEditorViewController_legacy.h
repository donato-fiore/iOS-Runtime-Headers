// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUNEARBYACCESSORIESEDITORVIEWCONTROLLER_LEGACY_H
#define HUNEARBYACCESSORIESEDITORVIEWCONTROLLER_LEGACY_H

@class HFAccessoryProfileItem, HMAccessory;


#import "HUInstructionsTableViewController.h"
#import "HUNearbyAccessoriesEditorServiceGridViewController.h"

@interface HUNearbyAccessoriesEditorViewController_legacy : HUInstructionsTableViewController

@property (readonly, weak, nonatomic) HFAccessoryProfileItem *accessoryProfileItem; // ivar: _accessoryProfileItem
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (retain, nonatomic) HMAccessory *primaryAccessory; // ivar: _primaryAccessory
@property (retain, nonatomic) HUNearbyAccessoriesEditorServiceGridViewController *servicesViewController; // ivar: _servicesViewController


-(id)hu_preloadContent;
-(id)initWithAccessoryProfileSourceItem:(id)arg0 completionHandler:(id)arg1 ;
-(void)_displayProgressIndicatorWhileLoading;
-(void)cancelEditing:(id)arg0 ;
-(void)dismissEditor:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif