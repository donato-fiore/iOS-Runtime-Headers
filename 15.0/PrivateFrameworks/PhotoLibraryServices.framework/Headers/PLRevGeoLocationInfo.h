// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLREVGEOLOCATIONINFO_H
#define PLREVGEOLOCATIONINFO_H

@class NSString, CNPostalAddress;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PLRevGeoCompoundNameInfo.h"
#import "PLRevGeoMapItem.h"

@interface PLRevGeoLocationInfo : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSString *addressString; // ivar: _addressString
@property (readonly, nonatomic) PLRevGeoCompoundNameInfo *compoundNameInfo; // ivar: _compoundNameInfo
@property (readonly, nonatomic) PLRevGeoCompoundNameInfo *compoundSecondaryNameInfo; // ivar: _compoundSecondaryNameInfo
@property (readonly, nonatomic) NSString *countryCode; // ivar: _countryCode
@property (readonly, nonatomic) NSString *geoServiceProvider; // ivar: _geoServiceProvider
@property (nonatomic) BOOL isHome; // ivar: _isHome
@property (readonly, nonatomic) PLRevGeoMapItem *mapItem; // ivar: _mapItem
@property (readonly, nonatomic) CNPostalAddress *postalAddress; // ivar: _postalAddress


+(BOOL)isInvalidWithCoder:(id)arg0 ;
+(BOOL)isInvalidWithPlistData:(id)arg0 ;
+(BOOL)supportsSecureCoding;
+(id)_namingOrderForAssetDetailedReverseGeoDescription;
+(id)_namingOrderForAssetReverseGeoDescription;
+(id)_newRevGeoLocationInfoFromData:(id)arg0 ;
+(id)countryCodeWithGEOMapItem:(id)arg0 ;
+(id)infoFromPlistData:(id)arg0 ;
+(id)newDataFromRevGeoLocationInfo:(id)arg0 ;
-(BOOL)hasLocation;
-(BOOL)hasMapItem;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)locationWasResolvedWithBestRevGeoProvider;
-(NSUInteger)_locationInfoOrderForCurrentLocale;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithGEOMapItem:(id)arg0 ;
-(id)initWithMapItem:(id)arg0 postalAddress:(id)arg1 addressString:(id)arg2 countryCode:(id)arg3 compoundNameInfo:(id)arg4 compoundSecondaryNameInfo:(id)arg5 isHome:(BOOL)arg6 geoServiceProvider:(id)arg7 ;
-(id)localizedDescription;
-(id)placeNamesForLocalizedDetailedDescription;
-(id)placeWithAnnotation:(id)arg0 ;
-(id)plistData;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif