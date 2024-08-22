// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OKACTIONBINDINGFOCUSTAP_H
#define OKACTIONBINDINGFOCUSTAP_H

@class NSString;
@protocol UIGestureRecognizerDelegate;


#import "OKActionBindingTap.h"

@interface OKActionBindingFocusTap : OKActionBindingTap <UIGestureRecognizerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL focusInEnabled; // ivar: _focusInEnabled
@property (nonatomic) BOOL focusOutEnabled; // ivar: _focusOutEnabled
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger mode; // ivar: _mode
@property (readonly) Class superclass;


+(id)supportedSettings;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)ownsGestureRecognizer:(id)arg0 ;
-(BOOL)performAction:(id)arg0 ;
-(BOOL)respondsToAction:(id)arg0 isTouchCountAgnostic:(BOOL)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithSettings:(id)arg0 ;
-(id)settingObjectForKey:(id)arg0 ;
-(void)dealloc;
-(void)handleTap:(id)arg0 ;
-(void)loadForResponder:(id)arg0 scope:(NSUInteger)arg1 ;
-(void)unload;


@end


#endif