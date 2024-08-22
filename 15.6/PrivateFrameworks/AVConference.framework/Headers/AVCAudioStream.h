// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVCAUDIOSTREAM_H
#define AVCAUDIOSTREAM_H

@class NSDictionary, NSString;
@protocol VCMediaStreamDelegate, OS_dispatch_queue, AVCAudioStreamDelegate;

#import <Foundation/Foundation.h>

#import "AVConferenceXPCClient.h"
#import "VCAudioStream.h"
#import "AVCMediaStreamConfig.h"

@interface AVCAudioStream : NSObject <VCMediaStreamDelegate>

 {
    AVConferenceXPCClient *_connection;
    VCAudioStream *_opaqueStream;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSInteger _streamToken;
}


@property (retain, nonatomic) NSDictionary *capabilities; // ivar: _capabilities
@property (retain, nonatomic) AVCMediaStreamConfig *configuration; // ivar: _configuration
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<AVCAudioStreamDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger direction;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isInputFrequencyMeteringEnabled) BOOL inputFrequencyMeteringEnabled;
@property (nonatomic, getter=isOutputFrequencyMeteringEnabled) BOOL outputFrequencyMeteringEnabled;
@property (nonatomic, getter=isRTCPEnabled) BOOL rtcpEnabled;
@property (nonatomic) CGFloat rtcpSendIntervalSec;
@property (nonatomic, getter=isRTCPTimeOutEnabled) BOOL rtcpTimeOutEnabled;
@property (nonatomic) CGFloat rtcpTimeOutIntervalSec;
@property (nonatomic, getter=isRTPTimeOutEnabled) BOOL rtpTimeOutEnabled;
@property (nonatomic) CGFloat rtpTimeOutIntervalSec;
@property (readonly) Class superclass;
@property (nonatomic) float volume;


-(BOOL)configure:(id)arg0 error:(*id)arg1 ;
-(id)initWithIDSDestination:(id)arg0 isOriginator:(BOOL)arg1 callID:(id)arg2 error:(*id)arg3 ;
-(id)initWithIDSDestination:(id)arg0 isOriginator:(BOOL)arg1 error:(*id)arg2 ;
-(id)initWithLocalAddress:(id)arg0 callID:(id)arg1 error:(*id)arg2 ;
-(id)initWithLocalAddress:(id)arg0 error:(*id)arg1 ;
-(id)initWithLocalAddress:(id)arg0 isOriginator:(BOOL)arg1 callID:(id)arg2 error:(*id)arg3 ;
-(id)initWithLocalAddress:(id)arg0 isOriginator:(BOOL)arg1 error:(*id)arg2 ;
-(id)initWithLocalAddress:(id)arg0 networkSockets:(id)arg1 IDSDestination:(id)arg2 isOriginator:(BOOL)arg3 callID:(id)arg4 error:(*id)arg5 ;
-(id)initWithNetworkSockets:(id)arg0 isOriginator:(BOOL)arg1 callID:(id)arg2 error:(*id)arg3 ;
-(id)initWithNetworkSockets:(id)arg0 isOriginator:(BOOL)arg1 error:(*id)arg2 ;
-(id)validateInitializeConnectionResult:(id)arg0 ;
-(void)dealloc;
-(void)deregisterBlocksForDelegateNotifications;
-(void)didInterruptionBeginHandler;
-(void)didInterruptionEndHandler;
-(void)pause;
-(void)refreshLoggingParameters;
-(void)registerBlocksForDelegateNotifications;
-(void)resume;
-(void)sendDTMFDigitString:(id)arg0 withVolume:(unsigned char)arg1 duration:(unsigned short)arg2 interval:(unsigned short)arg3 ;
-(void)start;
-(void)startContinuousDTMFWithDigit:(char)arg0 volume:(unsigned char)arg1 ;
-(void)startSynchronizeWithStream:(NSInteger)arg0 ;
-(void)stop;
-(void)stopContinuousDTMF;
-(void)terminateSession;
-(void)vcMediaStream:(id)arg0 didPauseStream:(BOOL)arg1 error:(id)arg2 ;
-(void)vcMediaStream:(id)arg0 didReceiveDTMFEventWithDigit:(char)arg1 ;
-(void)vcMediaStream:(id)arg0 didReceiveRTCPPackets:(id)arg1 ;
-(void)vcMediaStream:(id)arg0 didResumeStream:(BOOL)arg1 error:(id)arg2 ;
-(void)vcMediaStream:(id)arg0 didStartStream:(BOOL)arg1 error:(id)arg2 ;
-(void)vcMediaStream:(id)arg0 updateFrequencyLevel:(id)arg1 isInputMeter:(BOOL)arg2 ;
-(void)vcMediaStream:(id)arg0 updateInputFrequencyLevel:(id)arg1 ;
-(void)vcMediaStream:(id)arg0 updateOutputFrequencyLevel:(id)arg1 ;
-(void)vcMediaStreamDidRTCPTimeOut:(id)arg0 ;
-(void)vcMediaStreamDidRTPTimeOut:(id)arg0 ;
-(void)vcMediaStreamDidStop:(id)arg0 ;


@end


#endif