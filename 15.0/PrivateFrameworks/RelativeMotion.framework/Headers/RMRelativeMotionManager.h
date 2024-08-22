// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RMRELATIVEMOTIONMANAGER_H
#define RMRELATIVEMOTIONMANAGER_H

@class NSUserDefaults, NSDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "RMDummyDataManager.h"
#import "RMAudioListenerPoseManager.h"

@interface RMRelativeMotionManager : NSObject {
    RMDummyData" _dummyDataBuffer;
    int _dummyDataBufferIndex;
    os_unfair_lock_s _dummyDataBufferLock;
    int _currentDummyDataBufferIndex;
    ? _audioListenerPoseBuffer;
    NSInteger _audioListenerPoseErrorBuffer;
    int _audioListenerPoseBufferIndex;
    os_unfair_lock_s _audioListenerPoseBufferLock;
    BOOL _shouldReceiveDummyData;
    BOOL _shouldReceiveAudioListenerPose;
    BOOL _verboseLatencyAnalysisLogging;
    int _currentAudioListenerPoseBufferIndex;
    NSObject<OS_dispatch_queue> *_queue;
    RMDummyDataManager *_dummyDataManager;
    NSUserDefaults *_defaults;
    RMAudioListenerPoseManager *_audioListenerPoseManager;
}


@property (retain, nonatomic) NSDictionary *audioListenerPoseOptions; // ivar: _audioListenerPoseOptions


+(BOOL)isAudioListenerPoseAvailable;
-(NSInteger)getCurrentAudioListenerPose:(struct ? *)arg0 timestamp:(*CGFloat)arg1 ;
-(id)getCurrentAudioListenerPoseWithError:(*NSInteger)arg0 ;
-(id)getCurrentDummyData;
-(id)initWithQueue:(id)arg0 ;
-(void)dealloc;
-(void)resetAudioListenerPoseTrackingForAllClients;
-(void)startReceivingAudioListenerPoseWithStatusCallback:(id)arg0 ;
-(void)startReceivingDummyData;
-(void)stopReceivingAudioListenerPose;
-(void)stopReceivingDummyData;


@end


#endif