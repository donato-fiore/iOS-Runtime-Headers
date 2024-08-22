// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDPSTORAGEEXPIRATION_H
#define CKDPSTORAGEEXPIRATION_H

@class PBCodable;
@protocol NSCopying;



@interface CKDPStorageExpiration : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) NSUInteger duration; // ivar: _duration
@property (nonatomic) CGFloat expirationTime; // ivar: _expirationTime
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) BOOL hasExpirationTime;
@property (nonatomic) BOOL hasOperationType;
@property (nonatomic) int operationType; // ivar: _operationType


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)operationTypeAsString:(int)arg0 ;
-(int)StringAsOperationType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif