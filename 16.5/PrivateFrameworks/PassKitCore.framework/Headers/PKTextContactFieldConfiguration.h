// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKTEXTCONTACTFIELDCONFIGURATION_H
#define PKTEXTCONTACTFIELDCONFIGURATION_H

@class NSCharacterSet, NSString, NSRegularExpression;
@protocol NSSecureCoding;


#import "PKContactFieldConfiguration.h"

@interface PKTextContactFieldConfiguration : PKContactFieldConfiguration <NSSecureCoding>



@property (readonly, nonatomic) NSCharacterSet *characterSet; // ivar: _characterSet
@property (readonly, copy, nonatomic) NSString *displayFormat; // ivar: _displayFormat
@property (readonly, copy, nonatomic) NSString *displayFormatPlaceholder; // ivar: _displayFormatPlaceholder
@property (readonly, nonatomic) BOOL isValidCharacterSet; // ivar: _isValidCharacterSet
@property (readonly, nonatomic) BOOL keepPaddingCharactersForSubmission; // ivar: _keepPaddingCharactersForSubmission
@property (readonly, nonatomic) NSInteger maxLength; // ivar: _maxLength
@property (readonly, nonatomic) NSInteger minLength; // ivar: _minLength
@property (readonly, nonatomic, getter=isNumeric) BOOL numeric; // ivar: _numeric
@property (readonly, nonatomic) NSRegularExpression *validRegex; // ivar: _validRegex


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif