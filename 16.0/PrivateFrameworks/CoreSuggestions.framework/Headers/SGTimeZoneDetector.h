// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SGTIMEZONEDETECTOR_H
#define SGTIMEZONEDETECTOR_H

@class NSDictionary;
@protocol OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface SGTimeZoneDetector : NSObject {
    NSDictionary *_countryCodeForCountryName;
    NSDictionary *_timeZoneForCountryCode;
    NSDictionary *_timeZoneForCountryCodeDictionarySupplement;
    NSDictionary *_regionAbbreviations;
    NSDictionary *_timeZoneForPostalCode;
    NSDictionary *_timeZoneAbbreviations;
    NSDictionary *_uniquePostalCodeFormats;
    NSDictionary *_postalCodeFormats;
    BOOL _keepData;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_memoryPressureSource;
    NSUInteger _memoryPressureStatus;
}




+(id)_normalizedCountryString:(id)arg0 ;
+(id)_normalizedString:(id)arg0 ;
+(id)_regularExpressionForPostalCodeFormat:(id)arg0 ;
-(id)_acronymForAddress:(id)arg0 airportCodeRange:(struct _NSRange )arg1 airportCodeNames:(id)arg2 ;
-(id)_countryCodeByCountryNameFromNormalizedAddressWords:(id)arg0 ;
-(id)_countryCodeByRegionAbbreviationFromNormalizedAddress:(id)arg0 ;
-(id)_countryCodeByRegionNameFromNormalizedAddress:(id)arg0 withWords:(id)arg1 ;
-(id)_countryCodeByRegularExpressionFromNormalizedAddress:(id)arg0 ;
-(id)_getCountryCodeForCountryName;
-(id)_getPostalCodeFormats;
-(id)_getRegionAbbreviations;
-(id)_getRegionNames;
-(id)_getTimeZoneAbbreviations;
-(id)_getTimeZoneForCountryCode;
-(id)_getTimeZoneForCountryCodeDictionarySupplement;
-(id)_getTimeZoneForPostalCode;
-(id)_getUniquePostalCodeFormats;
-(id)_postalCodeForAddress:(id)arg0 withCountryCode:(id)arg1 ;
-(id)_timeZoneNameForPostalCode:(id)arg0 withPostalCodeTable:(id)arg1 ;
-(id)countryCodeForAddress:(id)arg0 ;
-(id)init;
-(id)timeZoneFromAiportCodeForAddress:(id)arg0 ;
-(id)timeZoneNameForAddress:(id)arg0 withCountryCode:(id)arg1 ;
-(struct _NSRange )_airportCodeRangeForAddress:(id)arg0 ;
-(void)_handleMemoryPressureStatus;
-(void)_readPlistRegionAbbreviationsData;
-(void)cleanupCache;


@end


#endif