// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUNETWORKCONFIGURATIONSETTINGSVIEWCONTROLLER_H
#define HUNETWORKCONFIGURATIONSETTINGSVIEWCONTROLLER_H

@class NSString;
@protocol UITextViewDelegate;


#import "HUItemTableViewController.h"
#import "HUNetworkConfigurationSettingsItemManager.h"
#import "HUNetworkConfigurationSettingsModuleController.h"

@interface HUNetworkConfigurationSettingsViewController : HUItemTableViewController <UITextViewDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HUNetworkConfigurationSettingsItemManager *itemManager;
@property (retain, nonatomic) HUNetworkConfigurationSettingsModuleController *networkConfigurationSettingsModuleController; // ivar: _networkConfigurationSettingsModuleController
@property (readonly) Class superclass;


-(BOOL)textView:(id)arg0 shouldInteractWithURL:(id)arg1 inRange:(struct _NSRange )arg2 interaction:(NSInteger)arg3 ;
-(id)buildItemModuleControllerForModule:(id)arg0 ;
-(id)initWithItemManager:(id)arg0 tableViewStyle:(NSInteger)arg1 ;
-(id)initWithNetworkConfigurationGroupItem:(id)arg0 ;
-(id)tableView:(id)arg0 viewForFooterInSection:(NSInteger)arg1 ;
-(void)itemManagerDidFinishUpdate:(id)arg0 ;
-(void)updateNetworkConfigurationSettingsModuleFooter;


@end


#endif