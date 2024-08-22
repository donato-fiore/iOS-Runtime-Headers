// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOPDDEPARTUREPREDICATE_H
#define GEOPDDEPARTUREPREDICATE_H

@class PBCodable, PBUnknownFields;
@protocol NSCopying;



@interface GEOPDDeparturePredicate : PBCodable <NSCopying>

 {
    PBUnknownFields *_unknownFields;
    GEOPDTimeRange _timeRange;
    unsigned int _numAdditionalDepartures;
    ? _flags;
}




-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithTraitsTransitModeFilter:(id)arg0 ;
-(id)jsonRepresentation;
-(void)writeTo:(id)arg0 ;


@end


#endif