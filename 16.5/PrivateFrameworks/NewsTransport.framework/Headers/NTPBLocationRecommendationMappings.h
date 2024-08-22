// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTPBLOCATIONRECOMMENDATIONMAPPINGS_H
#define NTPBLOCATIONRECOMMENDATIONMAPPINGS_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface NTPBLocationRecommendationMappings : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *locationMappings; // ivar: _locationMappings


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)locationMappingsAtIndex:(NSUInteger)arg0 ;
-(void)addLocationMappings:(id)arg0 ;
-(void)clearLocationMappings;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif