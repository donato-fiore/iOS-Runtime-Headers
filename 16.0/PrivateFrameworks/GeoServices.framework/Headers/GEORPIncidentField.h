// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEORPINCIDENTFIELD_H
#define GEORPINCIDENTFIELD_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface GEORPIncidentField : PBCodable <NSCopying>

 {
    NSString *_siriType;
    int _trafficType;
    BOOL _displayIncidentOnMap;
    ? _flags;
}


@property (nonatomic) BOOL displayIncidentOnMap;
@property (nonatomic) BOOL hasDisplayIncidentOnMap;
@property (readonly, nonatomic) BOOL hasSiriType;
@property (nonatomic) BOOL hasTrafficType;
@property (retain, nonatomic) NSString *siriType;
@property (nonatomic) int trafficType;


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
-(id)trafficTypeAsString:(int)arg0 ;
-(int)StringAsTrafficType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif