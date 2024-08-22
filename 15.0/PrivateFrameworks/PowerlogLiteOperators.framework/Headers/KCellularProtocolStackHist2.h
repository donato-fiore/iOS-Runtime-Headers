// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef KCELLULARPROTOCOLSTACKHIST2_H
#define KCELLULARPROTOCOLSTACKHIST2_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface KCellularProtocolStackHist2 : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSMutableArray *bins; // ivar: _bins
@property (nonatomic) unsigned int duration; // ivar: _duration
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) BOOL hasSubsId;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasVersion;
@property (nonatomic) unsigned int subsId; // ivar: _subsId
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp
@property (nonatomic) unsigned int version; // ivar: _version


+(Class)binType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)binAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addBin:(id)arg0 ;
-(void)clearBins;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif