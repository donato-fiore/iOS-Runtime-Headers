// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GCMOUSEINPUT_H
#define GCMOUSEINPUT_H

@class NSMutableArray, UIWindow, NSArray;


#import "GCPhysicalInputProfile.h"
#import "GCControllerButtonInput.h"
#import "GCDeviceCursor.h"

@interface GCMouseInput : GCPhysicalInputProfile {
    BOOL _isActive;
    BOOL _wasInitialized;
    NSInteger _buttons;
    NSMutableArray *_auxiliaryButtons;
    UIWindow *_window;
    id *_mouseMovedHandlerPrivate;
    id *_mouseButtonPressedPrivate;
}


@property (readonly, nonatomic) NSArray *auxiliaryButtons;
@property (readonly, nonatomic) GCControllerButtonInput *leftButton; // ivar: _leftButton
@property (readonly, nonatomic) GCControllerButtonInput *middleButton; // ivar: _middleButton
@property (copy, nonatomic) id *mouseMovedHandler; // ivar: _mouseMovedHandler
@property (readonly, nonatomic) GCControllerButtonInput *rightButton; // ivar: _rightButton
@property (readonly, nonatomic) GCDeviceCursor *scroll; // ivar: _scroll


-(BOOL)_handleEventRec:(struct __IOHIDEvent *)arg0 ;
-(BOOL)shouldAcceptMouseEvents;
-(NSInteger)_mouseButtons;
-(id)initWithController:(id)arg0 ;
-(id)mouseButtonPressedPrivate:(SEL)arg0 ;
-(id)name;
-(id)productCategory;
-(void)_fireMouseMovedWithQueue:(id)arg0 deltaX:(float)arg1 deltaY:(float)arg2 ;
-(void)_handleButtonEvent:(NSInteger)arg0 ;
-(void)_handleDigitizerEvent:(struct CGPoint )arg0 ;
-(void)_handleEventImpl:(struct __IOHIDEvent *)arg0 ;
-(void)_handlePointerEvent:(struct CGPoint )arg0 ;
-(void)_handleScrollEvent:(struct CGPoint )arg0 ;
-(void)appDidBecomeActive;
-(void)appWillResignActive;
-(void)handleEvent:(struct __IOHIDEvent *)arg0 ;
-(void)setMouseButtonPressedPrivate:(id)arg0 ;


@end


#endif