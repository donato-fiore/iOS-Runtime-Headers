// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOPDWIFIACCESSPOINT_H
#define GEOPDWIFIACCESSPOINT_H

@class PBCodable, PBUnknownFields, NSString;
@protocol NSCopying;



@interface GEOPDWifiAccessPoint : PBCodable <NSCopying>

 {
    PBUnknownFields *_unknownFields;
    NSString *_macId;
    NSUInteger _scanTimestamp;
    unsigned int _age;
    int _channel;
    int _rssi;
    ? _flags;
}




-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithGEOWifiAccessPoint:(id)arg0 ;
-(id)jsonRepresentation;
-(void)writeTo:(id)arg0 ;


@end


#endif