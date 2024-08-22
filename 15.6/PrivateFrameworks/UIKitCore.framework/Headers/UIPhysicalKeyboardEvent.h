// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIPHYSICALKEYBOARDEVENT_H
#define UIPHYSICALKEYBOARDEVENT_H

@class NSString;


#import "UIPressesEvent.h"

@interface UIPhysicalKeyboardEvent : UIPressesEvent {
    BOOL _canPrivatize;
}


@property (retain, nonatomic) NSString *_commandModifiedInput; // ivar: _commandModifiedInput
@property (nonatomic, getter=_isExternalEvent) BOOL _externalEvent; // ivar: __externalEvent
@property (readonly, nonatomic) NSInteger _gsModifierFlags;
@property (retain, nonatomic) NSString *_hint; // ivar: _hint
@property (nonatomic) int _inputFlags; // ivar: _inputFlags
@property (readonly, nonatomic) BOOL _isARepeat;
@property (readonly, nonatomic) BOOL _isEjectKey;
@property (readonly, nonatomic) BOOL _isGlobeKey;
@property (readonly, nonatomic) BOOL _isKeyDown;
@property (readonly, nonatomic) BOOL _isModifierKey;
@property (nonatomic) NSInteger _keyCode; // ivar: __keyCode
@property (retain, nonatomic) NSString *_markedInput; // ivar: _markedInput
@property (retain, nonatomic) NSString *_modifiedInput; // ivar: _modifiedInput
@property (nonatomic) NSInteger _modifierFlags; // ivar: _modifierFlags
@property (retain, nonatomic) NSString *_privateInput; // ivar: _privateInput
@property (nonatomic) NSInteger _privateModifierFlags; // ivar: _privateModifierFlags
@property (retain, nonatomic) NSString *_privateShiftModifiedInput; // ivar: _privateShiftModifiedInput
@property (retain, nonatomic) NSString *_shiftModifiedInput; // ivar: _shiftModifiedInput
@property (retain, nonatomic) NSString *_unmodifiedInput; // ivar: _unmodifiedInput
@property (nonatomic) NSInteger source; // ivar: _source


+(id)_eventWithInput:(id)arg0 inputFlags:(int)arg1 ;
-(BOOL)_isPhysicalKeyEvent;
-(BOOL)_matchesKeyCommand:(id)arg0 usesPrivateShiftModifiedInput:(BOOL)arg1 ;
-(BOOL)_shouldAttemptSecurePasteAuthentication;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)modifierFlags;
-(NSInteger)type;
-(id)_cloneEvent;
-(void)_privatize;
-(void)_setHIDEvent:(struct __IOHIDEvent *)arg0 keyboard:(struct __GSKeyboard *)arg1 ;


@end


#endif