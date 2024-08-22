// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOTERRITORYREGULATORYINFO_H
#define GEOTERRITORYREGULATORYINFO_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface GEOTerritoryRegulatoryInfo : NSObject

@property (readonly, nonatomic, getter=isCoastalWaters) NSInteger coastalWaters; // ivar: _coastalWaters
@property (readonly, nonatomic, getter=isDisputed) BOOL disputed; // ivar: _disputed
@property (readonly, nonatomic) NSString *disputedTerritoryName; // ivar: _disputedTerritoryName
@property (readonly, nonatomic) NSArray *interestedPartyIso3166CountryCodes;
@property (readonly, nonatomic) NSArray *interestedPartyIso3166CountryCodes2; // ivar: _interestedPartyIso3166CountryCodes2
@property (readonly, nonatomic) NSArray *interestedPartyIso3166CountryCodes3; // ivar: _interestedPartyIso3166CountryCodes3
@property (readonly, nonatomic) NSString *iso3166CountryCode;
@property (readonly, nonatomic) NSString *iso3166CountryCode2; // ivar: _iso3166CountryCode2
@property (readonly, nonatomic) NSString *iso3166CountryCode3; // ivar: _iso3166CountryCode3
@property (readonly, nonatomic) NSUInteger uniqueIdentifier; // ivar: _uniqueIdentifier


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToGEOTerritoryRegulatoryInfo:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithUnsafeTerritoryData:(id)arg0 nameDB:(id)arg1 iso3to2Mapping:(id)arg2 ;


@end


#endif