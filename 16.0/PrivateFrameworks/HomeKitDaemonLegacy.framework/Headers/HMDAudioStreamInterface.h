// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDAUDIOSTREAMINTERFACE_H
#define HMDAUDIOSTREAMINTERFACE_H

@class NSString, NSNumber;
@protocol HMFLogging, AVCAudioStreamDelegate, HMDAVCAudioStream, HMDAudioStreamInterfaceDataSource, HMDAudioStreamInterfaceDelegate;


#import "HMDStreamInterface.h"

@interface HMDAudioStreamInterface : HMDStreamInterface <HMFLogging, AVCAudioStreamDelegate>



@property (readonly) NSObject<HMDAVCAudioStream> *audioStream; // ivar: _audioStream
@property NSUInteger audioStreamSetting; // ivar: _audioStreamSetting
@property (readonly) NSObject<HMDAudioStreamInterfaceDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMDAudioStreamInterfaceDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (getter=isMuted) BOOL muted;
@property (getter=isRTCPEnabled) BOOL rtcpEnabled;
@property CGFloat rtcpSendIntervalSec;
@property (getter=isRTCPTimeOutEnabled) BOOL rtcpTimeOutEnabled;
@property CGFloat rtcpTimeOutIntervalSec;
@property (getter=isRTPTimeOutEnabled) BOOL rtpTimeOutEnabled;
@property CGFloat rtpTimeOutIntervalSec;
@property (copy) id *stopStreamCompletionHandler; // ivar: _stopStreamCompletionHandler
@property BOOL streamStarted; // ivar: _streamStarted
@property (readonly) Class superclass;
@property (readonly, copy) NSNumber *syncSource;


+(id)logCategory;
-(id)_createAudioStreamWithSessionHandler:(id)arg0 localNetworkConfig:(id)arg1 localRTPSocket:(*int)arg2 ;
-(id)_createLocalStreamAndRTPSocket:(*int)arg0 localNetworkConfig:(id)arg1 ;
-(id)_createStreamWithRemoteDestinationReceiver:(id)arg0 ;
-(id)_createStreamWithRemoteSocketReceiver:(id)arg0 ;
-(id)initWithSessionID:(id)arg0 workQueue:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3 sessionHandler:(id)arg4 audioStream:(id)arg5 localRTPSocket:(int)arg6 dataSource:(id)arg7 ;
-(id)initWithSessionID:(id)arg0 workQueue:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3 sessionHandler:(id)arg4 localNetworkConfig:(id)arg5 ;
-(id)logIdentifier;
-(int)_createLocalRTPSocketWithRemoteSender:(id)arg0 localNetworkConfig:(id)arg1 ;
-(void)_callPaused:(id)arg0 ;
-(void)_callResumed:(id)arg0 ;
-(void)_callStarted:(id)arg0 ;
-(void)_callStopped:(id)arg0 ;
-(void)_pauseStream;
-(void)_resumeStream;
-(void)_startStreamWithConfig:(id)arg0 ;
-(void)_stopStreamWithCompletion:(id)arg0 ;
-(void)_updateAudioSetting:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)startStreamWithConfig:(id)arg0 ;
-(void)startSynchronizationWithVideoStreamToken:(NSInteger)arg0 ;
-(void)stopStream;
-(void)stream:(id)arg0 didPause:(BOOL)arg1 error:(id)arg2 ;
-(void)stream:(id)arg0 didResume:(BOOL)arg1 error:(id)arg2 ;
-(void)stream:(id)arg0 didStart:(BOOL)arg1 error:(id)arg2 ;
-(void)streamDidRTCPTimeOut:(id)arg0 ;
-(void)streamDidRTPTimeOut:(id)arg0 ;
-(void)streamDidServerDie:(id)arg0 ;
-(void)streamDidStop:(id)arg0 ;
-(void)updateAudioSetting:(NSUInteger)arg0 ;
-(void)updateAudioVolume:(id)arg0 callback:(id)arg1 ;


@end


#endif