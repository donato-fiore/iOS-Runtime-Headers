// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOPDWIFIFINGERPRINT_H
#define GEOPDWIFIFINGERPRINT_H

@class PBCodable, PBUnknownFields;
@protocol NSCopying;



@interface GEOPDWifiFingerprint : PBCodable <NSCopying>

 {
    PBUnknownFields *_unknownFields;
    unsigned int _confidence;
    int _labelType;
    int _status;
    ? _flags;
}




-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)jsonRepresentation;
-(void)writeTo:(id)arg0 ;


@end


#endif