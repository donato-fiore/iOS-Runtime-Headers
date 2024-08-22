// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RMSPAIRINGCREDENTIALSMESSAGE_H
#define RMSPAIRINGCREDENTIALSMESSAGE_H

@class PBCodable;
@protocol NSCopying;



@interface RMSPairingCredentialsMessage : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) unsigned int characterCount; // ivar: _characterCount
@property (nonatomic) BOOL hasCharacterCount;
@property (nonatomic) BOOL hasRequirementType;
@property (nonatomic) int requirementType; // ivar: _requirementType


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