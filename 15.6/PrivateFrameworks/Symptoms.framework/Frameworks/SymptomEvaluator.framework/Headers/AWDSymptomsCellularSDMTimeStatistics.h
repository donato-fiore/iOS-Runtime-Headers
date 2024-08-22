// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AWDSYMPTOMSCELLULARSDMTIMESTATISTICS_H
#define AWDSYMPTOMSCELLULARSDMTIMESTATISTICS_H

@class PBCodable;
@protocol NSCopying;



@interface AWDSymptomsCellularSDMTimeStatistics : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasTotalActiveTimeSeconds;
@property (nonatomic) BOOL hasTotalInferredSleepTimeSeconds;
@property (nonatomic) BOOL hasTotalQuiesceTimeSeconds;
@property (nonatomic) BOOL hasTotalTimeSeconds;
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp
@property (nonatomic) NSUInteger totalActiveTimeSeconds; // ivar: _totalActiveTimeSeconds
@property (nonatomic) NSUInteger totalInferredSleepTimeSeconds; // ivar: _totalInferredSleepTimeSeconds
@property (nonatomic) NSUInteger totalQuiesceTimeSeconds; // ivar: _totalQuiesceTimeSeconds
@property (nonatomic) NSUInteger totalTimeSeconds; // ivar: _totalTimeSeconds


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif