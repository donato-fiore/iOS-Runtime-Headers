// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSCOMMANDCONTROLLISTENER_H
#define CSCOMMANDCONTROLLISTENER_H

@class NSString;
@protocol CSAudioStreamProvidingDelegate, CSXPCClientDelegate, CSAudioStreamProviding, CSCommandControlListenerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CSAudioStream.h"
#import "CSXPCClient.h"

@interface CSCommandControlListener : NSObject <CSAudioStreamProvidingDelegate, CSXPCClientDelegate>



@property (retain, nonatomic) CSAudioStream *audioStream; // ivar: _audioStream
@property (retain, nonatomic) NSObject<CSAudioStreamProviding> *audioStreamProvider; // ivar: _audioStreamProvider
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CSCommandControlListenerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;
@property (retain, nonatomic) CSXPCClient *xpcClient; // ivar: _xpcClient


-(id)init;
-(void)CSXPCClient:(id)arg0 didDisconnect:(BOOL)arg1 ;
-(void)_startRequestWithCompletion:(id)arg0 ;
-(void)audioStreamProvider:(id)arg0 audioBufferAvailable:(id)arg1 ;
-(void)audioStreamProvider:(id)arg0 audioChunkForTVAvailable:(id)arg1 ;
-(void)audioStreamProvider:(id)arg0 didHardwareConfigurationChange:(NSInteger)arg1 ;
-(void)audioStreamProvider:(id)arg0 didStopStreamUnexpectly:(NSInteger)arg1 ;
-(void)startListenWithOption:(id)arg0 completion:(id)arg1 ;
-(void)stopListenWithCompletion:(id)arg0 ;


@end


#endif