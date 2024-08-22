// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef KCELLULARPMUAVERAGECURRENT_H
#define KCELLULARPMUAVERAGECURRENT_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface KCellularPmuAverageCurrent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasVersion;
@property (retain, nonatomic) NSMutableArray *regulatorCurrents; // ivar: _regulatorCurrents
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp
@property (nonatomic) unsigned int version; // ivar: _version


+(Class)regulatorCurrentType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)regulatorCurrentAtIndex:(NSUInteger)arg0 ;
-(void)addRegulatorCurrent:(id)arg0 ;
-(void)clearRegulatorCurrents;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif