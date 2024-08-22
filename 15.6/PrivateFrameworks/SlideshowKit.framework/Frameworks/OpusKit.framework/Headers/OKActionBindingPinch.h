// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OKACTIONBINDINGPINCH_H
#define OKACTIONBINDINGPINCH_H

@class OFUITrackingPinchGestureRecognizer, NSMutableDictionary, NSString;
@protocol UIGestureRecognizerDelegate;


#import "OKActionBinding.h"

@interface OKActionBindingPinch : OKActionBinding <UIGestureRecognizerDelegate>

 {
    OFUITrackingPinchGestureRecognizer *_pinchGestureRecognizer;
    CGPoint _startLocation;
    CGFloat _isRotating;
    CGFloat _startAngle;
    NSMutableDictionary *_actionContext;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)supportedSettings;
-(BOOL)ownsGestureRecognizer:(id)arg0 ;
-(BOOL)respondsToAction:(id)arg0 isTouchCountAgnostic:(BOOL)arg1 ;
-(id)init;
-(id)initWithSettings:(id)arg0 ;
-(id)settingObjectForKey:(id)arg0 ;
-(void)dealloc;
-(void)handlePinch:(id)arg0 ;
-(void)loadForResponder:(id)arg0 scope:(NSUInteger)arg1 ;
-(void)performActionWithState:(NSUInteger)arg0 location:(struct CGPoint )arg1 touchCount:(NSUInteger)arg2 scale:(CGFloat)arg3 angle:(CGFloat)arg4 translation:(struct CGPoint )arg5 velocity:(CGFloat)arg6 context:(id)arg7 ;
-(void)unload;


@end


#endif