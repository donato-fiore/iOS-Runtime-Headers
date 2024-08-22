// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOPDALLCOLLECTIONSVIEWRESULTFILTERTYPEADDRESS_H
#define GEOPDALLCOLLECTIONSVIEWRESULTFILTERTYPEADDRESS_H

@class PBCodable, PBUnknownFields;
@protocol NSCopying;


#import "GEOPDMapsIdentifier.h"

@interface GEOPDAllCollectionsViewResultFilterTypeAddress : PBCodable <NSCopying>

 {
    PBUnknownFields *_unknownFields;
    GEOPDMapsIdentifier *_geoId;
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