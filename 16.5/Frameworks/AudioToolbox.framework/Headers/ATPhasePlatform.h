// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATPHASEPLATFORM_H
#define ATPHASEPLATFORM_H

@class NSString, OS_os_workgroup;
@protocol PHASEPlatform, PHASESessionInterface, PHASETapInterface;

#import <Foundation/Foundation.h>


@interface ATPhasePlatform : NSObject <PHASEPlatform>

 {
    unique_ptr<Phase::ServerManager, std::default_delete<Phase::ServerManager>> _serverManager;
    id *_sessionInterface;
    id *_roomCongruenceInterface;
}


@property (readonly, nonatomic) unsigned int bufferFrameSize;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL running;
@property (readonly, nonatomic) CGFloat sampleRate;
@property (readonly, nonatomic) NSObject<PHASESessionInterface> *sessionInterface;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<PHASETapInterface> *tapInterface; // ivar: _tapInterface
@property (readonly, nonatomic) OS_os_workgroup *workgroup;


-(*void)lazyInitServerManager;
-(BOOL)applyVolumeOnAllSessions;
-(BOOL)applyVolumeOnSession:(unsigned int)arg0 ;
-(BOOL)applyVolumeOnVolumeCategory:(id)arg0 mode:(id)arg1 value:(float)arg2 ;
-(BOOL)enableIO:(BOOL)arg0 direction:(unsigned char)arg1 ;
-(BOOL)registerIOBlock:(id)arg0 ;
-(BOOL)registerOverloadNotification:(id)arg0 ;
-(BOOL)registerRouteChangeNotification:(id)arg0 ;
-(BOOL)start;
-(BOOL)stop;
-(float)volumeScalarMappedToHWCurve:(float)arg0 ;
-(id)init;
-(id)lazyInitSessionInterface;
-(id)streamInfoForIndex:(unsigned int)arg0 direction:(unsigned char)arg1 ;
-(int)fadeClientsInSession:(unsigned int)arg0 activating:(BOOL)arg1 fadeLevel:(float)arg2 fadeTime:(float)arg3 ;
-(unsigned int)deviceLatencyInFramesForDirection:(unsigned char)arg0 ;
-(unsigned int)numberOfStreamsForDirection:(unsigned char)arg0 ;
-(void)activateSession:(unsigned int)arg0 activate:(BOOL)arg1 ;
-(void)dealloc;
-(void)muteSession:(unsigned int)arg0 mute:(BOOL)arg1 ;
-(void)registerTapInterface:(id)arg0 ;


@end


#endif