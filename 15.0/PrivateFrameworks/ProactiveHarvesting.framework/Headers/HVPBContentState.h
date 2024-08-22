// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HVPBCONTENTSTATE_H
#define HVPBCONTENTSTATE_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface HVPBContentState : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSMutableArray *consumers; // ivar: _consumers
@property (nonatomic) BOOL hasLevelOfService;
@property (nonatomic) int levelOfService; // ivar: _levelOfService


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)consumersAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addConsumers:(id)arg0 ;
-(void)clearConsumers;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif