// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVCEFFECTS_H
#define AVCEFFECTS_H

@protocol OS_dispatch_queue, AVCEffectsDelegate;

#import <Foundation/Foundation.h>

#import "AVConferenceXPCClient.h"

@interface AVCEffects : NSObject {
    AVConferenceXPCClient *_connection;
    NSObject<OS_dispatch_queue> *_avConferenceEffectsQueue;
    BOOL _isEffectsApplied;
    BOOL _isFaceMeshTrackingEnabled;
    *opaqueVCRemoteImageQueue _receiverQueue;
    *__CVBuffer _lastReceivedPixelBuffer;
    *__CVBuffer _lastReceivedDepthBuffer;
}


@property (nonatomic) NSObject<AVCEffectsDelegate> *delegate; // ivar: _delegate
@property (nonatomic) int effectType; // ivar: _effectType
@property (nonatomic) int mode; // ivar: _mode


-(BOOL)setupRemoteReceiverQueueWithSenderQueue:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 ;
-(void)avcVideoFrameDidRelease:(id)arg0 ;
-(void)dealloc;
-(void)deregisterBlocksForNotifications;
-(void)encodeProcessedVideoFrame:(id)arg0 ;
-(void)registerBlocksForNotifications;
-(void)remoteQueueOperationHandlerWithError:(int)arg0 operation:(struct FigRemoteOperation *)arg1 ;


@end


#endif