// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVCVIDEOSTREAM_H
#define AVCVIDEOSTREAM_H

@class NSDictionary, NSString;
@protocol VCMediaStreamDelegate, OS_dispatch_queue, AVCVideoStreamDelegate;

#import <Foundation/Foundation.h>

#import "AVConferenceXPCClient.h"
#import "VCVideoStream.h"
#import "AVCMediaStreamConfig.h"

@interface AVCVideoStream : NSObject <VCMediaStreamDelegate>

 {
    AVConferenceXPCClient *_connection;
    VCVideoStream *_opaqueStream;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    BOOL _shouldUseXPC;
}


@property (retain, nonatomic) NSDictionary *capabilities; // ivar: _capabilities
@property (retain, nonatomic) AVCMediaStreamConfig *configuration; // ivar: _configuration
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<AVCVideoStreamDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger direction;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isRTCPEnabled) BOOL rtcpEnabled;
@property (nonatomic) CGFloat rtcpSendIntervalSec;
@property (nonatomic, getter=isRTCPTimeOutEnabled) BOOL rtcpTimeOutEnabled;
@property (nonatomic) CGFloat rtcpTimeOutIntervalSec;
@property (nonatomic, getter=isRTPTimeOutEnabled) BOOL rtpTimeOutEnabled;
@property (nonatomic) CGFloat rtpTimeOutIntervalSec;
@property (readonly, nonatomic) NSInteger streamToken; // ivar: _streamToken
@property (readonly) Class superclass;


+(id)extractClientDownlinkQualityInfoDictionary:(id)arg0 ;
+(id)extractClientUplinkQualityInfoDictionary:(id)arg0 ;
-(BOOL)configure:(id)arg0 error:(*id)arg1 ;
-(id)getStats;
-(id)initWithIDSDestination:(id)arg0 callID:(id)arg1 error:(*id)arg2 ;
-(id)initWithLocalAddress:(id)arg0 networkSockets:(id)arg1 IDSDestination:(id)arg2 connectionClientID:(id)arg3 callID:(id)arg4 options:(id)arg5 error:(*id)arg6 ;
-(id)initWithNWConnectionClientID:(unsigned char)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)initWithNetworkSockets:(id)arg0 callID:(id)arg1 error:(*id)arg2 ;
-(id)initWithNetworkSockets:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(void)dealloc;
-(void)deregisterBlocksForDelegateNotifications;
-(void)pause;
-(void)refreshLoggingParameters;
-(void)registerBlocksForDelegateNotifications;
-(void)requestLastDecodedFrame;
-(void)resume;
-(void)start;
-(void)stop;
-(void)terminateSession;
-(void)updateVideoConfiguration:(id)arg0 ;
-(void)vcMediaStream:(id)arg0 didPauseStream:(BOOL)arg1 error:(id)arg2 ;
-(void)vcMediaStream:(id)arg0 didReceiveRTCPPackets:(id)arg1 ;
-(void)vcMediaStream:(id)arg0 didResumeStream:(BOOL)arg1 error:(id)arg2 ;
-(void)vcMediaStream:(id)arg0 didStartStream:(BOOL)arg1 error:(id)arg2 ;
-(void)vcMediaStream:(id)arg0 didUpdateVideoConfiguration:(BOOL)arg1 error:(id)arg2 dictionary:(id)arg3 ;
-(void)vcMediaStream:(id)arg0 downlinkQualityDidChange:(id)arg1 ;
-(void)vcMediaStream:(id)arg0 uplinkQualityDidChange:(id)arg1 ;
-(void)vcMediaStreamDidRTCPTimeOut:(id)arg0 ;
-(void)vcMediaStreamDidRTPTimeOut:(id)arg0 ;
-(void)vcMediaStreamDidStop:(id)arg0 ;
-(void)vcMediaStreamServerDidDie:(id)arg0 ;


@end


#endif