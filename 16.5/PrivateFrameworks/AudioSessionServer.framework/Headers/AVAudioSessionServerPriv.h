// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVAUDIOSESSIONSERVERPRIV_H
#define AVAUDIOSESSIONSERVERPRIV_H

@class NSString;
@protocol AVAudioSessionServer, AVAudioSessionServerDelegate;

#import <Foundation/Foundation.h>

#import "AVAudioSessionXPCServer.h"

@interface AVAudioSessionServerPriv : NSObject <AVAudioSessionServer>

 {
    AVAudioSessionXPCServer *_xpcServer;
    id<AVAudioSessionServerDelegate> *_serverDelegate;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(*void)getDefaultMXSession:(unsigned int)arg0 ;
-(BOOL)interruptDummyPlayersForSession:(unsigned int)arg0 ;
-(id)createTimestampWriterForDevice:(SEL)arg0 halID:(id)arg1 isDecoupledInput:(unsigned int)arg2 ;
-(id)init;
-(id)initWithAudioControlQueue:(id)arg0 delegate:(id)arg1 ;
-(int)activateWithFlags:(unsigned int)arg0 auditToken:(struct ? *)arg1 flags:(unsigned int)arg2 ;
-(int)deactivateWithFlags:(unsigned int)arg0 auditToken:(struct ? *)arg1 flags:(unsigned int)arg2 ;
-(int)destroyCMSessionForPID:(int)arg0 sessionID:(unsigned int)arg1 ;
-(int)destroySession:(unsigned int)arg0 auditToken:(struct ? *)arg1 ;
-(int)destroySession:(unsigned int)arg0 procID:(*void)arg1 ;
-(int)queuePIDOverridden:(int)arg0 ;
-(int)setClientMuteState:(BOOL)arg0 sessionID:(unsigned int)arg1 playerType:(unsigned int)arg2 playerRef:(*void)arg3 ;
-(struct opaqueCMSession *)copyCMSession:(unsigned int)arg0 ;
-(struct tuple<int, AudioSessionDuckingInfo> )setPlayState:(unsigned int)arg0 sessionID:(unsigned int)arg1 playerType:(unsigned int)arg2 playerRef:(*void)arg3 modes:(unsigned int)arg4 subsessionRef:(*void)arg5 ;
-(struct tuple<int, bool> )checkBooleanEntitlementForSession:(unsigned int)arg0 entitlementIdentifier:(char *)arg1 ;
-(struct tuple<int, bool> )isSessionMuted:(unsigned int)arg0 ;
-(struct tuple<int, std::string, int> )getDescriptionForSession:(unsigned int)arg0 ;
-(struct tuple<opaqueCMSession *, const void *, unsigned int> )createCoreMXSession:(struct ? *)arg0 type:(unsigned int)arg1 ;
-(struct tuple<opaqueCMSession *, const void *, unsigned int> )createCoreMXSessionForPID:(int)arg0 ;
-(struct tuple<opaqueCMSession *, const void *, unsigned int> )createCoreMXSessionForProcID:(*void)arg0 type:(unsigned int)arg1 ;
-(struct tuple<opaqueCMSession *, const void *, unsigned int> )getPrimarySession:(struct ? *)arg0 createIfNecessary:(BOOL)arg1 ;
-(struct tuple<opaqueCMSession *, const void *, unsigned int> )getPrimarySessionForPID:(int)arg0 createIfNecessary:(BOOL)arg1 ;
-(struct tuple<opaqueCMSession *, const void *, unsigned int> )getPrimarySessionForProcID:(*void)arg0 createIfNecessary:(BOOL)arg1 ;
-(struct vector<unsigned int, std::allocator<unsigned int>> )getSessionIDsForToken:(struct ? *)arg0 ;
-(void)destroyTimestampWriterForDevice:(id)arg0 ;
-(void)generateIOControllerEvent:(NSUInteger)arg0 forDevice:(unsigned int)arg1 ;
-(void)mapSession:(unsigned int)arg0 isInput:(BOOL)arg1 toDevice:(id)arg2 ;
-(void)startXPCServer;


@end


#endif