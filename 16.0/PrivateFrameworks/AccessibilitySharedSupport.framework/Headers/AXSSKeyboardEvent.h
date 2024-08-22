// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXSSKEYBOARDEVENT_H
#define AXSSKEYBOARDEVENT_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "AXSSKeyChord.h"

@interface AXSSKeyboardEvent : NSObject <NSCopying>



@property (readonly, nonatomic) AXSSKeyChord *backupKeyChord;
@property (copy, nonatomic) NSString *backupUnicodeCharacter; // ivar: _backupUnicodeCharacter
@property (nonatomic) BOOL isCapsLockDown; // ivar: _isCapsLockDown
@property (readonly, nonatomic) BOOL isCommandDown;
@property (readonly, nonatomic) BOOL isControlDown;
@property (nonatomic) BOOL isDownEvent; // ivar: _isDownEvent
@property (nonatomic) BOOL isFnDown; // ivar: _isFnDown
@property (nonatomic) BOOL isLeftCommandDown; // ivar: _isLeftCommandDown
@property (nonatomic) BOOL isLeftControlDown; // ivar: _isLeftControlDown
@property (nonatomic) BOOL isLeftOptionDown; // ivar: _isLeftOptionDown
@property (nonatomic) BOOL isLeftShiftDown; // ivar: _isLeftShiftDown
@property (nonatomic) BOOL isModifierChangedEvent; // ivar: _isModifierChangedEvent
@property (readonly, nonatomic) BOOL isOptionDown;
@property (nonatomic) BOOL isRepeatEvent; // ivar: _isRepeatEvent
@property (nonatomic) BOOL isRightCommandDown; // ivar: _isRightCommandDown
@property (nonatomic) BOOL isRightControlDown; // ivar: _isRightControlDown
@property (nonatomic) BOOL isRightOptionDown; // ivar: _isRightOptionDown
@property (nonatomic) BOOL isRightShiftDown; // ivar: _isRightShiftDown
@property (readonly, nonatomic) BOOL isShiftDown;
@property (readonly, nonatomic) AXSSKeyChord *keyChord;
@property (nonatomic) NSUInteger keyCode; // ivar: _keyCode
@property (readonly, nonatomic) NSInteger modifierMask;
@property (copy, nonatomic) NSString *unicodeCharacter; // ivar: _unicodeCharacter


-(id)_keyChordForUnicodeCharacter:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;


@end


#endif