// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLSLITEPLACEMARK_H
#define CLSLITEPLACEMARK_H

@class NSString, NSArray, CLLocation, CLCircularRegion, NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CLSLitePlacemark : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSString *ISOcountryCode; // ivar: _ISOcountryCode
@property (retain, nonatomic) NSString *administrativeArea; // ivar: _administrativeArea
@property (retain, nonatomic) NSString *administrativeAreaCode; // ivar: _administrativeAreaCode
@property (retain, nonatomic) NSArray *areasOfInterest; // ivar: _areasOfInterest
@property (retain, nonatomic) NSString *geoServiceProvider; // ivar: _geoServiceProvider
@property (retain, nonatomic) NSString *inlandWater; // ivar: _inlandWater
@property (nonatomic) BOOL isIsland; // ivar: _isIsland
@property (readonly, nonatomic) BOOL isOcean;
@property (retain, nonatomic) NSString *locality; // ivar: _locality
@property (retain, nonatomic) CLLocation *location; // ivar: _location
@property (retain, nonatomic) NSString *ocean; // ivar: _ocean
@property (retain, nonatomic) CLCircularRegion *region; // ivar: _region
@property (retain, nonatomic) NSData *revGeoLocationData; // ivar: _revGeoLocationData
@property (retain, nonatomic) NSString *subAdministrativeArea; // ivar: _subAdministrativeArea
@property (retain, nonatomic) NSString *subLocality; // ivar: _subLocality
@property (retain, nonatomic) NSString *subThoroughfare; // ivar: _subThoroughfare
@property (retain, nonatomic) NSString *thoroughfare; // ivar: _thoroughfare


+(BOOL)_isIslandForGeoMapItem:(id)arg0 ;
+(BOOL)supportsSecureCoding;
+(id)litePlacemarkFromCLPlacemark:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithCLPlacemark:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRTMapItem:(id)arg0 ;
-(void)_extractValuesFromGeoMapItem:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif