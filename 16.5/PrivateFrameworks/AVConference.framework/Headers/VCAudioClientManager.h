// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCAUDIOCLIENTMANAGER_H
#define VCAUDIOCLIENTMANAGER_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface VCAudioClientManager : NSObject {
    NSMutableDictionary *_clientList;
    NSObject<OS_dispatch_queue> *_xpcCommandQueue;
}




+(id)sharedInstance;
-(id)getAudioClientWithProcessId:(id)arg0 create:(BOOL)arg1 ;
-(id)handleDisconnectWithXPCArguments:(id)arg0 ;
-(id)handleNewClientWithXPCArguments:(id)arg0 error:(*id)arg1 ;
-(id)handleRegisterMutedTalkerNotificationForAudioClient:(id)arg0 error:(*id)arg1 ;
-(id)handleUnregisterMutedTalkerNotificationForAudioClient:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)handleMutedTalkerNotification:(unsigned int)arg0 ;
-(void)registerBlocksForService;
-(void)registerForMutedTalkerNotfications;
-(void)secureMicrophoneEngagedNotification;
-(void)unregisterBlocksForService;
-(void)unregisterFromMutedTalkerNotfications;


@end


#endif