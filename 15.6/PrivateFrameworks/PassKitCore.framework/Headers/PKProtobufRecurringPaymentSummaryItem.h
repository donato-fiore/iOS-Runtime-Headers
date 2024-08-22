// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPROTOBUFRECURRINGPAYMENTSUMMARYITEM_H
#define PKPROTOBUFRECURRINGPAYMENTSUMMARYITEM_H

@class PBCodable;
@protocol NSCopying;



@interface PKProtobufRecurringPaymentSummaryItem : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) CGFloat endDate; // ivar: _endDate
@property (nonatomic) BOOL hasEndDate;
@property (nonatomic) BOOL hasIntervalCount;
@property (nonatomic) BOOL hasIntervalUnit;
@property (nonatomic) BOOL hasStartDate;
@property (nonatomic) unsigned int intervalCount; // ivar: _intervalCount
@property (nonatomic) unsigned int intervalUnit; // ivar: _intervalUnit
@property (nonatomic) CGFloat startDate; // ivar: _startDate


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