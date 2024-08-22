// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOADDRESSOBJECT_H
#define GEOADDRESSOBJECT_H

@class NSString;
@protocol GEOAddressObjectProtocol;

#import <Foundation/Foundation.h>

#import "_GEOAddressObject.h"

@interface GEOAddressObject : NSObject <GEOAddressObjectProtocol>

 {
    _GEOAddressObject *_pimpl;
    *int _knownAccuracy;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *displayLanguage;
@property (readonly, nonatomic) BOOL hasKnownAccuracy;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) int knownAccuracy;
@property (readonly) Class superclass;


+(BOOL)isLoggingDebug;
+(BOOL)isMarkingMMStrings;
+(id)addressObjectForPlaceData:(id)arg0 ;
+(id)addressObjectWithPlaceDataAddressObject:(id)arg0 placeDataAddress:(id)arg1 placeDataInfo:(id)arg2 placeDataEntity:(id)arg3 ;
+(id)libraryVersion;
+(void)markMMStrings:(BOOL)arg0 ;
+(void)setLoggingDebug:(BOOL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)address;
-(id)addressDictionary;
-(id)cityDisplayNameWithFallback:(BOOL)arg0 ;
-(id)cnPostalAddress;
-(id)countryName;
-(id)fullAddressNoCurrentCountryWithMultiline:(BOOL)arg0 ;
-(id)fullAddressWithMultiline:(BOOL)arg0 ;
-(id)fullAddressWithMultiline:(BOOL)arg0 relative:(id)arg1 ;
-(id)initWithCNPostalAddress:(id)arg0 langauge:(id)arg1 country:(id)arg2 phoneticLocale:(id)arg3 ;
-(id)initWithContactAddressDictionary:(id)arg0 langauge:(id)arg1 country:(id)arg2 phoneticLocale:(id)arg3 ;
-(id)initWithCurrentCountry;
-(id)initWithPlaceDataAddressObject:(id)arg0 placeDataAddress:(id)arg1 placeDataInfo:(id)arg2 placeDataEntity:(id)arg3 language:(id)arg4 country:(id)arg5 phoneticLocale:(id)arg6 ;
-(id)locationAddress;
-(id)name;
-(id)parkingDisplayName;
-(id)phoneticAddress;
-(id)phoneticLocaleIdentifier;
-(id)phoneticName;
-(id)rawBytes;
-(id)shortAddress;
-(id)spokenAddress;
-(id)spokenAddressForLocale:(id)arg0 ;
-(id)spokenName;
-(id)spokenStructuredAddress;
-(id)titlesForMapRect:(struct ? )arg0 ;
-(id)venueLabel;
-(id)venueLabel:(NSInteger)arg0 ;
-(id)venueLevel;
-(id)venueShortAddress;
-(id)weatherDisplayName;
-(id)weatherLocationName;
-(void)dealloc;


@end


#endif