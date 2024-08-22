// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef KCELLULARSERVINGCELLRFBANDHIST_H
#define KCELLULARSERVINGCELLRFBANDHIST_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface KCellularServingCellRfBandHist : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) unsigned int durationMs; // ivar: _durationMs
@property (nonatomic) BOOL hasDurationMs;
@property (nonatomic) BOOL hasSubsId;
@property (nonatomic) BOOL hasTimestamp;
@property (retain, nonatomic) NSMutableArray *pcellBandDurations; // ivar: _pcellBandDurations
@property (nonatomic) unsigned int subsId; // ivar: _subsId
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp


+(Class)pcellBandDurationType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)pcellBandDurationAtIndex:(NSUInteger)arg0 ;
-(void)addPcellBandDuration:(id)arg0 ;
-(void)clearPcellBandDurations;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif