// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SASUIDEVICESCREENENGAGEMENTCONTROLLER_H
#define SASUIDEVICESCREENENGAGEMENTCONTROLLER_H

@class AWAttentionAwarenessClient, NSMutableDictionary;
@protocol OS_dispatch_queue, SASUIDeviceScreenEngagementControllerDelegate;

#import <Foundation/Foundation.h>

#import "SASUIUserEngagementProviderFactory.h"

@interface SASUIDeviceScreenEngagementController : NSObject {
    SASUIUserEngagementProviderFactory *_userAttentionSignalProviderFactory;
    AWAttentionAwarenessClient *_touchAttentionAwarenessClient;
    AWAttentionAwarenessClient *_buttonPressAwarenessClient;
    NSMutableDictionary *_attentionDetectionStatuses;
    NSObject<OS_dispatch_queue> *_attentionAwarenessHandlerQueue;
}


@property (weak, nonatomic) NSObject<SASUIDeviceScreenEngagementControllerDelegate> *delegate; // ivar: _delegate


-(BOOL)_detectionStartedForType:(NSUInteger)arg0 ;
-(BOOL)_startButtonPressAttentionAwarenessClient:(*id)arg0 ;
-(BOOL)_startTouchAttentionAwarenessClient:(*id)arg0 ;
-(BOOL)_stopButtonPressAttentionAwarenessClient:(*id)arg0 ;
-(BOOL)_stopTouchAttentionAwarenessClient:(*id)arg0 ;
-(BOOL)startIfNeeded:(*id)arg0 ;
-(BOOL)startIfNeededForTypes:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)stopIfNeeded:(*id)arg0 ;
-(BOOL)stopIfNeededForTypes:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)initWithSamplingInterval:(CGFloat)arg0 attentionLostTimeout:(CGFloat)arg1 ;
-(id)initWithSignalProviderFactory:(id)arg0 ;
-(void)_handleButtonPressAttentionEvent:(id)arg0 ;
-(void)_handleTouchAttentionEvent:(id)arg0 ;
-(void)_setDetectionStarted:(BOOL)arg0 forType:(NSUInteger)arg1 ;
-(void)dealloc;
-(void)startIfNeededForTypes:(NSUInteger)arg0 completionQueue:(id)arg1 completion:(id)arg2 ;


@end


#endif