// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDVIDEOSTREAMINTERFACE_H
#define HMDVIDEOSTREAMINTERFACE_H

@class NSString, HMFOSTransaction, NSNumber, AVCVideoStream;
@protocol AVCVideoStreamDelegate, HMDVideoStreamReconfigureDelegate, HMDVideoStreamInterfaceDelegate, HMDVideoStreamLastDecodedFrameDelegate, OS_dispatch_queue;


#import "HMDStreamInterface.h"
#import "HMDVideoStreamReconfigure.h"

@interface HMDVideoStreamInterface : HMDStreamInterface <AVCVideoStreamDelegate, HMDVideoStreamReconfigureDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak) NSObject<HMDVideoStreamInterfaceDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak) NSObject<HMDVideoStreamLastDecodedFrameDelegate> *lastFrameDelegate; // ivar: _lastFrameDelegate
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *lastFrameDelegateQueue; // ivar: _lastFrameDelegateQueue
@property (nonatomic, getter=isRTCPEnabled) BOOL rtcpEnabled;
@property (nonatomic) CGFloat rtcpSendIntervalSec; // ivar: _rtcpSendIntervalSec
@property (nonatomic, getter=isRTCPTimeOutEnabled) BOOL rtcpTimeOutEnabled;
@property (nonatomic) CGFloat rtcpTimeOutIntervalSec;
@property (nonatomic, getter=isRTPTimeOutEnabled) BOOL rtpTimeOutEnabled;
@property (nonatomic) CGFloat rtpTimeOutIntervalSec;
@property (retain, nonatomic) HMFOSTransaction *snapshotDataTrasaction; // ivar: _snapshotDataTrasaction
@property (readonly, nonatomic) NSNumber *streamToken;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSNumber *syncSource;
@property (retain, nonatomic) AVCVideoStream *videoStream; // ivar: _videoStream
@property (readonly, nonatomic) HMDVideoStreamReconfigure *videoStreamReconfigure; // ivar: _videoStreamReconfigure


+(id)logCategory;
-(BOOL)_createLocalSocketWithNetworkConfig:(id)arg0 ;
-(BOOL)_initializeLocalStreamWithLocalNetworkConfig:(id)arg0 ;
-(BOOL)_initializeStreamRemoteDestinationReceiver:(id)arg0 ;
-(BOOL)_initializeStreamRemoteSender:(id)arg0 localNetworkConfig:(id)arg1 ;
-(BOOL)_initializeStreamRemoteSocketReceiver:(id)arg0 ;
-(id)initWithSessionID:(id)arg0 workQueue:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3 sessionHandler:(id)arg4 localNetworkConfig:(id)arg5 ;
-(id)logIdentifier;
-(void)_callDidGetLastDecodedFrame:(id)arg0 ;
-(void)_callDidUpdateConfiguration;
-(void)_callNetworkDeteriorated;
-(void)_callNetworkImproved;
-(void)_callStarted:(id)arg0 ;
-(void)_callStopped:(id)arg0 ;
-(void)_startStreamWithConfig:(id)arg0 ;
-(void)captureSnapshot;
-(void)dealloc;
-(void)setRtcpSendInterval:(CGFloat)arg0 ;
-(void)setSnapshotDelegate:(id)arg0 delegateQueue:(id)arg1 ;
-(void)startStreamWithConfig:(id)arg0 ;
-(void)stopStream;
-(void)stream:(id)arg0 didGetLastDecodedFrame:(id)arg1 ;
-(void)stream:(id)arg0 didStart:(BOOL)arg1 error:(id)arg2 ;
-(void)stream:(id)arg0 didUpdateVideoConfiguration:(BOOL)arg1 error:(id)arg2 ;
-(void)stream:(id)arg0 downlinkQualityDidChange:(id)arg1 ;
-(void)streamDidRTCPTimeOut:(id)arg0 ;
-(void)streamDidRTPTimeOut:(id)arg0 ;
-(void)streamDidServerDie:(id)arg0 ;
-(void)streamDidStop:(id)arg0 ;
-(void)updateReconfigurationMode:(BOOL)arg0 ;
-(void)updateStreamConfiguration:(id)arg0 ;
-(void)videoStreamReconfigureDidNetworkDeteriorate:(id)arg0 ;
-(void)videoStreamReconfigureDidNetworkImprove:(id)arg0 ;


@end


#endif