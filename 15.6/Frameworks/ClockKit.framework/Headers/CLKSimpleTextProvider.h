// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLKSIMPLETEXTPROVIDER_H
#define CLKSIMPLETEXTPROVIDER_H

@class NSString;


#import "CLKTextProvider.h"

@interface CLKSimpleTextProvider : CLKTextProvider

@property (copy, nonatomic) NSString *shortText; // ivar: _shortText
@property (copy, nonatomic) NSString *text; // ivar: _text
@property (nonatomic) BOOL useAllSmallCaps; // ivar: _useAllSmallCaps
@property (nonatomic) BOOL useLowercaseSmallCaps; // ivar: _useLowercaseSmallCaps
@property (nonatomic) BOOL useNoContentDashFormatting; // ivar: _useNoContentDashFormatting


+(BOOL)supportsSecureCoding;
+(id)finalizedTextProviderWithText:(id)arg0 ;
+(id)finalizedTextProviderWithText:(id)arg0 monospaceNumbers:(BOOL)arg1 ;
+(id)textProviderWithText:(id)arg0 ;
+(id)textProviderWithText:(id)arg0 shortText:(id)arg1 ;
+(id)textProviderWithText:(id)arg0 shortText:(id)arg1 accessibilityLabel:(id)arg2 ;
-(BOOL)_validate;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)JSONObjectRepresentation;
-(id)_initWithJSONObjectRepresentation:(id)arg0 ;
-(id)_sessionAttributedTextForIndex:(NSUInteger)arg0 withStyle:(id)arg1 ;
-(id)attributedString;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithText:(id)arg0 ;
-(id)initWithText:(id)arg0 shortText:(id)arg1 ;
-(id)initWithText:(id)arg0 shortText:(id)arg1 accessibilityLabel:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif