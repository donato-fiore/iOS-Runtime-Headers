// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNPOSTALADDRESSFORMATTER_H
#define CNPOSTALADDRESSFORMATTER_H

@class NSFormatter;



@interface CNPostalAddressFormatter : NSFormatter

@property (nonatomic) NSInteger style; // ivar: _style


+(id)attributedStringFromPostalAddress:(id)arg0 style:(NSInteger)arg1 withDefaultAttributes:(id)arg2 ;
+(id)formatPropertyKeyForPostalAddressPropertyKey:(id)arg0 ;
+(id)localizedCountryNameForISOCountryCode:(id)arg0 ;
+(id)localizedStringForPostalAddressString:(id)arg0 ;
+(id)postalAddressPropertyKeyForFormatPropertyKey:(id)arg0 ;
+(id)singleLineStringFromPostalAddress:(id)arg0 addCountryName:(BOOL)arg1 ;
+(id)specificationForCountry:(id)arg0 ;
+(id)specificationWithAddressFormatPlist:(id)arg0 ;
+(id)stringFromPostalAddress:(id)arg0 style:(NSInteger)arg1 ;
+(id)supportedCountries;
-(id)attributedStringForObjectValue:(id)arg0 withDefaultAttributes:(id)arg1 ;
-(id)attributedStringFromPostalAddress:(id)arg0 name:(id)arg1 organization:(id)arg2 attributes:(id)arg3 ;
-(id)attributedStringFromPostalAddress:(id)arg0 withDefaultAttributes:(id)arg1 ;
-(id)postalAddressFromString:(id)arg0 ;
-(id)stringForObjectValue:(id)arg0 ;
-(id)stringFromPostalAddress:(id)arg0 ;


@end


#endif