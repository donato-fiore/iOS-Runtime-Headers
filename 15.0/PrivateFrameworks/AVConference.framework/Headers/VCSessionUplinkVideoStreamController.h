// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCSESSIONUPLINKVIDEOSTREAMCONTROLLER_H
#define VCSESSIONUPLINKVIDEOSTREAMCONTROLLER_H

@class NSMutableDictionary, NSMutableSet, NSMutableArray, NSDictionary, NSArray;

#import <Foundation/Foundation.h>

#import "VCIDRScheduler.h"

@interface VCSessionUplinkVideoStreamController : NSObject {
    float _startTime;
    id *_delegate;
    NSMutableDictionary *_videoStreams;
    NSMutableDictionary *_streamInfoMap;
    NSMutableSet *_streamToPause;
    NSMutableSet *_streamToResume;
    NSMutableDictionary *_streamScheduleWifi;
    NSMutableDictionary *_streamScheduleCell;
    NSMutableDictionary *_currentStreamSchedule;
    VCIDRScheduler *_schedulerWifi;
    VCIDRScheduler *_schedulerCell;
    BOOL _pendingStreamsUpdated;
    _opaque_pthread_mutex_t _mutex;
    NSMutableArray *_streamsPendingKeyFrameGeneration;
    NSMutableArray *_streamResetIDR;
    BOOL _streamsUseRTCP;
}


@property (readonly) NSMutableDictionary *activeVideoStreams; // ivar: _activeVideoStreams
@property unsigned int captureFrameRate; // ivar: _captureFrameRate
@property (nonatomic) float currentFrameTime; // ivar: _currentFrameTime
@property (nonatomic) BOOL dynamicVideoPriorityEnabled; // ivar: _dynamicVideoPriorityEnabled
@property (copy, nonatomic) NSDictionary *pendingVideoStreams; // ivar: _pendingVideoStreams
@property (copy, nonatomic) NSArray *streamIDsCell; // ivar: _streamIDsCell
@property (copy, nonatomic) NSArray *streamIDsWifi; // ivar: _streamIDsWifi


-(BOOL)filterPendingTemporalStreams;
-(BOOL)pauseStreams;
-(BOOL)resumeStreams;
-(BOOL)setStreamsUseRTCPWithStreamInfos:(id)arg0 ;
-(BOOL)shouldGenerateIDRWithStreamSchedule:(id)arg0 ;
-(id)anchorStreamIDWithCappedVideoStreamIDs:(id)arg0 ;
-(id)delegate;
-(id)getMultiwayConfigForStreamID:(id)arg0 ;
-(id)initWithVideoStreams:(id)arg0 streamInfos:(id)arg1 delegate:(id)arg2 ;
-(id)newVideoStreamKeyFrameScheduleWithStreamIDs:(id)arg0 ;
-(id)schedulerStreamWithVideoStream:(id)arg0 ;
-(id)videoStreamPendingKeyFrameGenerationWithStreamID:(id)arg0 shouldRemoveFromPendingArray:(*BOOL)arg1 ;
-(void)dealloc;
-(void)generateKeyFrameWithStreamID:(id)arg0 ;
-(void)handleStreamsPendingKeyFrameGeneration;
-(void)handleStreamsResetIDR;
-(void)initilizeStreamInfoMapWithStreamInfos:(id)arg0 ;
-(void)lock;
-(void)restart;
-(void)selectVideoStreamForVideoPriority;
-(void)setIsLocalOnCellular:(BOOL)arg0 cappedVideoStreamIDs:(id)arg1 ;
-(void)unlock;


@end


#endif