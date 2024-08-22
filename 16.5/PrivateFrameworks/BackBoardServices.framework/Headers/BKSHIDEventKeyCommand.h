// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BKSHIDEVENTKEYCOMMAND_H
#define BKSHIDEVENTKEYCOMMAND_H

@class NSString;
@protocol NSSecureCoding, BSDescriptionStreamable, NSCopying;

#import <Foundation/Foundation.h>


@interface BKSHIDEventKeyCommand : NSObject <NSSecureCoding, BSDescriptionStreamable, NSCopying>



@property (retain, nonatomic) NSString *commandModifiedInput; // ivar: _commandModifiedInput
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *input; // ivar: _input
@property (readonly) BOOL isRoutableKeyCommand;
@property (readonly, nonatomic) BOOL isTextualKeyCommand;
@property (readonly, nonatomic) NSInteger keyCode; // ivar: _keyCode
@property (readonly, nonatomic) NSInteger modifierFlags; // ivar: _modifierFlags
@property (retain, nonatomic) NSString *shiftModifiedInput; // ivar: _shiftModifiedInput
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *unmodifiedInput; // ivar: _unmodifiedInput
@property (nonatomic) NSInteger usagePage; // ivar: _usagePage


+(BOOL)_isModifierKeyWithPage:(NSInteger)arg0 usage:(NSInteger)arg1 ;
+(BOOL)_shouldMatchKeyCommandsForEvent:(struct __IOHIDEvent *)arg0 gsKeyboard:(struct __GSKeyboard *)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)keyCommandForEvent:(struct __IOHIDEvent *)arg0 gsKeyboard:(struct __GSKeyboard *)arg1 ;
+(id)keyCommandForEvent:(struct __IOHIDEvent *)arg0 gsKeyboard:(struct __GSKeyboard *)arg1 activeModifiers:(*NSInteger)arg2 ;
+(id)keyCommandWithInput:(id)arg0 modifierFlags:(NSInteger)arg1 ;
+(id)keyCommandWithKeyCode:(NSInteger)arg0 modifierFlags:(NSInteger)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isModifierOnlyCommand;
-(NSInteger)describes:(id)arg0 ;
-(id)_initWithInput:(id)arg0 keyCode:(NSInteger)arg1 modifierFlags:(NSInteger)arg2 ;
-(id)_sanitizedInputForDescription;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)_appendPropertiesCommon:(id)arg0 ;
-(void)appendDescriptionToFormatter:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif