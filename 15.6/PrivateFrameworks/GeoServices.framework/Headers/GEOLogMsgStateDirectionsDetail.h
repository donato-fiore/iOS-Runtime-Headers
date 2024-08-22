// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOLOGMSGSTATEDIRECTIONSDETAIL_H
#define GEOLOGMSGSTATEDIRECTIONSDETAIL_H

@class PBCodable;
@protocol NSCopying;



@interface GEOLogMsgStateDirectionsDetail : PBCodable <NSCopying>

 {
    int _transportType;
    BOOL _isEv;
    ? _flags;
}


@property (nonatomic) BOOL hasIsEv;
@property (nonatomic) BOOL hasTransportType;
@property (nonatomic) BOOL isEv;
@property (nonatomic) int transportType;


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
-(id)transportTypeAsString:(int)arg0 ;
-(int)StringAsTransportType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif