// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUPERSONALREQUESTSEDITORTABLEVIEWCONTROLLER_H
#define HUPERSONALREQUESTSEDITORTABLEVIEWCONTROLLER_H

@class NSString;
@protocol HUAccessorySettingsDetailsViewControllerProtocol, HUSwitchCellDelegate;


#import "HUItemTableViewController.h"
#import "HUPersonalRequestsDevicesModuleController.h"
#import "HUPersonalRequestsEditorItemManager.h"

@interface HUPersonalRequestsEditorTableViewController : HUItemTableViewController <HUAccessorySettingsDetailsViewControllerProtocol, HUSwitchCellDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL onlyShowDeviceSwitches; // ivar: _onlyShowDeviceSwitches
@property (readonly, nonatomic) HUPersonalRequestsDevicesModuleController *prDevicesModuleController; // ivar: _prDevicesModuleController
@property (retain, nonatomic) HUPersonalRequestsEditorItemManager *prEditorItemManager; // ivar: _prEditorItemManager
@property (readonly) Class superclass;
@property (readonly) Class superclass;


-(BOOL)automaticallyUpdatesViewControllerTitle;
-(BOOL)shouldHideFooterBelowSection:(NSInteger)arg0 ;
-(BOOL)shouldHideHeaderAboveSection:(NSInteger)arg0 ;
-(Class)cellClassForItem:(id)arg0 indexPath:(id)arg1 ;
-(id)initWithAccessoryGroupItem:(id)arg0 ;
-(id)initWithAccessorySettingItem:(id)arg0 module:(id)arg1 ;
-(id)initWithUserItem:(id)arg0 onlyShowDeviceSwitches:(BOOL)arg1 ;
-(id)initWithUserItem:(id)arg0 sourceMediaProfileContainer:(id)arg1 onlyShowDeviceSwitches:(BOOL)arg2 ;
-(id)itemModuleControllers;
-(void)setupCell:(id)arg0 forItem:(id)arg1 indexPath:(id)arg2 ;
-(void)switchCell:(id)arg0 didTurnOn:(BOOL)arg1 ;
-(void)updateCell:(id)arg0 forItem:(id)arg1 indexPath:(id)arg2 animated:(BOOL)arg3 ;


@end


#endif