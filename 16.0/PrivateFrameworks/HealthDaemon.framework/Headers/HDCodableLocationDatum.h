// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDCODABLELOCATIONDATUM_H
#define HDCODABLELOCATIONDATUM_H

@class PBCodable;
@protocol NSCopying;



@interface HDCodableLocationDatum : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) CGFloat altitude; // ivar: _altitude
@property (nonatomic) CGFloat course; // ivar: _course
@property (nonatomic) CGFloat courseAccuracy; // ivar: _courseAccuracy
@property (nonatomic) BOOL hasAltitude;
@property (nonatomic) BOOL hasCourse;
@property (nonatomic) BOOL hasCourseAccuracy;
@property (nonatomic) BOOL hasHorizontalAccuracy;
@property (nonatomic) BOOL hasLatitude;
@property (nonatomic) BOOL hasLongitude;
@property (nonatomic) BOOL hasSignalEnvironmentType;
@property (nonatomic) BOOL hasSpeed;
@property (nonatomic) BOOL hasSpeedAccuracy;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasVerticalAccuracy;
@property (nonatomic) CGFloat horizontalAccuracy; // ivar: _horizontalAccuracy
@property (nonatomic) CGFloat latitude; // ivar: _latitude
@property (nonatomic) CGFloat longitude; // ivar: _longitude
@property (nonatomic) int signalEnvironmentType; // ivar: _signalEnvironmentType
@property (nonatomic) CGFloat speed; // ivar: _speed
@property (nonatomic) CGFloat speedAccuracy; // ivar: _speedAccuracy
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp
@property (nonatomic) CGFloat verticalAccuracy; // ivar: _verticalAccuracy


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