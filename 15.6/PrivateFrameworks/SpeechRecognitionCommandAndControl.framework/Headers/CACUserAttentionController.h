// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CACUSERATTENTIONCONTROLLER_H
#define CACUSERATTENTIONCONTROLLER_H

@class AWAttentionAwarenessClient, CMWakeGestureManager, NSMutableDictionary, NSString;
@protocol CMWakeGestureDelegate, OS_dispatch_queue, CACUserAttentionControllerDelegate;

#import <Foundation/Foundation.h>

#import "CACUserAttentionSignalProviderFactory.h"

@interface CACUserAttentionController : NSObject <CMWakeGestureDelegate>

 {
    CACUserAttentionSignalProviderFactory *_userAttentionSignalProviderFactory;
    NSUInteger _supportedAttentionAwarenessEvents;
    BOOL _deviceSupportsRaiseGestureDetection;
    AWAttentionAwarenessClient *_faceAttentionAwarenessClient;
    AWAttentionAwarenessClient *_touchAttentionAwarenessClient;
    CMWakeGestureManager *_wakeGestureManager;
    NSObject<OS_dispatch_queue> *_attentionAwarenessHandlerQueue;
    NSMutableDictionary *_attentionDetectionStatuses;
    NSObject<OS_dispatch_queue> *_asynchronousCallQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CACUserAttentionControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=_isDeviceLowered, setter=_setDeviceLowered:) BOOL deviceLowered; // ivar: _deviceLowered
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_detectionStartedForType:(NSUInteger)arg0 ;
-(BOOL)_deviceSupportsFaceDetection;
-(BOOL)_restartFaceAttentionAwarenessClient:(*id)arg0 ;
-(BOOL)_startFaceAttentionAwarenessClient:(*id)arg0 ;
-(BOOL)_startTouchAttentionAwarenessClient:(*id)arg0 ;
-(BOOL)_stopFaceAttentionAwarenessClient:(*id)arg0 ;
-(BOOL)_stopTouchAttentionAwarenessClient:(*id)arg0 ;
-(BOOL)startIfNeeded:(*id)arg0 ;
-(BOOL)startIfNeededForTypes:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)stopIfNeeded:(*id)arg0 ;
-(BOOL)stopIfNeededForTypes:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)initWithSamplingInterval:(CGFloat)arg0 attentionLossTimeout:(CGFloat)arg1 supportedAttentionAwarenessEvents:(NSUInteger)arg2 deviceSupportsRaiseGestureDetection:(BOOL)arg3 ;
-(id)initWithSignalProviderFactory:(id)arg0 supportedAttentionAwarenessEvents:(NSUInteger)arg1 deviceSupportsRaiseGestureDetection:(BOOL)arg2 ;
-(void)_handleFaceAttentionEvent:(id)arg0 ;
-(void)_handleFaceInterruptNotification:(NSUInteger)arg0 ;
-(void)_handleTouchAttentionEvent:(id)arg0 ;
-(void)_setDetectionStarted:(BOOL)arg0 forType:(NSUInteger)arg1 ;
-(void)_startWakeGestureManagerIfNeeded;
-(void)_stopWakeGestureManagerIfNeeded;
-(void)dealloc;
-(void)startIfNeededForTypes:(NSUInteger)arg0 completionQueue:(id)arg1 completion:(id)arg2 ;
-(void)wakeGestureManager:(id)arg0 didUpdateWakeGesture:(NSInteger)arg1 ;


@end


#endif