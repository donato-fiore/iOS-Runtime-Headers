// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SGLOCATION_H
#define SGLOCATION_H

@class NSString, NSData;
@protocol SGEventLocationForGeocode, NSCopying, NSSecureCoding;


#import "SGObject.h"

@interface SGLocation : SGObject <SGEventLocationForGeocode, NSCopying, NSSecureCoding>



@property (readonly, nonatomic) CGFloat accuracy; // ivar: _accuracy
@property (readonly, nonatomic) NSString *address; // ivar: _address
@property (readonly, nonatomic) NSString *airportCode; // ivar: _airportCode
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isGeocoded) BOOL geocoded;
@property (readonly, nonatomic) NSData *handle; // ivar: _handle
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *label; // ivar: _label
@property (readonly, nonatomic) CGFloat latitude; // ivar: _latitude
@property (readonly, nonatomic) NSUInteger locationType; // ivar: _locationType
@property (readonly, nonatomic) CGFloat longitude; // ivar: _longitude
@property (readonly, nonatomic) CGFloat quality; // ivar: _quality
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)geocodeIsEnd;
-(BOOL)geocodeIsStart;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToLocation:(id)arg0 ;
-(CGFloat)geocodeAccuracy;
-(CGFloat)geocodeLatitude;
-(CGFloat)geocodeLongitude;
-(NSInteger)compare:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)geocodeAddress;
-(id)geocodeAirportCode;
-(id)geocodeHandle;
-(id)geocodeLabel;
-(id)geocodedLocationWithLabel:(id)arg0 address:(id)arg1 latitude:(CGFloat)arg2 longitude:(CGFloat)arg3 accuracy:(CGFloat)arg4 handle:(id)arg5 ;
-(id)geocodedLocationWithLatitude:(CGFloat)arg0 longitude:(CGFloat)arg1 accuracy:(CGFloat)arg2 handle:(id)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithId:(id)arg0 origin:(id)arg1 type:(NSUInteger)arg2 label:(id)arg3 address:(id)arg4 airportCode:(id)arg5 accuracy:(CGFloat)arg6 quality:(CGFloat)arg7 ;
-(id)initWithId:(id)arg0 origin:(id)arg1 type:(NSUInteger)arg2 label:(id)arg3 address:(id)arg4 airportCode:(id)arg5 latitude:(CGFloat)arg6 longitude:(CGFloat)arg7 accuracy:(CGFloat)arg8 quality:(CGFloat)arg9 handle:(id)arg10 ;
-(id)initWithId:(id)arg0 origin:(id)arg1 type:(NSUInteger)arg2 label:(id)arg3 airportCode:(id)arg4 latitude:(CGFloat)arg5 longitude:(CGFloat)arg6 accuracy:(CGFloat)arg7 quality:(CGFloat)arg8 ;
-(id)initWithLocation:(id)arg0 latitude:(CGFloat)arg1 longitude:(CGFloat)arg2 accuracy:(CGFloat)arg3 handle:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif