// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OKACTIONBINDINGFOCUSPINCH_H
#define OKACTIONBINDINGFOCUSPINCH_H

@class OFUITrackingPinchGestureRecognizer, NSString;
@protocol UIGestureRecognizerDelegate;


#import "OKActionBinding.h"

@interface OKActionBindingFocusPinch : OKActionBinding <UIGestureRecognizerDelegate>

 {
    OFUITrackingPinchGestureRecognizer *_pinchGestureRecognizer;
    NSUInteger _presentationMode;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger mode; // ivar: _mode
@property (readonly) Class superclass;


+(id)supportedSettings;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)ownsGestureRecognizer:(id)arg0 ;
-(BOOL)respondsToAction:(id)arg0 isTouchCountAgnostic:(BOOL)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithSettings:(id)arg0 ;
-(id)settingObjectForKey:(id)arg0 ;
-(void)_setFocusSize:(struct CGSize )arg0 angle:(float)arg1 toWidgetView:(id)arg2 ;
-(void)dealloc;
-(void)handlePinch:(id)arg0 ;
-(void)loadForResponder:(id)arg0 scope:(NSUInteger)arg1 ;
-(void)unload;


@end


#endif