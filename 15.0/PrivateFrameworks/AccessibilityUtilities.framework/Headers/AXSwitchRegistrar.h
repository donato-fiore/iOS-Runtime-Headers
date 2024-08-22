// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AXSWITCHREGISTRAR_H
#define AXSWITCHREGISTRAR_H

@protocol AXSwitchRegistrarDelegate;

#import <Foundation/Foundation.h>

#import "AXSwitch.h"
#import "AXMIDIManager.h"

@interface AXSwitchRegistrar : NSObject

@property (retain, nonatomic) AXSwitch *aSwitch; // ivar: _aSwitch
@property (nonatomic) BOOL addLongPressSwitch; // ivar: _addLongPressSwitch
@property (weak, nonatomic) NSObject<AXSwitchRegistrarDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) *__IOHIDDevice device; // ivar: _device
@property (retain, nonatomic) *__IOHIDEventSystemClient eventSystemClient; // ivar: _eventSystemClient
@property (retain, nonatomic) *__IOHIDManager manager; // ivar: _manager
@property (retain, nonatomic) AXMIDIManager *midiManager; // ivar: _midiManager


-(BOOL)_isATVRemoteButtonSwitchWithUsage:(NSInteger)arg0 longPress:(BOOL)arg1 ;
-(BOOL)_isGamepadSwitchWithKeyCode:(unsigned short)arg0 longPress:(BOOL)arg1 ;
-(BOOL)_isKeyboardSwitchWithKeyCode:(unsigned short)arg0 longPress:(BOOL)arg1 ;
-(BOOL)_isMFISwitchWithButtonNumber:(unsigned int)arg0 longPress:(BOOL)arg1 ;
-(BOOL)_isMIDISwitchWithMidiEvent:(id)arg0 ;
-(BOOL)_isSwitchWithSource:(id)arg0 keyCode:(unsigned short)arg1 buttonNumber:(unsigned int)arg2 ATVRemoteButtonUsage:(NSInteger)arg3 midiEvent:(id)arg4 ;
-(BOOL)isSwitchWithName:(id)arg0 ;
-(id)_atvRemoteMatching;
-(id)_gamepadMatching;
-(id)_keyboardMatching;
-(id)_mfiMatching;
-(id)firstAvailableName;
-(id)init;
-(void)_filterEvents:(BOOL)arg0 ;
-(void)_handleATVRemoteButtonDownEvent:(struct __IOHIDEvent *)arg0 ;
-(void)_handleApplicationDidBecomeActive:(id)arg0 ;
-(void)_handleApplicationWillResignActive:(id)arg0 ;
-(void)_handleGamepadButtonPressedEvent:(struct __IOHIDEvent *)arg0 ;
-(void)_handleKeyboardKeyDownEvent:(struct __IOHIDEvent *)arg0 ;
-(void)_handleMFIButtonDownValue:(struct __IOHIDValue *)arg0 ;
-(void)_handleMIDIEvent:(id)arg0 device:(id)arg1 entity:(id)arg2 source:(id)arg3 ;
-(void)beginFilteringEvents;
-(void)dealloc;
-(void)endFilteringEvents;


@end


#endif