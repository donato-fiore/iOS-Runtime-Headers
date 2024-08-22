// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLPSATELLITEREPORT_H
#define CLPSATELLITEREPORT_H

@class PBCodable;
@protocol NSCopying;


#import "CLPSatelliteInfo.h"

@interface CLPSatelliteReport : PBCodable <NSCopying>



@property (retain, nonatomic) CLPSatelliteInfo *galileo; // ivar: _galileo
@property (retain, nonatomic) CLPSatelliteInfo *glonass; // ivar: _glonass
@property (retain, nonatomic) CLPSatelliteInfo *gps; // ivar: _gps
@property (readonly, nonatomic) BOOL hasGalileo;
@property (readonly, nonatomic) BOOL hasGlonass;
@property (readonly, nonatomic) BOOL hasGps;
@property (readonly, nonatomic) BOOL hasQzss;
@property (retain, nonatomic) CLPSatelliteInfo *qzss; // ivar: _qzss


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