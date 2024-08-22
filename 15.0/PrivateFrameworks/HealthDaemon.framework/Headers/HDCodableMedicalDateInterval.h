// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDCODABLEMEDICALDATEINTERVAL_H
#define HDCODABLEMEDICALDATEINTERVAL_H

@class PBCodable;
@protocol NSCopying;


#import "HDCodableMedicalDate.h"

@interface HDCodableMedicalDateInterval : PBCodable <NSCopying>



@property (retain, nonatomic) HDCodableMedicalDate *endDate; // ivar: _endDate
@property (readonly, nonatomic) BOOL hasEndDate;
@property (readonly, nonatomic) BOOL hasStartDate;
@property (retain, nonatomic) HDCodableMedicalDate *startDate; // ivar: _startDate


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