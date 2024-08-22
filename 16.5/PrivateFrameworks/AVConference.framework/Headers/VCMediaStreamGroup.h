// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCMEDIASTREAMGROUP_H
#define VCMEDIASTREAMGROUP_H

@class NSArray, NSDictionary, NSString, TimingCollection;
@protocol VCMediaStreamDelegate, VCMediaCaptureController, VCSecurityEventHandler, VCMediaStreamNotification, OS_dispatch_queue;


#import "VCObject.h"
#import "VCNetworkFeedbackController.h"
#import "VCMediaKeyIndex.h"
#import "VCSecurityKeyManager.h"
#import "VCMoments.h"
#import "AVCStatisticsCollector.h"

@interface VCMediaStreamGroup : VCObject <VCMediaStreamDelegate, VCMediaCaptureController, VCSecurityEventHandler, VCMediaStreamNotification>

 {
    NSArray *_mediaStreams;
    NSDictionary *_groupEntries;
    NSString *_participantUUID;
    NSString *_sessionUUID;
    NSObject<OS_dispatch_queue> *_stateQueue;
    VCNetworkFeedbackController *_networkFeedbackController;
    TimingCollection *_perfTimers;
    CGFloat _creationTime;
    CGFloat _firstMediaPacketTime;
    CGFloat _firstMediaKeyIndexTime;
    BOOL _firstMediaFrameGapDetected;
    VCMediaKeyIndex *_firstMediaKeyIndex;
    BOOL _areStreamsSuspended;
    id *_delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSUInteger _idsParticipantID;
    unsigned int _rtpTimestampRate;
    id *_captureController;
    VCSecurityKeyManager *_securityKeyManager;
    *tagVCJBTargetEstimatorSynchronizer _jbTargetEstimatorSynchronizer;
}


@property (nonatomic) NSObject<VCMediaCaptureController> *captureController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL encryptionInfoReceived; // ivar: _encryptionInfoReceived
@property (readonly, nonatomic) BOOL hasRepairedStreams; // ivar: _hasRepairedStreams
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *mediaStreamInfoArray; // ivar: _mediaStreamInfoArray
@property (nonatomic) unsigned int mediaSubtype; // ivar: _mediaSubtype
@property (nonatomic) unsigned int mediaType; // ivar: _mediaType
@property (retain, nonatomic) VCMoments *moments; // ivar: _moments
@property (readonly, nonatomic) unsigned int state; // ivar: _state
@property (retain, nonatomic) AVCStatisticsCollector *statisticsCollector; // ivar: _statisticsCollector
@property (readonly, nonatomic) unsigned int streamGroupID; // ivar: _streamGroupID
@property (readonly, nonatomic) NSDictionary *streamIDToMediaStreamMap; // ivar: _streamIDToMediaStreamMap
@property (readonly, nonatomic) NSInteger streamToken; // ivar: _streamToken
@property (readonly) Class superclass;
@property (nonatomic) unsigned int syncGroupID; // ivar: _syncGroupID


-(BOOL)addSyncDestination:(id)arg0 ;
-(BOOL)configureStreams;
-(BOOL)containsStreamWithIDSStreamID:(unsigned short)arg0 ;
-(BOOL)containsStreamWithSSRC:(unsigned int)arg0 ;
-(BOOL)handleEncryptionInfoChange:(id)arg0 ;
-(BOOL)removeSyncDestination:(id)arg0 ;
-(BOOL)setupStreamsWithConfig:(id)arg0 ;
-(BOOL)shouldSetPause:(BOOL)arg0 onStream:(id)arg1 ;
-(id)initWithConfig:(id)arg0 ;
-(id)pause;
-(id)pauseMediaStreams;
-(id)resume;
-(id)resumeMediaStreams;
-(id)setPauseOnMediaStreams:(BOOL)arg0 ;
-(id)start;
-(id)startCapture;
-(id)startMediaStreams;
-(id)stop;
-(id)stopCapture;
-(id)stopMediaStreams;
-(id)willStart;
-(void)callDelegateWithBlock:(id)arg0 ;
-(void)collectAndLogChannelMetrics:(struct ? *)arg0 ;
-(void)dealloc;
-(void)didEncryptionKeyRollTimeout;
-(void)didPause:(BOOL)arg0 ;
-(void)didReceiveRTCPPackets:(struct _RTCPPacketList *)arg0 ;
-(void)didStart;
-(void)didStop;
-(void)finalizePerfTimersForFirstMediaFrameWithTime:(CGFloat)arg0 ;
-(void)handleActiveConnectionChange:(id)arg0 ;
-(void)mediaStream:(id)arg0 didReceiveNewMediaKeyIndex:(id)arg1 ;
-(void)mediaStream:(id)arg0 didReceiveRTPGapForMediaKeyIndex:(id)arg1 ;
-(void)registerMediaStreamNotificationDelegate;
-(void)resetDecryptionTimeout;
-(void)setFirstMKIToFirstMediaReceivedTimerForMKIReceivedTime;
-(void)setParticipantJoinedToFirstMKITimer;
-(void)setTotalMediaStallSaveIntervalWithTime:(CGFloat)arg0 ;
-(void)setupPerfTimersWithMediaKeyIndex:(id)arg0 perfTimerIndexToStart:(int)arg1 ;
-(void)unregisterMediaStreamNotificationDelegate;
-(void)vcMediaStreamServerDidDie:(id)arg0 ;
-(void)willStop;


@end


#endif