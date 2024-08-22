// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SGSTORAGELOCATION_H
#define SGSTORAGELOCATION_H

@class NSString, NSData;
@protocol NSCopying, NSSecureCoding, SGEventLocationForGeocode;

#import <Foundation/Foundation.h>


@interface SGStorageLocation : NSObject <NSCopying, NSSecureCoding, SGEventLocationForGeocode>



@property (readonly, nonatomic) CGFloat accuracy; // ivar: _accuracy
@property (readonly, nonatomic) NSString *address; // ivar: _address
@property (readonly, nonatomic) NSString *airportCode; // ivar: _airportCode
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSData *handle; // ivar: _handle
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *label; // ivar: _label
@property (readonly, nonatomic) CGFloat latitude; // ivar: _latitude
@property (readonly, nonatomic) int locationType; // ivar: _locationType
@property (readonly, nonatomic) CGFloat longitude; // ivar: _longitude
@property (readonly, nonatomic) CGFloat quality; // ivar: _quality
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)geocodeIsEnd;
-(BOOL)geocodeIsStart;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToStorageLocation:(id)arg0 ;
-(CGFloat)geocodeAccuracy;
-(CGFloat)geocodeLatitude;
-(CGFloat)geocodeLongitude;
-(NSInteger)compare:(id)arg0 ;
-(id)convertToLocationWithId:(id)arg0 origin:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)geocodeAddress;
-(id)geocodeAirportCode;
-(id)geocodeHandle;
-(id)geocodeLabel;
-(id)geocodedLocationWithLabel:(id)arg0 address:(id)arg1 latitude:(CGFloat)arg2 longitude:(CGFloat)arg3 accuracy:(CGFloat)arg4 handle:(id)arg5 ;
-(id)geocodedLocationWithLatitude:(CGFloat)arg0 longitude:(CGFloat)arg1 accuracy:(CGFloat)arg2 handle:(id)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithType:(int)arg0 label:(id)arg1 address:(id)arg2 airportCode:(id)arg3 accuracy:(CGFloat)arg4 quality:(CGFloat)arg5 ;
-(id)initWithType:(int)arg0 label:(id)arg1 address:(id)arg2 airportCode:(id)arg3 latitude:(CGFloat)arg4 longitude:(CGFloat)arg5 accuracy:(CGFloat)arg6 quality:(CGFloat)arg7 handle:(id)arg8 ;
-(id)initWithType:(int)arg0 label:(id)arg1 airportCode:(id)arg2 latitude:(CGFloat)arg3 longitude:(CGFloat)arg4 accuracy:(CGFloat)arg5 quality:(CGFloat)arg6 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif