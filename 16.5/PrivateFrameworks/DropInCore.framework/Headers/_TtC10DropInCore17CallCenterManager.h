// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC10DROPINCORE17CALLCENTERMANAGER_H
#define _TTC10DROPINCORE17CALLCENTERMANAGER_H


#import <Foundation/Foundation.h>


@interface _TtC10DropInCore17CallCenterManager : NSObject {
    ? callParticpants;
    ? delegate;
    ? callCenter;
    ? conversationProviderManager;
    ? participantValidator;
    ? conversationProviderLoader;
    ? serialQueue;
    ? logger;
    ? signposter;
    ? activeConversation;
    ? conversationTimer;
    ? someoneJoined;
    ? activeCall;
}




-(id)init;
-(void)dealloc;


@end


#endif