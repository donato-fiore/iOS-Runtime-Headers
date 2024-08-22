// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TVMEDIAPLAYBACKMANAGER_H
#define TVMEDIAPLAYBACKMANAGER_H

@class NSTimer, NSString, UIViewController<TVMediaController>, UITapGestureRecognizer, UIPanGestureRecognizer;
@protocol UIGestureRecognizerDelegate, TVMediaPlaybackManagerDelegate;

#import <Foundation/Foundation.h>

#import "_TVNonFocusSwipeUpCapture.h"

@interface TVMediaPlaybackManager : NSObject <UIGestureRecognizerDelegate>

 {
    int _mediaPlaybackState;
    int _mediaPlaybackTrigger;
    NSUInteger _mediaPlaybackStateModifier;
    NSUInteger _mediaPlaybackTriggerModifier;
    NSTimer *_backgroundedTimer;
    _TVNonFocusSwipeUpCapture *_swipeUpCapture;
    ? _delegateFlags;
    BOOL _isFirstAppearance;
}


@property (readonly, nonatomic) NSInteger currentUIMode;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<TVMediaPlaybackManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL goesToForegroundOnFirstAppear; // ivar: _goesToForegroundOnFirstAppear
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIViewController<TVMediaController> *mediaController; // ivar: _mediaController
@property (readonly, nonatomic) UITapGestureRecognizer *menuGestureRecognizer; // ivar: _menuGestureRecognizer
@property (readonly, nonatomic) BOOL shouldHideUI;
@property (nonatomic) CGFloat showcaseFactor; // ivar: _showcaseFactor
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIPanGestureRecognizer *swipeUpGestureRecognizer;


-(BOOL)_canMenu;
-(BOOL)_canSwipeUp;
-(BOOL)_shouldPause;
-(BOOL)onSupplementaryUIShouldPresent;
-(id)initWithMediaController:(id)arg0 ;
-(int)_processBackgroundedStateTriggers;
-(int)_processForegroundedStateTriggers;
-(int)_processPausedStateTriggers;
-(int)_processUndefinedStateTriggers;
-(int)_processWaitingForTimeoutStateTriggers;
-(int)_processWillBeBackgroundedStateTriggers;
-(int)_processWillBeForegroundedStateTriggers;
-(void)_onMenu;
-(void)_onShowcaseFactorDidChange;
-(void)_onSwipeUp;
-(void)_onTimeout;
-(void)_processStateEnter;
-(void)_processStateExit;
-(void)_processTrigger;
-(void)_scheduleBackgroundedTimer;
-(void)dealloc;
-(void)onAppear;
-(void)onDisappear;
-(void)onEvent;
-(void)onMediaControllerStateDidChange;
-(void)onSupplementaryUIShouldDismiss;


@end


#endif