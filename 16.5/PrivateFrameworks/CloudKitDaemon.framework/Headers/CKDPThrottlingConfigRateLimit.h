// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDPTHROTTLINGCONFIGRATELIMIT_H
#define CKDPTHROTTLINGCONFIGRATELIMIT_H

@class PBCodable;
@protocol NSCopying;



@interface CKDPThrottlingConfigRateLimit : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int allowedRequestCount; // ivar: _allowedRequestCount
@property (nonatomic) BOOL hasAllowedRequestCount;
@property (nonatomic) BOOL hasIntervalLengthSec;
@property (nonatomic) BOOL hasRepeatEverySec;
@property (nonatomic) BOOL hasStartTimeSecondsAfterLocalMidnight;
@property (nonatomic) BOOL hasStartTimeSecondsAfterUnixEpoch;
@property (nonatomic) int intervalLengthSec; // ivar: _intervalLengthSec
@property (nonatomic) int repeatEverySec; // ivar: _repeatEverySec
@property (nonatomic) NSInteger startTimeSecondsAfterLocalMidnight; // ivar: _startTimeSecondsAfterLocalMidnight
@property (nonatomic) NSInteger startTimeSecondsAfterUnixEpoch; // ivar: _startTimeSecondsAfterUnixEpoch


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