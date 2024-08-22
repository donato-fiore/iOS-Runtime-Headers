// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUACCESSORYSETTINGSSIRIOUTPUTVOICEVIEWCONTROLLER_H
#define HUACCESSORYSETTINGSSIRIOUTPUTVOICEVIEWCONTROLLER_H

@class NSString;
@protocol HUAccessorySettingsDetailsViewControllerProtocol, HUHomeKitAccessorySettingDetailsViewControllerProtocol;


#import "HUItemTableViewController.h"
#import "HUAccessorySettingsSiriOutputVoiceItemManager.h"

@interface HUAccessorySettingsSiriOutputVoiceViewController : HUItemTableViewController <HUAccessorySettingsDetailsViewControllerProtocol, HUHomeKitAccessorySettingDetailsViewControllerProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HUAccessorySettingsSiriOutputVoiceItemManager *itemManager;
@property (readonly) Class superclass;


-(Class)cellClassForItem:(id)arg0 indexPath:(id)arg1 ;
-(id)initWithAccessoryGroupItem:(id)arg0 ;
-(id)initWithAccessorySettingItem:(id)arg0 module:(id)arg1 ;
-(id)initWithItemManager:(id)arg0 tableViewStyle:(NSInteger)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)updateCell:(id)arg0 forItem:(id)arg1 indexPath:(id)arg2 animated:(BOOL)arg3 ;


@end


#endif