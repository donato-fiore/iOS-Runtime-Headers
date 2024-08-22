// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCSESSIONMANAGER_H
#define VCSESSIONMANAGER_H

@class NSString, NSMutableDictionary;
@protocol VCSessionDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface VCSessionManager : NSObject <VCSessionDelegate>

 {
    NSObject<OS_dispatch_queue> *_xpcCommandQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSMutableDictionary *sessions; // ivar: _sessions
@property (nonatomic) BOOL sharingEnabled; // ivar: _sharingEnabled
@property (readonly) Class superclass;


+(id)sharedInstance;
+(void)addNSError:(id)arg0 toXPCArgumentDictionary:(id)arg1 ;
-(id)init;
-(id)participantConfigFromXPCDictionary:(id)arg0 ;
-(id)sessionForStreamToken:(unsigned int)arg0 ;
-(id)sessionForUUID:(id)arg0 ;
-(void)dealloc;
-(void)deregisterBlocksForService;
-(void)registerBlocksForService;
-(void)vcSession:(id)arg0 addParticipantWithID:(id)arg1 didSucceed:(BOOL)arg2 error:(id)arg3 ;
-(void)vcSession:(id)arg0 didStart:(BOOL)arg1 error:(id)arg2 ;
-(void)vcSession:(id)arg0 didStopWithError:(id)arg1 ;
-(void)vcSession:(id)arg0 downlinkRateAdaptationDidChangeWithInfo:(id)arg1 ;
-(void)vcSession:(id)arg0 oneToOneModeEnabled:(BOOL)arg1 didSucceed:(BOOL)arg2 error:(id)arg3 ;
-(void)vcSession:(id)arg0 participantID:(id)arg1 audioEnabled:(BOOL)arg2 didSucceed:(BOOL)arg3 error:(id)arg4 ;
-(void)vcSession:(id)arg0 participantID:(id)arg1 audioPaused:(BOOL)arg2 didSucceed:(BOOL)arg3 error:(id)arg4 ;
-(void)vcSession:(id)arg0 participantID:(id)arg1 didChangeMediaPriority:(unsigned char)arg2 description:(id)arg3 ;
-(void)vcSession:(id)arg0 participantID:(id)arg1 didDetectError:(id)arg2 ;
-(void)vcSession:(id)arg0 participantID:(id)arg1 remoteAudioEnabledDidChange:(BOOL)arg2 ;
-(void)vcSession:(id)arg0 participantID:(id)arg1 remoteAudioPausedDidChange:(BOOL)arg2 ;
-(void)vcSession:(id)arg0 participantID:(id)arg1 remoteScreenEnabledDidChange:(BOOL)arg2 ;
-(void)vcSession:(id)arg0 participantID:(id)arg1 remoteVideoEnabledDidChange:(BOOL)arg2 ;
-(void)vcSession:(id)arg0 participantID:(id)arg1 remoteVideoPausedDidChange:(BOOL)arg2 ;
-(void)vcSession:(id)arg0 participantID:(id)arg1 screenEnabled:(BOOL)arg2 didSucceed:(BOOL)arg3 error:(id)arg4 ;
-(void)vcSession:(id)arg0 participantID:(id)arg1 videoEnabled:(BOOL)arg2 didSucceed:(BOOL)arg3 error:(id)arg4 ;
-(void)vcSession:(id)arg0 participantID:(id)arg1 videoPaused:(BOOL)arg2 didSucceed:(BOOL)arg3 error:(id)arg4 ;
-(void)vcSession:(id)arg0 removeParticipantWithID:(id)arg1 didSucceed:(BOOL)arg2 error:(id)arg3 ;
-(void)vcSession:(id)arg0 updateConfiguration:(id)arg1 didSucceed:(BOOL)arg2 error:(id)arg3 ;
-(void)vcSession:(id)arg0 uplinkRateAdaptationDidChangeWithInfo:(id)arg1 ;
-(void)vcSessionShouldReconnect:(id)arg0 ;


@end


#endif