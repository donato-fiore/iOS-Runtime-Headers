// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOWIFIAP_H
#define GEOWIFIAP_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface GEOWiFiAP : PBCodable <NSCopying>

 {
    NSString *_uniqueID;
    unsigned int _channel;
    int _origin;
    int _rssi;
    ? _flags;
}


@property (nonatomic) unsigned int channel;
@property (nonatomic) BOOL hasChannel;
@property (nonatomic) BOOL hasOrigin;
@property (nonatomic) BOOL hasRssi;
@property (readonly, nonatomic) BOOL hasUniqueID;
@property (nonatomic) int origin;
@property (nonatomic) int rssi;
@property (retain, nonatomic) NSString *uniqueID;


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
-(id)originAsString:(int)arg0 ;
-(int)StringAsOrigin:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif