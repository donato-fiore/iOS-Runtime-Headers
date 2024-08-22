// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHASESESSIONINTERFACEIMPL_H
#define PHASESESSIONINTERFACEIMPL_H

@class NSString;
@protocol PHASESessionInterface, PHASESessionVolumeInterface;

#import <Foundation/Foundation.h>

#import "ATPhasePlatform.h"

@interface PHASESessionInterfaceImpl : NSObject <PHASESessionInterface>

 {
    ATPhasePlatform *_phasePlatform;
    mutex _callbackMutex;
    id *_fadeSessionBlock;
    id *_activateSessionBlock;
    id *_sessionVolumeImpl;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<PHASESessionVolumeInterface> *sessionVolumeInterface;
@property (readonly) Class superclass;


-(BOOL)registerActivateAudioSessionBlock:(id)arg0 ;
-(BOOL)registerFadeClientsInAudioSessionBlock:(id)arg0 ;
-(BOOL)setClientStateFromCallbackOnSession:(unsigned int)arg0 clientToken:(*void)arg1 modes:(unsigned int)arg2 state:(unsigned int)arg3 outDuckingInfo:(struct AudioSessionDuckingInfo *)arg4 ;
-(BOOL)setClientStateOnSession:(unsigned int)arg0 clientToken:(*void)arg1 modes:(unsigned int)arg2 state:(unsigned int)arg3 outDuckingInfo:(struct AudioSessionDuckingInfo *)arg4 ;
-(BOOL)setInputMuteStateFromCallbackOnSession:(unsigned int)arg0 clientToken:(*void)arg1 isMuted:(BOOL)arg2 ;
-(BOOL)setInputMuteStateOnSession:(unsigned int)arg0 clientToken:(*void)arg1 isMuted:(BOOL)arg2 ;
-(id)init;
-(id)initWithPhasePlatform:(id)arg0 ;
-(id)lazyInitSessionVolumeInterface;
-(int)fadeClientsInSession:(unsigned int)arg0 activating:(BOOL)arg1 fadeLevel:(float)arg2 fadeTime:(float)arg3 ;
-(void)activateSession:(unsigned int)arg0 activate:(BOOL)arg1 ;
-(void)dealloc;
-(void)muteSession:(unsigned int)arg0 mute:(BOOL)arg1 ;


@end


#endif