// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLPINDOORCOLLECTIONREQUEST_H
#define CLPINDOORCOLLECTIONREQUEST_H

@class PBRequest, NSMutableArray;
@protocol NSCopying;


#import "CLPMeta.h"

@interface CLPIndoorCollectionRequest : PBRequest <NSCopying>



@property (retain, nonatomic) NSMutableArray *bundleIds; // ivar: _bundleIds
@property (retain, nonatomic) NSMutableArray *indoorCMAttitudes; // ivar: _indoorCMAttitudes
@property (retain, nonatomic) NSMutableArray *indoorCMPedometers; // ivar: _indoorCMPedometers
@property (retain, nonatomic) NSMutableArray *indoorLocations; // ivar: _indoorLocations
@property (retain, nonatomic) NSMutableArray *indoorMotionActivitys; // ivar: _indoorMotionActivitys
@property (retain, nonatomic) NSMutableArray *indoorPressures; // ivar: _indoorPressures
@property (retain, nonatomic) NSMutableArray *indoorWifis; // ivar: _indoorWifis
@property (retain, nonatomic) CLPMeta *meta; // ivar: _meta


+(Class)bundleIdType;
+(Class)indoorCMAttitudeType;
+(Class)indoorCMPedometerType;
+(Class)indoorMotionActivityType;
+(Class)indoorPressureType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(Class)responseClass;
-(NSUInteger)hash;
-(id)bundleIdAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)indoorCMAttitudeAtIndex:(NSUInteger)arg0 ;
-(id)indoorCMPedometerAtIndex:(NSUInteger)arg0 ;
-(id)indoorLocationsAtIndex:(NSUInteger)arg0 ;
-(id)indoorMotionActivityAtIndex:(NSUInteger)arg0 ;
-(id)indoorPressureAtIndex:(NSUInteger)arg0 ;
-(id)indoorWifisAtIndex:(NSUInteger)arg0 ;
-(unsigned int)requestTypeCode;
-(void)addBundleId:(id)arg0 ;
-(void)addIndoorCMAttitude:(id)arg0 ;
-(void)addIndoorCMPedometer:(id)arg0 ;
-(void)addIndoorLocations:(id)arg0 ;
-(void)addIndoorMotionActivity:(id)arg0 ;
-(void)addIndoorPressure:(id)arg0 ;
-(void)addIndoorWifis:(id)arg0 ;
-(void)clearBundleIds;
-(void)clearIndoorCMAttitudes;
-(void)clearIndoorCMPedometers;
-(void)clearIndoorLocations;
-(void)clearIndoorMotionActivitys;
-(void)clearIndoorPressures;
-(void)clearIndoorWifis;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif