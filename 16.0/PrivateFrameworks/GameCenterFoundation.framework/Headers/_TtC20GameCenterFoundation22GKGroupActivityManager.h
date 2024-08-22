// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC20GAMECENTERFOUNDATION22GKGROUPACTIVITYMANAGER_H
#define _TTC20GAMECENTERFOUNDATION22GKGROUPACTIVITYMANAGER_H


#import <Foundation/Foundation.h>


@interface _TtC20GameCenterFoundation22GKGroupActivityManager : NSObject {
    ? _groupSession;
    ? messenger;
    ? subscriptions;
    ? inviteeIDs;
    ? devicePushToken;
    ? tasks;
    ? matchInfo;
    ? sessionStateObserver;
}




+(id)sharedManager;
-(id)init;
-(void)activateForGameWithGame:(id)arg0 ;
-(void)applicationWillTerminate;
-(void)end;
-(void)leave;
-(void)reset;
-(void)startGame;
-(void)startLookingForSessions;
-(void)updateWithMatch:(id)arg0 ;


@end


#endif