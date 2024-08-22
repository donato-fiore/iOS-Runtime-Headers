// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLSMANAGEDPLACEMARK_H
#define CLSMANAGEDPLACEMARK_H

@class NSManagedObject, NSString, NSData;


#import "CLSLocationCacheEntry.h"

@interface CLSManagedPlacemark : NSManagedObject

@property (copy, nonatomic) NSString *administrativeArea;
@property (copy, nonatomic) NSString *administrativeAreaCode;
@property (copy, nonatomic) NSString *areasOfInterest;
@property (retain, nonatomic) CLSLocationCacheEntry *entry;
@property (copy, nonatomic) NSString *geoServiceProvider;
@property (copy, nonatomic) NSString *inlandWater;
@property (nonatomic) BOOL isIsland;
@property (copy, nonatomic) NSString *isoCountryCode;
@property (nonatomic) CGFloat latitude;
@property (copy, nonatomic) NSString *locality;
@property (nonatomic) CGFloat longitude;
@property (copy, nonatomic) NSString *ocean;
@property (copy, nonatomic) NSString *regionIdentifier;
@property (nonatomic) CGFloat regionLatitude;
@property (nonatomic) CGFloat regionLongitude;
@property (nonatomic) CGFloat regionRadius;
@property (retain, nonatomic) NSData *revGeoLocationData;
@property (copy, nonatomic) NSString *subAdministrativeArea;
@property (copy, nonatomic) NSString *subLocality;
@property (copy, nonatomic) NSString *subThoroughfare;
@property (copy, nonatomic) NSString *thoroughfare;


+(id)entityName;


@end


#endif