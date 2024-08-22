// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRILOGTIME_H
#define TRILOGTIME_H

@class PBCodable;
@protocol NSCopying;



@interface TRILogTime : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasMinutesDstOffset;
@property (nonatomic) BOOL hasSecondsFromUtc;
@property (nonatomic) BOOL hasSecondsSince1970;
@property (nonatomic) int minutesDstOffset; // ivar: _minutesDstOffset
@property (nonatomic) int secondsFromUtc; // ivar: _secondsFromUtc
@property (nonatomic) NSUInteger secondsSince1970; // ivar: _secondsSince1970


+(id)logTimeFromDate:(id)arg0 ;
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