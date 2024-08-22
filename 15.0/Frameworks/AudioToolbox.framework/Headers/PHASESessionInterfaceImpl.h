// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PHASESESSIONINTERFACEIMPL_H
#define PHASESESSIONINTERFACEIMPL_H

@class NSString;
@protocol PHASESessionInterface;

#import <Foundation/Foundation.h>


@interface PHASESessionInterfaceImpl : NSObject <PHASESessionInterface>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)registerActivateAudioSessionBlock:(id)arg0 ;
-(BOOL)registerFadeClientsInAudioSessionBlock:(id)arg0 ;
-(BOOL)setClientStateOnSession:(unsigned int)arg0 clientToken:(*void)arg1 modes:(unsigned int)arg2 state:(unsigned int)arg3 outDuckingInfo:(struct AudioSessionDuckingInfo *)arg4 ;
-(BOOL)setInputMuteStateOnSession:(unsigned int)arg0 clientToken:(*void)arg1 isMuted:(BOOL)arg2 ;


@end


#endif