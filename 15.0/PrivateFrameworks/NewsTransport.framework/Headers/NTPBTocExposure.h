// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTPBTOCEXPOSURE_H
#define NTPBTOCEXPOSURE_H

@class PBCodable, NSData;
@protocol NSCopying;



@interface NTPBTocExposure : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasPrecedingLocation;
@property (readonly, nonatomic) BOOL hasTocExposureId;
@property (nonatomic) int precedingLocation; // ivar: _precedingLocation
@property (retain, nonatomic) NSData *tocExposureId; // ivar: _tocExposureId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)precedingLocationAsString:(int)arg0 ;
-(int)StringAsPrecedingLocation:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif