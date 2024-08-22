// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TVRCKEYBOARDATTRIBUTES_H
#define TVRCKEYBOARDATTRIBUTES_H

@class NSString, RTIDataPayload;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "TVRCPINEntryAttributes.h"

@interface TVRCKeyboardAttributes : NSObject <NSSecureCoding>



@property (retain, nonatomic) TVRCPINEntryAttributes *PINEntryAttributes; // ivar: _PINEntryAttributes
@property (nonatomic, getter=_autocapitalizationType, setter=_setAutocapitalizationType:) NSInteger autocapitalizationType; // ivar: _autocapitalizationType
@property (nonatomic, getter=_autocorrectionType, setter=_setAutocorrectionType:) NSInteger autocorrectionType; // ivar: _autocorrectionType
@property (nonatomic, getter=_enablesReturnKeyAutomatically, setter=_setEnablesReturnKeyAutomatically:) BOOL enablesReturnKeyAutomatically; // ivar: _enablesReturnKeyAutomatically
@property (nonatomic, getter=_keyboardType, setter=_setKeyboardType:) NSInteger keyboardType; // ivar: _keyboardType
@property (nonatomic, getter=_isLikelyPINEntry, setter=_setLikelyPINEntry:) BOOL likelyPINEntry; // ivar: _likelyPINEntry
@property (copy, nonatomic) NSString *prompt; // ivar: _prompt
@property (nonatomic, getter=_returnKeyType, setter=_setReturnKeyType:) NSInteger returnKeyType; // ivar: _returnKeyType
@property (retain, nonatomic) RTIDataPayload *rtiDataPayload; // ivar: _rtiDataPayload
@property (nonatomic, getter=_isSecure, setter=_setSecure:) BOOL secure; // ivar: _secure
@property (nonatomic, getter=_spellCheckingType, setter=_setSpellCheckingType:) NSInteger spellCheckingType; // ivar: _spellCheckingType
@property (copy, nonatomic) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToAttributes:(id)arg0 ;
-(NSUInteger)hash;
-(id)_init;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)applyToTextField:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif