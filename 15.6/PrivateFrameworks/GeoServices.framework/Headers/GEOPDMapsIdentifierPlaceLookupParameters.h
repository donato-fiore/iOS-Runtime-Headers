// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOPDMAPSIDENTIFIERPLACELOOKUPPARAMETERS_H
#define GEOPDMAPSIDENTIFIERPLACELOOKUPPARAMETERS_H

@class PBCodable, PBUnknownFields, NSMutableArray;
@protocol NSCopying;



@interface GEOPDMapsIdentifierPlaceLookupParameters : PBCodable <NSCopying>

 {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_mapsIds;
    int _resultProviderId;
    BOOL _enablePartialClientization;
    ? _flags;
}




-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithIdentifiers:(id)arg0 resultProviderID:(int)arg1 ;
-(id)jsonRepresentation;
-(void)writeTo:(id)arg0 ;


@end


#endif