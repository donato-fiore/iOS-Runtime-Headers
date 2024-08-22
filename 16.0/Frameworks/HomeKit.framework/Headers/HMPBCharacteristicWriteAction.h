// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMPBCHARACTERISTICWRITEACTION_H
#define HMPBCHARACTERISTICWRITEACTION_H

@class PBCodable, NSData;
@protocol NSCopying;


#import "HMPBCharacteristicReference.h"

@interface HMPBCharacteristicWriteAction : PBCodable <NSCopying>



@property (retain, nonatomic) NSData *actionUUID; // ivar: _actionUUID
@property (retain, nonatomic) HMPBCharacteristicReference *characteristicReference; // ivar: _characteristicReference
@property (readonly, nonatomic) BOOL hasActionUUID;
@property (readonly, nonatomic) BOOL hasCharacteristicReference;
@property (readonly, nonatomic) BOOL hasTargetValue;
@property (retain, nonatomic) NSData *targetValue; // ivar: _targetValue


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