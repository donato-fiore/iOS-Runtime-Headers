// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC15GROUPACTIVITIES11LINKMANAGER_H
#define _TTC15GROUPACTIVITIES11LINKMANAGER_H


#import <Foundation/Foundation.h>


@interface _TtC15GroupActivities11LinkManager : NSObject {
    ? lock;
    ? broadcastLink;
    ? participantToControllerMap;
    ? cancellables;
    ? featureFlags;
    ? topic;
    ? identifier;
    ? groupUUID;
    ? state;
    ? localParticipant;
    ? hasConnectedOnce;
    ? receivedDataHandler;
    ? onFirstConnectedHandler;
}




-(id)init;
-(void)dealloc;


@end


#endif