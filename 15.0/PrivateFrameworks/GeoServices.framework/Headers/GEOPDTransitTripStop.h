// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOPDTRANSITTRIPSTOP_H
#define GEOPDTRANSITTRIPSTOP_H

@class PBCodable, PBUnknownFields, NSMutableArray;
@protocol NSCopying;



@interface GEOPDTransitTripStop : PBCodable <NSCopying>

 {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_stopInfos;
}




+(id)transitTripStopForPlaceData:(id)arg0 ;
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