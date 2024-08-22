// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DIATTRIBUTETEXT_H
#define DIATTRIBUTETEXT_H

@class NSString;
@protocol NSSecureCoding;


#import "DIAttribute.h"

@interface DIAttributeText : DIAttribute <NSSecureCoding>



@property (copy, nonatomic, getter=getCurrentValue) NSString *currentValue; // ivar: currentValue
@property (copy, nonatomic) NSString *defaultValue; // ivar: defaultValue
@property (copy, nonatomic) NSString *displayFormatPlaceholder; // ivar: _displayFormatPlaceholder
@property (nonatomic) BOOL isNumeric; // ivar: _isNumeric
@property (nonatomic) BOOL isSecureText; // ivar: _isSecureText
@property (nonatomic) BOOL isSecureVisibleText; // ivar: _isSecureVisibleText
@property (nonatomic, getter=useLuhnCheck) BOOL luhnCheck; // ivar: _luhnCheck
@property (nonatomic) NSUInteger maxLength; // ivar: _maxLength
@property (nonatomic) NSUInteger minLength; // ivar: _minLength


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)displayFormatPaddingCharacters;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)submissionString;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif