// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUNETWORKROUTERSETTINGSVIEWCONTROLLER_H
#define HUNETWORKROUTERSETTINGSVIEWCONTROLLER_H

@class NSString;
@protocol HUPresentationDelegate, HUSwitchCellDelegate;


#import "HUItemTableViewController.h"
#import "HUNetworkRouterSettingsItemManager.h"
#import "HUNetworkConfigurationItemListModuleController.h"

@interface HUNetworkRouterSettingsViewController : HUItemTableViewController <HUPresentationDelegate, HUSwitchCellDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HUNetworkRouterSettingsItemManager *itemManager;
@property (retain, nonatomic) HUNetworkConfigurationItemListModuleController *networkConfigurationItemListModuleController; // ivar: _networkConfigurationItemListModuleController
@property (readonly) Class superclass;


-(BOOL)_shouldShowNetworkRouterDetails;
-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(Class)_networkRouterDetailsViewControllerClass;
-(Class)cellClassForItem:(id)arg0 indexPath:(id)arg1 ;
-(id)buildItemModuleControllerForModule:(id)arg0 ;
-(id)finishPresentation:(id)arg0 animated:(BOOL)arg1 ;
-(id)initWithHome:(id)arg0 ;
-(id)initWithItemManager:(id)arg0 tableViewStyle:(NSInteger)arg1 ;
-(id)presentNetworkConfigurationSettingsForProfile:(id)arg0 animated:(BOOL)arg1 ;
-(id)presentNetworkRouterSettingsForItem:(id)arg0 animated:(BOOL)arg1 ;
-(id)presentNetworkRouterSettingsForProfile:(id)arg0 animated:(BOOL)arg1 ;
-(void)setupCell:(id)arg0 forItem:(id)arg1 indexPath:(id)arg2 ;
-(void)switchCell:(id)arg0 didTurnOn:(BOOL)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)updateCell:(id)arg0 forItem:(id)arg1 indexPath:(id)arg2 animated:(BOOL)arg3 ;


@end


#endif