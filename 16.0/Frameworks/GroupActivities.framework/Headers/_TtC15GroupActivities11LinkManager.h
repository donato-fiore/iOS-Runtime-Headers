// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC15GROUPACTIVITIES11LINKMANAGER_H
#define _TTC15GROUPACTIVITIES11LINKMANAGER_H


#import <Foundation/Foundation.h>


@interface _TtC15GroupActivities11LinkManager : NSObject {
    ? lock;
    ? participantToControllerMap;
    ? unreliableMessenger;
    ? cancellables;
    ? featureFlags;
    ? topic;
    ? identifier;
    ? groupUUID;
    ? state;
    ? localParticipant;
    ? unreliableMessengerConfig;
    ? hasConnectedOnce;
    ? receivedDataHandler;
    ? onFirstConnectedHandler;
    ? invalidationHandler;
    ? requestEncryptionKeysHandler;
}




-(id)init;
-(void)dealloc;


@end


#endif