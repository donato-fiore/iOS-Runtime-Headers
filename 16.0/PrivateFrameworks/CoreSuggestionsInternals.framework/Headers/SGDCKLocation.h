// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SGDCKLOCATION_H
#define SGDCKLOCATION_H

@class PBCodable, NSString, NSData;
@protocol NSCopying;



@interface SGDCKLocation : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) CGFloat accuracy; // ivar: _accuracy
@property (retain, nonatomic) NSString *address; // ivar: _address
@property (retain, nonatomic) NSString *airportCode; // ivar: _airportCode
@property (retain, nonatomic) NSData *handle; // ivar: _handle
@property (nonatomic) BOOL hasAccuracy;
@property (readonly, nonatomic) BOOL hasAddress;
@property (readonly, nonatomic) BOOL hasAirportCode;
@property (readonly, nonatomic) BOOL hasHandle;
@property (readonly, nonatomic) BOOL hasLabel;
@property (nonatomic) BOOL hasLatitude;
@property (nonatomic) BOOL hasLocationType;
@property (nonatomic) BOOL hasLongitude;
@property (nonatomic) BOOL hasQuality;
@property (retain, nonatomic) NSString *label; // ivar: _label
@property (nonatomic) CGFloat latitude; // ivar: _latitude
@property (nonatomic) int locationType; // ivar: _locationType
@property (nonatomic) CGFloat longitude; // ivar: _longitude
@property (nonatomic) CGFloat quality; // ivar: _quality


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)locationTypeAsString:(int)arg0 ;
-(int)StringAsLocationType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif