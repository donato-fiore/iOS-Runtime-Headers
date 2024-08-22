// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXEVENTKEYINFOREPRESENTATION_H
#define AXEVENTKEYINFOREPRESENTATION_H

@class NSString;
@protocol AXEventRepresentationDescription, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface AXEventKeyInfoRepresentation : NSObject <AXEventRepresentationDescription, NSSecureCoding, NSCopying>



@property (nonatomic) unsigned short alternativeKeyCode; // ivar: _alternativeKeyCode
@property (copy, nonatomic) NSString *backupModifiedInput; // ivar: _backupModifiedInput
@property (copy, nonatomic) NSString *backupShiftModifiedInput; // ivar: _backupShiftModifiedInput
@property (copy, nonatomic) NSString *backupUnmodifiedInput; // ivar: _backupUnmodifiedInput
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned int gsModifierState; // ivar: _gsModifierState
@property (readonly) NSUInteger hash;
@property (nonatomic) unsigned short keyCode; // ivar: _keyCode
@property (nonatomic) BOOL keyDown; // ivar: _keyDown
@property (copy, nonatomic) NSString *modifiedInput; // ivar: _modifiedInput
@property (nonatomic) unsigned int modifierState; // ivar: _modifierState
@property (copy, nonatomic) NSString *shiftModifiedInput; // ivar: _shiftModifiedInput
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *unmodifiedInput; // ivar: _unmodifiedInput
@property (nonatomic) unsigned int usagePage; // ivar: _usagePage


+(BOOL)supportsSecureCoding;
+(struct __GSKeyboard *)_getUIKitKeyboardRef;
+(struct __GSKeyboard *)_getUSUIKitKeyboardRef;
+(unsigned char)_getIOHIDKeyboardTypeForGSKeyboardType:(unsigned char)arg0 ;
+(void)prepareForKeycodeTranslation;
-(id)accessibilityEventRepresentationTabularDescription;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(struct __GSKeyboard *)_getUIKitKeyboardRef;
-(struct __GSKeyboard *)_getUSUIKitKeyboardRef;
-(void)encodeWithCoder:(id)arg0 ;
-(void)translateKeycode;
-(void)translateStringToKeycode;


@end


#endif