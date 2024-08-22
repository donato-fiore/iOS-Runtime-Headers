// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef KEYCHAINSYNCCOUNTRYINFO_H
#define KEYCHAINSYNCCOUNTRYINFO_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface KeychainSyncCountryInfo : NSObject <NSCopying>



@property (retain, nonatomic) NSString *countryCode; // ivar: _countryCode
@property (retain, nonatomic) NSString *countryName; // ivar: _countryName
@property (retain, nonatomic) NSString *dialingPrefix; // ivar: _dialingPrefix
@property (retain, nonatomic) NSString *localizedCountryName; // ivar: _localizedCountryName


+(id)allCountries;
+(id)countryInfoForCountryCode:(id)arg0 dialingPrefix:(id)arg1 ;
+(id)countryInfoWithDictionary:(id)arg0 ;
+(void)_loadCountriesIfNeeded;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;


@end


#endif