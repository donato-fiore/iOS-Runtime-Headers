// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFTEXTFIELDCONFIGURATION_H
#define WFTEXTFIELDCONFIGURATION_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WFTextFieldConfiguration : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) BOOL allowsNegativeNumbers; // ivar: _allowsNegativeNumbers
@property (nonatomic) BOOL autoPeriodsDisabled; // ivar: _autoPeriodsDisabled
@property (copy, nonatomic) NSString *autocapitalizationType; // ivar: _autocapitalizationType
@property (copy, nonatomic) NSString *autocorrectionType; // ivar: _autocorrectionType
@property (copy, nonatomic) NSString *clearButtonMode; // ivar: _clearButtonMode
@property (nonatomic) NSUInteger dateFormatStyle; // ivar: _dateFormatStyle
@property (nonatomic) BOOL dateHintPrefersDateOnly; // ivar: _dateHintPrefersDateOnly
@property (nonatomic) BOOL doesRelativeDateFormatting; // ivar: _doesRelativeDateFormatting
@property (nonatomic) BOOL focusImmediatelyWhenPresented; // ivar: _focusImmediatelyWhenPresented
@property (nonatomic) NSInteger initialInsertionIndex; // ivar: _initialInsertionIndex
@property (copy, nonatomic) NSString *keyboardType; // ivar: _keyboardType
@property (copy, nonatomic) NSString *localizedIncompleteHintString; // ivar: _localizedIncompleteHintString
@property (nonatomic, getter=isMultiline) BOOL multiline; // ivar: _multiline
@property (copy, nonatomic) NSString *placeholder; // ivar: _placeholder
@property (copy, nonatomic) NSString *prefix; // ivar: _prefix
@property (copy, nonatomic) NSString *returnKeyType; // ivar: _returnKeyType
@property (nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry; // ivar: _secureTextEntry
@property (nonatomic) BOOL showsDateFormattingHint; // ivar: _showsDateFormattingHint
@property (nonatomic) BOOL smartDashesDisabled; // ivar: _smartDashesDisabled
@property (nonatomic) BOOL smartQuotesDisabled; // ivar: _smartQuotesDisabled
@property (copy, nonatomic) NSString *text; // ivar: _text
@property (copy, nonatomic) NSString *textAlignment; // ivar: _textAlignment
@property (copy, nonatomic) NSString *textContentType; // ivar: _textContentType
@property (nonatomic) BOOL textReplacementDisabled; // ivar: _textReplacementDisabled
@property (nonatomic) NSUInteger timeFormatStyle; // ivar: _timeFormatStyle


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif