// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTPBPERSONALIZATIONPROFILE_H
#define NTPBPERSONALIZATIONPROFILE_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface NTPBPersonalizationProfile : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *aggregates; // ivar: _aggregates
@property (retain, nonatomic) NSMutableArray *histories; // ivar: _histories


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)aggregatesAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)historiesAtIndex:(NSUInteger)arg0 ;
-(void)addAggregates:(id)arg0 ;
-(void)addHistories:(id)arg0 ;
-(void)clearAggregates;
-(void)clearHistories;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif