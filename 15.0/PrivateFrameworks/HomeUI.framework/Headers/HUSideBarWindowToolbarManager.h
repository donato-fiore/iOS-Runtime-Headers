// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUSIDEBARWINDOWTOOLBARMANAGER_H
#define HUSIDEBARWINDOWTOOLBARMANAGER_H

@class HOAppNavigator, NSString, HMHome, HMRoom;
@protocol HUDashboardMenuNavigationActionDelegate, HFHomeManagerObserver, HFHomeObserver, CAAnimationDelegate, HUSideBarWindowToolbarManagerDelegate;

#import <Foundation/Foundation.h>


@interface HUSideBarWindowToolbarManager : NSObject <HUDashboardMenuNavigationActionDelegate, HFHomeManagerObserver, HFHomeObserver, CAAnimationDelegate>



@property (retain, nonatomic) HOAppNavigator *appNavigator; // ivar: _appNavigator
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HUSideBarWindowToolbarManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) NSUInteger discoverTabPosition; // ivar: _discoverTabPosition
@property (nonatomic) NSUInteger discoverTabStyle; // ivar: _discoverTabStyle
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HMHome *home; // ivar: _home
@property (retain, nonatomic) HMRoom *room; // ivar: _room
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *tabIdentifier; // ivar: _tabIdentifier
@property (nonatomic) NSUInteger viewStyle; // ivar: _viewStyle


+(id)sharedToolbarManager;
+(void)cleanUp;
-(NSUInteger)toolbarItemStyleForToolbarItemIdentifier:(id)arg0 ;
-(SEL)actionForToolbarItemIdentifier:(id)arg0 ;
-(id)_generateAddMenu;
-(id)_generateHomeMenu;
-(id)_generateRoomMenu;
-(id)accessibilityLabelForToolbarItemIdentifier:(id)arg0 ;
-(id)imageForToolbarItemIdentifier:(id)arg0 ;
-(id)initWithAppNavigator:(id)arg0 ;
-(id)itemIdentifiersForToolbar;
-(id)menuForToolbarItemIdentifier:(id)arg0 ;
-(id)windowTitle;
-(void)_discoverTabBackButton;
-(void)animationDidStop:(id)arg0 finished:(BOOL)arg1 ;
-(void)home:(id)arg0 didUpdateNameForRoom:(id)arg1 ;
-(void)homeDidUpdateName:(id)arg0 ;
-(void)homeManager:(id)arg0 didAddHome:(id)arg1 ;
-(void)homeManager:(id)arg0 didRemoveHome:(id)arg1 ;
-(void)homeManager:(id)arg0 didUpdateStateForIncomingInvitations:(id)arg1 ;
-(void)homeManagerDidUpdateCurrentHome:(id)arg0 ;
-(void)showAllHomesSettings;
-(void)showHome:(id)arg0 ;
-(void)showHomeSettings:(id)arg0 ;
-(void)showRoom:(id)arg0 ;
-(void)showRoomSettings:(id)arg0 ;
-(void)startEditing;


@end


#endif