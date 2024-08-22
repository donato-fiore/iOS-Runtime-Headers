// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EKSTRUCTUREDLOCATION_H
#define EKSTRUCTUREDLOCATION_H

@class NSString, CLLocation, NSData;
@protocol NSCopying;


#import "EKObject.h"
#import "EKPredictedLocationOfInterest.h"

@interface EKStructuredLocation : EKObject <NSCopying>



@property (retain, nonatomic) NSString *address;
@property (copy, nonatomic) NSString *contactLabel;
@property (copy, nonatomic) NSString *derivedFrom;
@property (retain, nonatomic) CLLocation *geoLocation;
@property (readonly, nonatomic) BOOL hasKnownSpatialData;
@property (nonatomic, getter=isImprecise) BOOL imprecise; // ivar: _imprecise
@property (readonly, nonatomic) BOOL isStructured;
@property (copy, nonatomic) NSData *mapKitHandle;
@property (retain, nonatomic) EKPredictedLocationOfInterest *predictedLOI; // ivar: _predictedLOI
@property (readonly, nonatomic, getter=isPrediction) BOOL prediction;
@property (nonatomic) CGFloat radius;
@property (retain, nonatomic) NSString *routing;
@property (retain, nonatomic) NSString *title;


+(Class)frozenClass;
+(id)_stringByStrippingControlCharactersFromString:(id)arg0 ;
+(id)displayLabelForContact:(id)arg0 unlocalizedLabel:(id)arg1 ;
+(id)knownIdentityKeysForComparison;
+(id)knownSingleValueKeysForComparison;
+(id)locationWithCalLocation:(id)arg0 ;
+(id)locationWithGEOMapItem:(id)arg0 ;
+(id)locationWithMapItem:(id)arg0 ;
+(id)locationWithPlacemark:(id)arg0 ;
+(id)locationWithTitle:(id)arg0 ;
-(BOOL)_reset;
-(BOOL)isEqualToLocation:(id)arg0 ;
-(id)cacheKey;
-(id)calLocation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)geoURLString;
-(id)initWithPersistentObject:(id)arg0 objectForCopy:(id)arg1 ;
-(id)latitude;
-(id)longitude;
-(id)referenceFrame;
-(void)_clearGeoLocationCache;
-(void)setLatitude:(id)arg0 ;
-(void)setLongitude:(id)arg0 ;
-(void)setReferenceFrame:(id)arg0 ;
-(void)updateFromMapItem:(id)arg0 ;


@end


#endif