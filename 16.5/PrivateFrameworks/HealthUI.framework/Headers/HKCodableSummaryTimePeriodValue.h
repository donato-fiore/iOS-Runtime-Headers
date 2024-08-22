// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKCODABLESUMMARYTIMEPERIODVALUE_H
#define HKCODABLESUMMARYTIMEPERIODVALUE_H

@class PBCodable;
@protocol NSCopying;



@interface HKCodableSummaryTimePeriodValue : PBCodable <NSCopying>

 {
    APPLE_150 _has;
}


@property (nonatomic) CGFloat dateData; // ivar: _dateData
@property (nonatomic) BOOL hasDateData;
@property (nonatomic) BOOL hasTimeInterval;
@property (nonatomic) CGFloat timeInterval; // ivar: _timeInterval


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