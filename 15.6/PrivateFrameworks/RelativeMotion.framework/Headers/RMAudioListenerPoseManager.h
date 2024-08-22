// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RMAUDIOLISTENERPOSEMANAGER_H
#define RMAUDIOLISTENERPOSEMANAGER_H

@class NSDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "RMConnectionClient.h"

@interface RMAudioListenerPoseManager : NSObject {
    BOOL _isReceivingRelatveData;
    NSObject<OS_dispatch_queue> *_queue;
    id *_poseCallbackInternal;
    id *_statusCallback;
    RMConnectionClient *_connectionClient;
}


@property (retain, nonatomic) NSDictionary *tempestOptions; // ivar: _tempestOptions


-(id)initWithQueue:(id)arg0 ;
-(void)invalidate;
// -(void)startReceivingAudioListenerPoseUpdatesWithForceSessionRestart:(BOOL)arg0 poseCallback:(id)arg1 statusCallback:(unk)arg2  ;
// -(void)startReceivingAudioListenerPoseUpdatesWithForceSessionRestart:(BOOL)arg0 poseCallbackInternal:(id)arg1 statusCallback:(unk)arg2  ;
-(void)stopReceivingAudioListenerPoseUpdates;


@end


#endif