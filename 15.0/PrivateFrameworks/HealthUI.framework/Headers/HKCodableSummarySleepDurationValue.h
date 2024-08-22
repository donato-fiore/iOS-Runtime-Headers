// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKCODABLESUMMARYSLEEPDURATIONVALUE_H
#define HKCODABLESUMMARYSLEEPDURATIONVALUE_H

@class PBCodable;
@protocol NSCopying;



@interface HKCodableSummarySleepDurationValue : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) CGFloat asleepDuration; // ivar: _asleepDuration
@property (nonatomic) CGFloat endOfSleepTimeIntervalSinceReferenceDate; // ivar: _endOfSleepTimeIntervalSinceReferenceDate
@property (nonatomic) BOOL hasAsleepDuration;
@property (nonatomic) BOOL hasEndOfSleepTimeIntervalSinceReferenceDate;
@property (nonatomic) BOOL hasInBedDuration;
@property (nonatomic) CGFloat inBedDuration; // ivar: _inBedDuration


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