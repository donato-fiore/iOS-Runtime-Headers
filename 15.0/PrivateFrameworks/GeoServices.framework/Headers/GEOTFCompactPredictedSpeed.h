// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOTFCOMPACTPREDICTEDSPEED_H
#define GEOTFCOMPACTPREDICTEDSPEED_H

@class PBCodable;
@protocol NSCopying;



@interface GEOTFCompactPredictedSpeed : PBCodable <NSCopying>

 {
    unsigned int _deltaMinutesInFuture;
    unsigned int _speedKph;
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