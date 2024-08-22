// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOPDGROUNDVIEWLABELPARAMETERS_H
#define GEOPDGROUNDVIEWLABELPARAMETERS_H

@class PBCodable, PBUnknownFields;
@protocol NSCopying;


#import "GEOLocation.h"

@interface GEOPDGroundViewLabelParameters : PBCodable <NSCopying>

 {
    PBUnknownFields *_unknownFields;
    NSUInteger _locationId;
    GEOLocation *_location;
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