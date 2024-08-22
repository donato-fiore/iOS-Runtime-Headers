// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AWPEARLATTENTIONSAMPLER_H
#define AWPEARLATTENTIONSAMPLER_H

@class BKDevicePearl, BKFaceDetectOperation, NSString;
@protocol BKDevicePearlDelegate, BKFaceDetectOperationDelegate, OS_dispatch_source;


#import "AWAttentionSampler.h"

@interface AWPearlAttentionSampler : AWAttentionSampler <BKDevicePearlDelegate, BKFaceDetectOperationDelegate>

 {
    BKDevicePearl *_pearlDevice;
    BKFaceDetectOperation *_pendingPresenceOperation;
    BKFaceDetectOperation *_finishingPresenceOperation;
    NSObject<OS_dispatch_source> *_operationStalledTimer;
    NSUInteger _operationCreateTime;
    NSUInteger _lastErrorTime;
    int _displayNotifyToken;
    BOOL _displayState;
    BOOL _smartCoverClosed;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSUInteger)minimumAttentionSamplerErrorRetryTime;
-(NSUInteger)nextSampleTimeForSamplingInterval:(NSUInteger)arg0 ;
-(id)init;
-(id)initForUnitTest:(BOOL)arg0 ;
-(id)unitTestSampler;
-(int)currentState;
-(void)cancelFaceDetect:(id)arg0 ;
-(void)cancelStalledTimer;
-(void)device:(id)arg0 pearlEventOccurred:(NSInteger)arg1 ;
-(void)device:(id)arg0 pearlStateChanged:(NSInteger)arg1 ;
-(void)faceDetectStalled:(id)arg0 ;
-(void)finishingFaceDetect:(id)arg0 ;
-(void)operation:(id)arg0 faceDetectStateChanged:(id)arg1 ;
-(void)operation:(id)arg0 finishedWithReason:(NSInteger)arg1 ;
-(void)operation:(id)arg0 presenceStateChanged:(BOOL)arg1 ;
-(void)operation:(id)arg0 stateChanged:(NSInteger)arg1 ;
-(void)pearlAttentionSamplerErrorOccurred;
-(void)setCurrentState:(int)arg0 ;
-(void)setDisplayState:(BOOL)arg0 ;
-(void)setDisplayStateFromNotification;
-(void)setSmartCoverClosed:(BOOL)arg0 ;
// -(void)shouldSample:(BOOL)arg0 withDeadline:(NSUInteger)arg1 withOptions:(unk)arg2  ;
-(void)startStalledTimerForOperation:(id)arg0 ;
-(void)triggerFaceDetectWithDeadline:(NSUInteger)arg0 ;
-(void)updateFaceState:(int)arg0 ;
-(void)updateFaceState:(int)arg0 withFaceMetadata:(struct AWFaceDetectMetadata *)arg1 ;
-(void)updateSamplingDeadline:(NSUInteger)arg0 forClient:(id)arg1 ;
-(void)updateSuppressedMaskWithDisplayState:(BOOL)arg0 smartCoverClosed:(BOOL)arg1 ;


@end


#endif