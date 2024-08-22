// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OKACTIONBINDINGDYNAMICPAN_H
#define OKACTIONBINDINGDYNAMICPAN_H

@class UIAttachmentBehavior, NSString;
@protocol UIGestureRecognizerDelegate;


#import "OKActionBindingPan.h"

@interface OKActionBindingDynamicPan : OKActionBindingPan <UIGestureRecognizerDelegate>

 {
    UIAttachmentBehavior *_draggingBehavior;
}


@property (nonatomic) CGFloat damping; // ivar: _damping
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat frequency; // ivar: _frequency
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat length; // ivar: _length
@property (readonly) Class superclass;


+(id)supportedSettings;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
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