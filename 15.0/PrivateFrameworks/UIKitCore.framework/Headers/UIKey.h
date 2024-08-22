// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIKEY_H
#define UIKEY_H

@class NSString;
@protocol NSCopying, NSCoding;

#import <Foundation/Foundation.h>


@interface UIKey : NSObject <NSCopying, NSCoding>



@property (readonly, nonatomic) NSString *characters;
@property (readonly, nonatomic) NSString *charactersIgnoringModifiers;
@property (nonatomic, setter=_setKeyCode:) NSInteger keyCode; // ivar: _keyCode
@property (retain, nonatomic, setter=_setModifiedInput:) NSString *modifiedInput; // ivar: _modifiedInput
@property (nonatomic, setter=_setModifierFlags:) NSInteger modifierFlags; // ivar: _modifierFlags
@property (retain, nonatomic, setter=_setUnmodifiedInput:) NSString *unmodifiedInput; // ivar: _unmodifiedInput


-(BOOL)equalsKeyCode:(NSInteger)arg0 modifiers:(NSInteger)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)modifiersEqual:(NSInteger)arg0 ;
-(BOOL)unmodifiedKeyCodeEquals:(NSInteger)arg0 ;
-(NSInteger)modiferFlagsWithoutCapsLockOrNumberPad;
-(NSUInteger)hash;
-(id)_initWithKey:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithKeyboardEvent:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif