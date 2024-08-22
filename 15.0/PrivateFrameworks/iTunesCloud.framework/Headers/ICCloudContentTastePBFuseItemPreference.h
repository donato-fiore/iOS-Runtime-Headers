// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICCLOUDCONTENTTASTEPBFUSEITEMPREFERENCE_H
#define ICCLOUDCONTENTTASTEPBFUSEITEMPREFERENCE_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface ICCloudContentTastePBFuseItemPreference : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) NSInteger actionTimestampMillis; // ivar: _actionTimestampMillis
@property (nonatomic) NSInteger adamId; // ivar: _adamId
@property (nonatomic) NSInteger createdOffsetMillis; // ivar: _createdOffsetMillis
@property (retain, nonatomic) NSString *externalId; // ivar: _externalId
@property (nonatomic) BOOL hasActionTimestampMillis;
@property (nonatomic) BOOL hasAdamId;
@property (nonatomic) BOOL hasCreatedOffsetMillis;
@property (readonly, nonatomic) BOOL hasExternalId;
@property (nonatomic) BOOL hasPreferenceType;
@property (nonatomic) int preference; // ivar: _preference
@property (nonatomic) int preferenceType; // ivar: _preferenceType


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif