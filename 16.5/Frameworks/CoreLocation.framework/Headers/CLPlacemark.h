// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLPLACEMARK_H
#define CLPLACEMARK_H

@class NSString, NSDictionary, NSArray, CNPostalAddress, NSTimeZone;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CLPlacemarkInternal.h"
#import "CLLocation.h"
#import "CLRegion.h"

@interface CLPlacemark : NSObject <NSCopying, NSSecureCoding>

 {
    CLPlacemarkInternal *_internal;
}


@property (readonly, copy, nonatomic) NSString *ISOcountryCode;
@property (readonly, copy, nonatomic) NSDictionary *addressDictionary;
@property (readonly, copy, nonatomic) NSString *administrativeArea;
@property (readonly, copy, nonatomic) NSArray *areasOfInterest;
@property (readonly, copy, nonatomic) NSString *country;
@property (readonly, copy, nonatomic) NSString *inlandWater;
@property (readonly, copy, nonatomic) NSString *locality;
@property (readonly, copy, nonatomic) CLLocation *location;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *ocean;
@property (readonly, nonatomic) CNPostalAddress *postalAddress;
@property (readonly, copy, nonatomic) NSString *postalCode;
@property (readonly, copy, nonatomic) CLRegion *region;
@property (readonly, copy, nonatomic) NSString *subAdministrativeArea;
@property (readonly, copy, nonatomic) NSString *subLocality;
@property (readonly, copy, nonatomic) NSString *subThoroughfare;
@property (readonly, copy, nonatomic) NSString *thoroughfare;
@property (readonly, copy, nonatomic) NSTimeZone *timeZone;


+(BOOL)supportsSecureCoding;
+(NSUInteger)_cLMapItemSourceFromRLMapItemSource:(NSUInteger)arg0 ;
+(id)placemarkWithGEOMapItem:(id)arg0 ;
-(id)_geoMapItem;
-(id)_geoMapItemHandle;
-(id)_initWithGeoMapItem:(id)arg0 ;
-(id)_initWithRTMapItem:(id)arg0 location:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)formattedAddressLines;
-(id)fullThoroughfare;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLocation:(id)arg0 addressDictionary:(id)arg1 region:(id)arg2 areasOfInterest:(id)arg3 ;
-(id)initWithLocation:(id)arg0 addressDictionary:(id)arg1 region:(id)arg2 areasOfInterest:(id)arg3 mapItemSource:(NSUInteger)arg4 geoMapItemHandle:(id)arg5 meCardAddress:(id)arg6 ;
-(id)initWithPlacemark:(id)arg0 ;
-(id)mecardAddress;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
// -(void)fetchFormattedAddress:(id)arg0 queue:(unk)arg1  ;


@end


#endif