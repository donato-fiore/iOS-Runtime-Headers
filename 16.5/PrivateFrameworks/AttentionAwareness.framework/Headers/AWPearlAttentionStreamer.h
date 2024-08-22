// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AWPEARLATTENTIONSTREAMER_H
#define AWPEARLATTENTIONSTREAMER_H

@class BKDevicePearl, BKFaceDetectOperation, NSString;
@protocol BKDevicePearlDelegate, BKFaceDetectOperationDelegate, OS_dispatch_queue, OS_dispatch_semaphore;


#import "StreamingOperation.h"

@interface AWPearlAttentionStreamer : StreamingOperation <BKDevicePearlDelegate, BKFaceDetectOperationDelegate>

 {
    BKDevicePearl *_pearlDevice;
    BKFaceDetectOperation *_pendingPresenceOperation;
    BKFaceDetectOperation *_finishingPresenceOperation;
    id *_callbackBlock;
    id *_notificationBlock;
    BOOL _attentionStreamerRunning;
    BOOL _unitTest;
    NSObject<OS_dispatch_queue> *_queue;
    int _attentionAwareFeaturesEnabledNotification;
    BOOL _isAttentionAwareFeaturesEnabled;
    int _displayNotifyToken;
    BOOL _displayOn;
    BOOL _smartCoverClosed;
    NSObject<OS_dispatch_semaphore> *_sem;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isStreamerRunning;
-(id)cancelEventStream;
-(id)initForUnitTest:(BOOL)arg0 queue:(id)arg1 ;
// -(id)streamEventWithBlock:(id)arg0 options:(unk)arg1  ;
// -(unk)getStreamerOptions ;
-(void)operation:(id)arg0 faceDetectStateChanged:(id)arg1 ;
-(void)operation:(id)arg0 finishedWithReason:(NSInteger)arg1 ;
-(void)setDisplayState:(BOOL)arg0 ;
-(void)setDisplayStateFromNotification;
-(void)setNotificationHandler:(id)arg0 ;
-(void)setSmartCoverState:(BOOL)arg0 ;


@end


#endif