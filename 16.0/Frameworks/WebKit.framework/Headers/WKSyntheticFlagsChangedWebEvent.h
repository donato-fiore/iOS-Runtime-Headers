// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WKSYNTHETICFLAGSCHANGEDWEBEVENT_H
#define WKSYNTHETICFLAGSCHANGEDWEBEVENT_H

@class WebEvent;



@interface WKSyntheticFlagsChangedWebEvent : WebEvent



-(id)initWithCapsLockState:(BOOL)arg0 ;
-(id)initWithKeyCode:(unsigned short)arg0 modifiers:(unsigned int)arg1 keyDown:(BOOL)arg2 ;
-(id)initWithShiftState:(BOOL)arg0 ;


@end


#endif