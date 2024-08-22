// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMPBNATURALLIGHTINGACTION_H
#define HMPBNATURALLIGHTINGACTION_H

@class PBCodable, NSData;
@protocol NSCopying;



@interface HMPBNaturalLightingAction : PBCodable <NSCopying>

 {
    ? _has;
}


@property (readonly, nonatomic) BOOL hasLightProfileUUID;
@property (nonatomic) BOOL hasNaturalLightingEnabled;
@property (readonly, nonatomic) BOOL hasUuid;
@property (retain, nonatomic) NSData *lightProfileUUID; // ivar: _lightProfileUUID
@property (nonatomic) BOOL naturalLightingEnabled; // ivar: _naturalLightingEnabled
@property (retain, nonatomic) NSData *uuid; // ivar: _uuid


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