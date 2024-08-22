// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOWIFIACCESSPOINT_H
#define GEOWIFIACCESSPOINT_H

@class PBCodable, PBUnknownFields, NSString;
@protocol NSCopying;



@interface GEOWifiAccessPoint : PBCodable <NSCopying>

 {
    PBUnknownFields *_unknownFields;
    NSString *_macId;
    NSUInteger _scanTimestamp;
    unsigned int _age;
    int _channel;
    int _rssi;
    ? _flags;
}


@property (nonatomic) unsigned int age;
@property (nonatomic) int channel;
@property (nonatomic) BOOL hasAge;
@property (nonatomic) BOOL hasChannel;
@property (readonly, nonatomic) BOOL hasMacId;
@property (nonatomic) BOOL hasRssi;
@property (nonatomic) BOOL hasScanTimestamp;
@property (retain, nonatomic) NSString *macId;
@property (nonatomic) int rssi;
@property (nonatomic) NSUInteger scanTimestamp;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


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
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif