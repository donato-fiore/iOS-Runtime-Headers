// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOPDTRANSITNEARBYSCHEDULELOOKUPORIGIN_H
#define GEOPDTRANSITNEARBYSCHEDULELOOKUPORIGIN_H

@class PBCodable, PBUnknownFields;
@protocol NSCopying;


#import "GEOWaypointTyped.h"

@interface GEOPDTransitNearbyScheduleLookupOrigin : PBCodable <NSCopying>

 {
    PBUnknownFields *_unknownFields;
    GEOWaypointTyped *_waypointTyped;
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