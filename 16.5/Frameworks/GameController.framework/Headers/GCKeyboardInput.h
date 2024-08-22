// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GCKEYBOARDINPUT_H
#define GCKEYBOARDINPUT_H

@class NSArray, NSSet, NSString;
@protocol _GCKeyboardEventSink;


#import "GCPhysicalInputProfile.h"

@interface GCKeyboardInput : GCPhysicalInputProfile <_GCKeyboardEventSink>

 {
    NSArray *_keys;
    NSSet *_allCodes;
    int _numberOfKeysPressed;
    id *_keyboardEventObservation;
}


@property (readonly, nonatomic, getter=isAnyKeyPressed) BOOL anyKeyPressed;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *keyChangedHandler; // ivar: _keyChangedHandler
@property (copy, nonatomic) id *keyChangedHandlerPrivate; // ivar: _keyChangedHandlerPrivate
@property (readonly) Class superclass;


-(BOOL)hasButton:(NSInteger)arg0 ;
-(id)buttonForKeyCode:(NSInteger)arg0 ;
-(id)initWithIdentifier:(id)arg0 ;
-(id)name;
-(void)injectEvent:(id)arg0 ;
-(void)setKeyboardEventSource:(id)arg0 ;


@end


#endif