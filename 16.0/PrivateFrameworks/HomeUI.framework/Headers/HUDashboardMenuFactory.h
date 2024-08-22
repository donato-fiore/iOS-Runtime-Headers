// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUDASHBOARDMENUFACTORY_H
#define HUDASHBOARDMENUFACTORY_H


#import <Foundation/Foundation.h>


@interface HUDashboardMenuFactory : NSObject



+(id)_actionHandlerForDelegate:(SEL)arg0 block:(id)arg1 ;
+(id)_addAccessoryAction:(id)arg0 room:(id)arg1 delegate:(id)arg2 ;
+(id)_addAutomationAction:(id)arg0 delegate:(id)arg1 ;
+(id)_addHomeActionWithDelegate:(id)arg0 ;
+(id)_addPeopleAction:(id)arg0 delegate:(id)arg1 ;
+(id)_addRoomAction:(id)arg0 delegate:(id)arg1 ;
+(id)_addSceneAction:(id)arg0 delegate:(id)arg1 ;
+(id)_editScreenAction:(id)arg0 ;
+(id)_homeActionWithHome:(id)arg0 selected:(BOOL)arg1 currentLocation:(BOOL)arg2 delegate:(id)arg3 ;
+(id)_homeSettingsAction:(id)arg0 incomingInvitationsCount:(NSUInteger)arg1 delegate:(id)arg2 ;
+(id)_roomActionWithRoom:(id)arg0 selected:(BOOL)arg1 delegate:(id)arg2 ;
+(id)_roomSettingsAction:(id)arg0 delegate:(id)arg1 ;
+(id)createAddMenuForHome:(id)arg0 room:(id)arg1 delegate:(id)arg2 ;
+(id)createHomeMenuForHomes:(id)arg0 currentlySelectedHome:(id)arg1 currentLocationHome:(id)arg2 delegate:(id)arg3 ;
+(id)createRoomMenuForHome:(id)arg0 currentRoom:(id)arg1 delegate:(id)arg2 ;
+(id)createSettingsMenuForHome:(id)arg0 room:(id)arg1 incomingInvitationsCount:(NSUInteger)arg2 allowEditing:(BOOL)arg3 delegate:(id)arg4 ;


@end


#endif