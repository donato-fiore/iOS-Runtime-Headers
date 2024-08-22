// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOTERRITORYREGULATORYINFO_H
#define GEOTERRITORYREGULATORYINFO_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface GEOTerritoryRegulatoryInfo : NSObject

@property (readonly, nonatomic, getter=isCoastalWaters) NSInteger coastalWaters; // ivar: _coastalWaters
@property (readonly, nonatomic, getter=isDisputed) BOOL disputed; // ivar: _disputed
@property (readonly, nonatomic) NSString *disputedTerritoryName; // ivar: _disputedTerritoryName
@property (readonly, nonatomic) NSArray *interestedPartyIso3166CountryCodes; // ivar: _interestedPartyIso3166CountryCodes
@property (readonly, nonatomic) NSString *iso3166CountryCode; // ivar: _iso3166CountryCode
@property (readonly, nonatomic) NSUInteger uniqueIdentifier; // ivar: _uniqueIdentifier


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToGEOTerritoryRegulatoryInfo:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithUnsafeTerritoryData:(id)arg0 nameDB:(id)arg1 ;


@end


#endif