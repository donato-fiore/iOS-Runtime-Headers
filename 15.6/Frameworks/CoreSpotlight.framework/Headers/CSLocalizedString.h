// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSLOCALIZEDSTRING_H
#define CSLOCALIZEDSTRING_H

@class NSString, NSDictionary;
@protocol CSCoderEncoder;



@interface CSLocalizedString : NSString <CSCoderEncoder>



@property (readonly, nonatomic) NSString *defaultString; // ivar: _defaultString
@property (nonatomic) BOOL didTrySettingDefaultString; // ivar: _didTrySettingDefaultString
@property (readonly, nonatomic) NSDictionary *localizedStrings; // ivar: _localizedStrings


+(BOOL)supportsSecureCoding;
-(NSUInteger)length;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLocalizedStrings:(id)arg0 ;
-(id)localizedString;
-(unsigned short)characterAtIndex:(NSUInteger)arg0 ;
-(void)encodeWithCSCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)getCharacters:(*unsigned short)arg0 range:(struct _NSRange )arg1 ;


@end


#endif