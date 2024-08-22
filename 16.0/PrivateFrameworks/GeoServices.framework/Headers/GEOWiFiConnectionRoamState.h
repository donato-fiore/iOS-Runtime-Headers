// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOWIFICONNECTIONROAMSTATE_H
#define GEOWIFICONNECTIONROAMSTATE_H

@class PBCodable;
@protocol NSCopying;



@interface GEOWiFiConnectionRoamState : PBCodable <NSCopying>

 {
    int _lateRoamMaxRSSI;
    int _lateRoamMinRSSI;
    ? _flags;
}


@property (nonatomic) BOOL hasLateRoamMaxRSSI;
@property (nonatomic) BOOL hasLateRoamMinRSSI;
@property (nonatomic) int lateRoamMaxRSSI;
@property (nonatomic) int lateRoamMinRSSI;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif