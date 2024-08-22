// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOROUTETRAFFICDETAIL_H
#define GEOROUTETRAFFICDETAIL_H

@class PBCodable, PBDataReader, PBUnknownFields, NSString;
@protocol NSCopying;



@interface GEORouteTrafficDetail : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_spokenRouteName;
    NSString *_unabbreviatedRouteName;
    NSString *_writtenRouteName;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _routeTrafficCondition;
    ? _flags;
}


@property (nonatomic) BOOL hasRouteTrafficCondition;
@property (readonly, nonatomic) BOOL hasSpokenRouteName;
@property (readonly, nonatomic) BOOL hasUnabbreviatedRouteName;
@property (readonly, nonatomic) BOOL hasWrittenRouteName;
@property (nonatomic) int routeTrafficCondition;
@property (retain, nonatomic) NSString *spokenRouteName;
@property (retain, nonatomic) NSString *unabbreviatedRouteName;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;
@property (retain, nonatomic) NSString *writtenRouteName;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)routeTrafficConditionAsString:(int)arg0 ;
-(int)StringAsRouteTrafficCondition:(id)arg0 ;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif