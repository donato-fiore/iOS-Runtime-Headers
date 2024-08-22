// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOTELEMETRICENTITY_H
#define GEOTELEMETRICENTITY_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface GEOTelemetricEntity : PBCodable <NSCopying>

 {
    NSString *_eventDetail;
    NSUInteger _eventValue;
    int _eventKey;
    ? _flags;
}


@property (retain, nonatomic) NSString *eventDetail;
@property (nonatomic) int eventKey;
@property (nonatomic) NSUInteger eventValue;
@property (readonly, nonatomic) BOOL hasEventDetail;
@property (nonatomic) BOOL hasEventKey;
@property (nonatomic) BOOL hasEventValue;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)eventKeyAsString:(int)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(int)StringAsEventKey:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif