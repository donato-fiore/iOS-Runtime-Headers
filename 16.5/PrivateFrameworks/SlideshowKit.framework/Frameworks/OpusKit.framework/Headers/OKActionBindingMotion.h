// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OKACTIONBINDINGMOTION_H
#define OKACTIONBINDINGMOTION_H

@class NSMutableDictionary, CMMotionManager, NSOperationQueue, UILongPressGestureRecognizer, NSString, CMAttitude;
@protocol UIGestureRecognizerDelegate;


#import "OKActionBinding.h"

@interface OKActionBindingMotion : OKActionBinding <UIGestureRecognizerDelegate>

 {
    NSMutableDictionary *_motionContext;
    BOOL _shouldForwardMotion;
    CMMotionManager *_motionManager;
    NSOperationQueue *_motionQueue;
    CGFloat _lastYaw;
    CGFloat _lastRoll;
    CGFloat _lastPitch;
    CGFloat _lastRotationX;
    CGFloat _lastRotationY;
    CGFloat _lastRotationZ;
    CGPoint _lastLocation;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) CMAttitude *motionAttitudeReference; // ivar: _motionAttitudeReference
@property (nonatomic) CGFloat motionInterval; // ivar: _motionInterval
@property (nonatomic) NSUInteger numberOfTouchesRequired; // ivar: _numberOfTouchesRequired
@property (readonly) Class superclass;


+(id)supportedSettings;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)respondsToAction:(id)arg0 isTouchCountAgnostic:(BOOL)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithSettings:(id)arg0 ;
-(id)settingObjectForKey:(id)arg0 ;
-(void)dealloc;
-(void)handleLongPress:(id)arg0 ;
-(void)loadForResponder:(id)arg0 scope:(NSUInteger)arg1 ;
-(void)unload;


@end


#endif