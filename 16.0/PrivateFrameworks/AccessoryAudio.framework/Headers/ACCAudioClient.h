// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ACCAUDIOCLIENT_H
#define ACCAUDIOCLIENT_H

@class NSString, NSXPCConnection;
@protocol ACCAudioXPCClientProtocol, ACCAudioClientProtocol, ACCAudioXPCServerProtocol;

#import <Foundation/Foundation.h>


@interface ACCAudioClient : NSObject <ACCAudioXPCClientProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ACCAudioClientProtocol> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<ACCAudioXPCServerProtocol> *remoteObject; // ivar: _remoteObject
@property (retain, nonatomic) NSXPCConnection *serverConnection; // ivar: _serverConnection
@property (readonly) Class superclass;


-(BOOL)allowBackgroundAudioForClient:(id)arg0 ;
-(BOOL)setDigitalAudioSampleRate:(unsigned int)arg0 ;
-(id)deviceAudioStates;
-(id)initWithDelegate:(id)arg0 ;
-(id)supportedDigitalAudioSampleRates;
-(unsigned int)supportedDigitalAudioSampleRate:(unsigned int)arg0 ;
-(void)connectToServer;
-(void)dealloc;
-(void)registerForAccessoryDigitalAudioNotifications;
-(void)unregisterForAccessoryDigitalAudioNotifications;


@end


#endif