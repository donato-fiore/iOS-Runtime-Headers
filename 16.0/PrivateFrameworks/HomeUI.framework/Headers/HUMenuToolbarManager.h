// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUMENUTOOLBARMANAGER_H
#define HUMENUTOOLBARMANAGER_H

@class HOAppNavigator, NSString, HMHome, HMRoom;
@protocol HFHomeObserver, HFHomeManagerObserver, UIMenuBuilder;

#import <Foundation/Foundation.h>


@interface HUMenuToolbarManager : NSObject <HFHomeObserver, HFHomeManagerObserver>



@property (weak, nonatomic) HOAppNavigator *appNavigator; // ivar: _appNavigator
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HMHome *home; // ivar: _home
@property (retain, nonatomic) NSObject<UIMenuBuilder> *menuBuilder; // ivar: _menuBuilder
@property (retain, nonatomic) HMRoom *room; // ivar: _room
@property (readonly) Class superclass;


+(BOOL)isValidMenuSelector:(SEL)arg0 ;
-(BOOL)_shouldEnableIdentifier:(id)arg0 ;
-(id)_buildActionForIdentifier:(id)arg0 ;
-(id)_buildHomeMenu;
-(id)_buildKeyCommandForIdentifier:(id)arg0 ;
-(id)_buildMenuForIdentifier:(id)arg0 ;
-(id)_buildRoomMenu;
-(id)_editMenuIdentifiers;
-(id)_fileMenuIdentifiers;
-(id)_helpMenuIdentifiers;
-(id)_subViewMenuIdentifiers;
-(id)_viewMenuIdentifiers;
-(id)initWithAppNavigator:(id)arg0 ;
-(void)_automationMenuSelected;
-(void)_discoverMenuSelected;
-(void)_editHomeMenuSelected;
-(void)_editRoomMenuSelected;
-(void)buildMenu;
-(void)home:(id)arg0 didAddAccessory:(id)arg1 ;
-(void)home:(id)arg0 didAddRoom:(id)arg1 ;
-(void)home:(id)arg0 didAddTrigger:(id)arg1 ;
-(void)home:(id)arg0 didRemoveAccessory:(id)arg1 ;
-(void)home:(id)arg0 didRemoveRoom:(id)arg1 ;
-(void)home:(id)arg0 didRemoveTrigger:(id)arg1 ;
-(void)home:(id)arg0 didSelectRoom:(id)arg1 ;
-(void)home:(id)arg0 didUpdateNameForRoom:(id)arg1 ;
-(void)homeDidUpdateName:(id)arg0 ;
-(void)homeKitDispatcher:(id)arg0 manager:(id)arg1 didChangeHome:(id)arg2 ;
-(void)homeManager:(id)arg0 didAddHome:(id)arg1 ;
-(void)homeManager:(id)arg0 didRemoveHome:(id)arg1 ;
-(void)homeManager:(id)arg0 didUpdateStateForIncomingInvitations:(id)arg1 ;
-(void)refreshEditMenu;
-(void)refreshFileMenu;
-(void)refreshHelpMenu;
-(void)refreshViewMenu;
-(void)refreshViewMenuChildren;
-(void)updateHome:(id)arg0 ;


@end


#endif