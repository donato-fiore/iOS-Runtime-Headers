// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GCKEYBOARDINPUT_H
#define GCKEYBOARDINPUT_H

@class NSArray, NSSet;


#import "GCPhysicalInputProfile.h"

@interface GCKeyboardInput : GCPhysicalInputProfile {
    NSArray *_keys;
    NSSet *_allCodes;
    BOOL _isActive;
    int _numberOfKeysPressed;
    id *_keyChangedHandlerPrivate;
}


@property (readonly, nonatomic, getter=isAnyKeyPressed) BOOL anyKeyPressed;
@property (copy, nonatomic) id *keyChangedHandler; // ivar: _keyChangedHandler


-(BOOL)hasButton:(NSInteger)arg0 ;
-(BOOL)shouldFilterInternalEvent:(struct __IOHIDEvent *)arg0 ;
-(id)buttonForKeyCode:(NSInteger)arg0 ;
-(id)handlerQueue;
-(id)init;
-(id)initWithController:(id)arg0 ;
-(id)name;
-(id)productCategory;
-(id)setElementValuesFromKeyboardInput:(id)arg0 ;
-(void)appDidBecomeActive;
-(void)appWillResignActive;
-(void)commonInit;
-(void)handleEvent:(struct __IOHIDEvent *)arg0 ;
-(void)setKeyValue:(NSInteger)arg0 down:(BOOL)arg1 ;
-(void)setStateFromKeyboardInput:(id)arg0 ;


@end


#endif