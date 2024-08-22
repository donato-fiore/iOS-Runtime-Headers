// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OKACTIONBINDINGMICROPHONENOISE_H
#define OKACTIONBINDINGMICROPHONENOISE_H

@class NSMutableDictionary, AVCaptureSession, NSTimer, UILongPressGestureRecognizer, NSString;
@protocol UIGestureRecognizerDelegate;


#import "OKActionBinding.h"

@interface OKActionBindingMicrophoneNoise : OKActionBinding <UIGestureRecognizerDelegate>

 {
    NSMutableDictionary *_actionContext;
    AVCaptureSession *_session;
    NSTimer *_timer;
    float _lastMeanAudioLevel;
    BOOL _shouldForwardMotion;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    CGPoint _lastLocation;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat interval; // ivar: _interval
@property (nonatomic) NSUInteger numberOfTouchesRequired; // ivar: _numberOfTouchesRequired
@property (readonly) Class superclass;


+(id)supportedSettings;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)respondsToAction:(id)arg0 isTouchCountAgnostic:(BOOL)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithSettings:(id)arg0 ;
-(id)settingObjectForKey:(id)arg0 ;
-(void)_updateAudioLevels:(id)arg0 ;
-(void)dealloc;
-(void)handleLongPress:(id)arg0 ;
-(void)loadForResponder:(id)arg0 scope:(NSUInteger)arg1 ;
-(void)unload;


@end


#endif