// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC20GAMECENTERFOUNDATION22GKGROUPACTIVITYMANAGER_H
#define _TTC20GAMECENTERFOUNDATION22GKGROUPACTIVITYMANAGER_H


#import <Foundation/Foundation.h>


@interface _TtC20GameCenterFoundation22GKGroupActivityManager : NSObject {
    ? support;
    ? groupSession;
    ? messenger;
    ? tasks;
    ? cachedDevicePushToken;
    ? inviteeIDs;
    ? hasRequestedToJoin;
}




+(id)sharedManager;
-(?)activateWithGamecompletionHandler;
-(?)updateWithMatchcompletionHandler;
-(BOOL)isEligibleForGroupSession;
-(id)init;
-(id)sharingControllerItemProviderWithGame:(id)arg0 error:(*id)arg1 ;
-(void)applicationWillTerminate;
-(void)endWithCompletionHandler:(id)arg0 ;
-(void)leaveWithCompletionHandler:(id)arg0 ;
-(void)playerDisconnectWithPlayer:(id)arg0 ;
-(void)resetWithCompletionHandler:(id)arg0 ;
-(void)startGame;
-(void)startLookingForSessions;


@end


#endif