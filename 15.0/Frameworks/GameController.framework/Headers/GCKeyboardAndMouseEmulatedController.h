// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GCKEYBOARDANDMOUSEEMULATEDCONTROLLER_H
#define GCKEYBOARDANDMOUSEEMULATEDCONTROLLER_H

@class NSDictionary, NSArray;
@protocol OS_dispatch_queue, OS_dispatch_source;


#import "GCController.h"
#import "LeftThumbstickState.h"

@interface GCKeyboardAndMouseEmulatedController : GCController {
    NSDictionary *_mapping;
    NSDictionary *_buttons;
    float _mouseReleaseTime;
    float _mouseSensitivityLow;
    float _mouseSensitivityHigh;
    BOOL _mouseThumbstick;
    float keyboardRampValue;
    float _keyboardFalloffValue;
    BOOL _immediateLeftThumbstickMode;
    CGPoint _lastPointerLocation;
    BOOL _restorePointerLocation;
    BOOL _mainWindowIsKey;
    BOOL _fullScreen;
    NSObject<OS_dispatch_queue> *_timerQueue;
    NSArray *_leftThumbstickSensitivity;
    LeftThumbstickState *_leftThumbstickState;
    NSObject<OS_dispatch_source> *_leftThumbstickTimer;
    NSObject<OS_dispatch_source> *_mouseIdleTimer;
    uint8_t _dirtyPointer;
    os_unfair_lock_s _rightThumbstickLock;
}


@property (nonatomic) int emulatedControllerMapping; // ivar: _emulatedControllerMapping
@property (nonatomic) NSUInteger mouseSensitivity; // ivar: _mouseSensitivity
@property (nonatomic) BOOL mouseThumbstickEnabled; // ivar: _mouseThumbstickEnabled
@property (nonatomic) BOOL pointerHidden; // ivar: _pointerHidden


-(NSInteger)eventInputForName:(id)arg0 ;
-(float)findDeltaFor:(float)arg0 ;
-(id)elementForInput:(NSInteger)arg0 ;
-(id)identifier;
-(id)initEmulatedControllerWithMapping:(int)arg0 ;
-(id)nameForEventInput:(NSInteger)arg0 ;
-(id)productCategory;
-(id)readButtonsInfoFromLocalFiles;
-(id)readConfigFromLocalFiles;
-(id)readLeftThumbstickSensitivityFromLocalFiles;
-(id)tryReadPropertiesFromLocalFiles;
-(id)vendorName;
-(void)addDevice:(id)arg0 ;
-(void)insertMappingForInput:(NSInteger)arg0 withKey:(id)arg1 withKeyboard:(id)arg2 toDictionary:(id)arg3 ;
-(void)notifyButtonIfNeeded:(id)arg0 pressed:(BOOL)arg1 onQueue:(id)arg2 ;
-(void)notifyElementChangedOnQueue:(id)arg0 queue:(id)arg1 ;
-(void)remapControlsWith:(id)arg0 ;
-(void)removeDevice:(id)arg0 ;
-(void)renameButtonForInput:(NSInteger)arg0 withKey:(id)arg1 ;
-(void)setupButtons;
-(void)setupConfig;
-(void)setupLeftThumbstickSensitivity;
-(void)startKeyboardEventsListening;
-(void)startLeftThumbstickTimer;
-(void)startMouseIdleTimer;
-(void)updateWithKeyKey:(NSInteger)arg0 down:(BOOL)arg1 ;
-(void)windowDidBecomeKey:(id)arg0 ;
-(void)windowDidEnterFullScreen:(id)arg0 ;
-(void)windowDidExitFullScreen:(id)arg0 ;
-(void)windowDidResignKey:(id)arg0 ;


@end


#endif