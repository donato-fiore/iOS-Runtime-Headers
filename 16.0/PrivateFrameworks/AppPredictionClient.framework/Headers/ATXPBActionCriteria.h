// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXPBACTIONCRITERIA_H
#define ATXPBACTIONCRITERIA_H

@class PBCodable, NSData;
@protocol NSCopying;



@interface ATXPBActionCriteria : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) CGFloat endDate; // ivar: _endDate
@property (nonatomic) BOOL hasEndDate;
@property (nonatomic) BOOL hasIsLockScreenEligible;
@property (readonly, nonatomic) BOOL hasPredicate;
@property (nonatomic) BOOL hasStartDate;
@property (nonatomic) BOOL isLockScreenEligible; // ivar: _isLockScreenEligible
@property (retain, nonatomic) NSData *predicate; // ivar: _predicate
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