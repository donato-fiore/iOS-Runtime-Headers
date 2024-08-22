// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKDPLOCATIONCOORDINATE_H
#define CKDPLOCATIONCOORDINATE_H

@class PBCodable;
@protocol NSCopying;


#import "CKDPDate.h"

@interface CKDPLocationCoordinate : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) CGFloat altitude; // ivar: _altitude
@property (nonatomic) CGFloat course; // ivar: _course
@property (nonatomic) BOOL hasAltitude;
@property (nonatomic) BOOL hasCourse;
@property (nonatomic) BOOL hasHorizontalAccuracy;
@property (nonatomic) BOOL hasLatitude;
@property (nonatomic) BOOL hasLongitude;
@property (nonatomic) BOOL hasSpeed;
@property (readonly, nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasVerticalAccuracy;
@property (nonatomic) CGFloat horizontalAccuracy; // ivar: _horizontalAccuracy
@property (nonatomic) CGFloat latitude; // ivar: _latitude
@property (nonatomic) CGFloat longitude; // ivar: _longitude
@property (nonatomic) CGFloat speed; // ivar: _speed
@property (retain, nonatomic) CKDPDate *timestamp; // ivar: _timestamp
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