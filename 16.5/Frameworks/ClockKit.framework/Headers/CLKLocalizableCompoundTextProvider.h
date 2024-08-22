// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLKLOCALIZABLECOMPOUNDTEXTPROVIDER_H
#define CLKLOCALIZABLECOMPOUNDTEXTPROVIDER_H

@class NSArray, NSString;


#import "CLKTextProvider.h"

@interface CLKLocalizableCompoundTextProvider : CLKTextProvider {
    NSArray *_textProviders;
    NSString *_formatKey;
}




+(BOOL)supportsSecureCoding;
-(BOOL)_validate;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)JSONObjectRepresentation;
-(id)_arrayOfTextProviderJSONObjectRepresentations;
-(id)_initWithJSONObjectRepresentation:(id)arg0 ;
-(id)_localizedStringForKey:(id)arg0 withBundle:(id)arg1 forLocalization:(id)arg2 ;
-(id)_localizedTextProviderWithBundle:(id)arg0 forLocalization:(id)arg1 ;
-(id)_sessionAttributedTextForIndex:(NSUInteger)arg0 withStyle:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFormatKey:(id)arg0 textProviders:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif