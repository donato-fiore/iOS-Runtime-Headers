// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SGM2HARVESTBUDGETSTATUSTRANSITION_H
#define SGM2HARVESTBUDGETSTATUSTRANSITION_H

@class PBCodable;
@protocol NSCopying;



@interface SGM2HarvestBudgetStatusTransition : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int fromStatus; // ivar: _fromStatus
@property (nonatomic) BOOL hasFromStatus;
@property (nonatomic) BOOL hasToStatus;
@property (nonatomic) int toStatus; // ivar: _toStatus


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)fromStatusAsString:(int)arg0 ;
-(id)toStatusAsString:(int)arg0 ;
-(int)StringAsFromStatus:(id)arg0 ;
-(int)StringAsToStatus:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif