// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AWDHOMEKITUSERPRESENCECOMPUTE_H
#define AWDHOMEKITUSERPRESENCECOMPUTE_H

@class PBCodable;
@protocol NSCopying;



@interface AWDHomeKitUserPresenceCompute : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int compute; // ivar: _compute
@property (nonatomic) BOOL hasCompute;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)computeAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(int)StringAsCompute:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif