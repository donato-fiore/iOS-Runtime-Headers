// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUSTATUSANDNOTIFICATIONSVIEWCONTROLLER_H
#define HUSTATUSANDNOTIFICATIONSVIEWCONTROLLER_H

@class NSString, HFItem<HFServiceLikeItem>;
@protocol HUSwitchCellDelegate, HUTriggerConditionEditorItemModuleControllerDelegate, HUCameraSmartNotificationSettingsModuleControllerDelegate;


#import "HUItemTableViewController.h"
#import "HUCameraSmartNotificationSettingsModuleController.h"
#import "HUTriggerConditionEditorItemModuleController.h"
#import "HUStatusAndNotificationsItemManager.h"

@interface HUStatusAndNotificationsViewController : HUItemTableViewController <HUSwitchCellDelegate, HUTriggerConditionEditorItemModuleControllerDelegate, HUCameraSmartNotificationSettingsModuleControllerDelegate>



@property (readonly, nonatomic) HUCameraSmartNotificationSettingsModuleController *cameraSmartSettingsModuleController; // ivar: _cameraSmartSettingsModuleController
@property (readonly, nonatomic) HUTriggerConditionEditorItemModuleController *conditionModuleController; // ivar: _conditionModuleController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HFItem<HFServiceLikeItem> *item; // ivar: _item
@property (readonly, nonatomic) HUStatusAndNotificationsItemManager *itemManager;
@property (nonatomic) BOOL showStatusSection;
@property (readonly) Class superclass;
@property (nonatomic) BOOL useServiceNameAsTitle;


-(BOOL)shouldHideHeaderAboveSection:(NSInteger)arg0 ;
-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForFooterInSection:(NSInteger)arg1 ;
-(Class)cellClassForItem:(id)arg0 indexPath:(id)arg1 ;
-(NSUInteger)automaticDisablingReasonsForItem:(id)arg0 ;
-(id)initWithServiceItem:(id)arg0 inHome:(id)arg1 displayingDetails:(BOOL)arg2 ;
-(void)conditionEditorModuleController:(id)arg0 didUpdateConditionCollection:(id)arg1 ;
-(void)conditionEditorModuleController:(id)arg0 dismissDetailViewController:(id)arg1 ;
-(void)conditionEditorModuleController:(id)arg0 presentDetailViewController:(id)arg1 ;
-(void)setupCell:(id)arg0 forItem:(id)arg1 indexPath:(id)arg2 ;
-(void)smartNotificationSettingsModuleController:(id)arg0 didUpdateConditionCollection:(id)arg1 ;
-(void)switchCell:(id)arg0 didTurnOn:(BOOL)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)updateCell:(id)arg0 forItem:(id)arg1 indexPath:(id)arg2 animated:(BOOL)arg3 ;


@end


#endif