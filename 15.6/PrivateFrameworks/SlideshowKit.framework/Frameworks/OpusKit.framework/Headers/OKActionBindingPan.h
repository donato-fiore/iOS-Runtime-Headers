// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OKACTIONBINDINGPAN_H
#define OKACTIONBINDINGPAN_H

@class NSMutableDictionary, UIPanGestureRecognizer, NSString;
@protocol UIGestureRecognizerDelegate;


#import "OKActionBinding.h"

@interface OKActionBindingPan : OKActionBinding <UIGestureRecognizerDelegate>

 {
    NSMutableDictionary *_actionContext;
    UIPanGestureRecognizer *_panGestureRecognizer;
    CGPoint _previousLocation;
    CGPoint _previousTranslation;
    CGPoint _previousVelocity;
    CGPoint _direction;
    CGPoint _directionLastLocation;
}


@property (nonatomic) BOOL canPanHorizontally; // ivar: _canPanHorizontally
@property (nonatomic) BOOL canPanVertically; // ivar: _canPanVertically
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat directionThreshold; // ivar: _directionThreshold
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger maximumNumberOfTouches; // ivar: _maximumNumberOfTouches
@property (nonatomic) NSUInteger minimumNumberOfTouches; // ivar: _minimumNumberOfTouches
@property (readonly) Class superclass;


+(id)supportedSettings;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)ownsGestureRecognizer:(id)arg0 ;
-(BOOL)respondsToAction:(id)arg0 isTouchCountAgnostic:(BOOL)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithSettings:(id)arg0 ;
-(id)settingObjectForKey:(id)arg0 ;
-(void)dealloc;
-(void)handlePan:(id)arg0 ;
-(void)loadForResponder:(id)arg0 scope:(NSUInteger)arg1 ;
-(void)performActionWithState:(NSUInteger)arg0 location:(struct CGPoint )arg1 touchCount:(NSUInteger)arg2 translation:(struct CGPoint )arg3 velocity:(struct CGPoint )arg4 direction:(NSUInteger)arg5 context:(id)arg6 ;
-(void)unload;


@end


#endif