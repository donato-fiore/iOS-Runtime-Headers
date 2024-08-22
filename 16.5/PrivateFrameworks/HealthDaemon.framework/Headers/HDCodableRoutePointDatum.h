// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDCODABLEROUTEPOINTDATUM_H
#define HDCODABLEROUTEPOINTDATUM_H

@class PBCodable;
@protocol NSCopying;



@interface HDCodableRoutePointDatum : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) CGFloat altitude; // ivar: _altitude
@property (nonatomic) BOOL hasAltitude;
@property (nonatomic) BOOL hasLatitude;
@property (nonatomic) BOOL hasLongitude;
@property (nonatomic) BOOL hasOdometer;
@property (nonatomic) BOOL hasSignalEnvironmentType;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) CGFloat latitude; // ivar: _latitude
@property (nonatomic) CGFloat longitude; // ivar: _longitude
@property (nonatomic) CGFloat odometer; // ivar: _odometer
@property (nonatomic) int signalEnvironmentType; // ivar: _signalEnvironmentType
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif