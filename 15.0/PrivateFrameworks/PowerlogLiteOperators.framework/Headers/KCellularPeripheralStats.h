// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef KCELLULARPERIPHERALSTATS_H
#define KCELLULARPERIPHERALSTATS_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface KCellularPeripheralStats : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) unsigned int durationMs; // ivar: _durationMs
@property (nonatomic) BOOL hasDurationMs;
@property (nonatomic) BOOL hasTimestamp;
@property (retain, nonatomic) NSMutableArray *peripherals; // ivar: _peripherals
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)peripheralsAtIndex:(NSUInteger)arg0 ;
-(void)addPeripherals:(id)arg0 ;
-(void)clearPeripherals;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif