// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AWDSYMPTOMSCELLULARSDMPOLLINGSTATISTICS_H
#define AWDSYMPTOMSCELLULARSDMPOLLINGSTATISTICS_H

@class PBCodable;
@protocol NSCopying;



@interface AWDSymptomsCellularSDMPollingStatistics : PBCodable <NSCopying>

 {
    ? _pollingIntervalCounts;
    ? _has;
}


@property (nonatomic) NSUInteger durationSeconds; // ivar: _durationSeconds
@property (nonatomic) BOOL hasDurationSeconds;
@property (nonatomic) BOOL hasPollIntervalVersion;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned int pollIntervalVersion; // ivar: _pollIntervalVersion
@property (readonly, nonatomic) *unsigned int pollingIntervalCounts;
@property (readonly, nonatomic) NSUInteger pollingIntervalCountsCount;
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(unsigned int)pollingIntervalCountAtIndex:(NSUInteger)arg0 ;
-(void)addPollingIntervalCount:(unsigned int)arg0 ;
-(void)clearPollingIntervalCounts;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif