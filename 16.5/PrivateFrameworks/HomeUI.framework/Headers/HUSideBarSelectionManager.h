// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUSIDEBARSELECTIONMANAGER_H
#define HUSIDEBARSELECTIONMANAGER_H

@class HFItem, NSString;
@protocol HFHomeKitObject><HMApplicationData, HUSideBarSelectionManagerDelegate;

#import <Foundation/Foundation.h>

#import "HUDashboardContext.h"
#import "HUSideBarItemManager.h"
#import "HUSideBarViewController.h"

@interface HUSideBarSelectionManager : NSObject

@property (retain, nonatomic) HUDashboardContext *currentContext; // ivar: _currentContext
@property (readonly, nonatomic) HFItem *currentSelectedItem;
@property (retain, nonatomic) NSString *currentTabIdentifier; // ivar: _currentTabIdentifier
@property (readonly, nonatomic) NSObject<HFHomeKitObject><HMApplicationData> *dashboarHomeKitObject;
@property (retain, nonatomic) NSObject<HUSideBarSelectionManagerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) HUSideBarItemManager *sideBarItemManager; // ivar: _sideBarItemManager
@property (retain, nonatomic) HUSideBarViewController *sideBarViewController; // ivar: _sideBarViewController


+(id)sharedManager;
-(id)initForTest;
-(id)initWithSideBarViewController:(id)arg0 sideBarItemManager:(id)arg1 delegate:(id)arg2 ;
-(void)_didUpdateToAutomationTab;
-(void)_didUpdateToDiscoverTab;
-(void)_didUpdateToHomeTab;
-(void)_didUpdateToTabForCategory:(id)arg0 ;
-(void)_didUpdateToTabForRoom:(id)arg0 ;
-(void)_updateAppearanceForSidebar;
-(void)_updateSidebarSelection;
-(void)updateWithSideBarViewController:(id)arg0 sideBarItemManager:(id)arg1 ;


@end


#endif