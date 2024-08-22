// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXPBUSERNOTIFICATIONMODELSCORE_H
#define ATXPBUSERNOTIFICATIONMODELSCORE_H

@class PBCodable, NSString, NSData;
@protocol ATXJSONSerializableProtocol, NSCopying;



@interface ATXPBUserNotificationModelScore : PBCodable <ATXJSONSerializableProtocol, NSCopying>

 {
    ? _has;
}


@property (readonly, nonatomic) BOOL hasModelId;
@property (nonatomic) BOOL hasModelVersion;
@property (nonatomic) BOOL hasScore;
@property (readonly, nonatomic) BOOL hasScoreInfo;
@property (nonatomic) BOOL hasScoreTimestamp;
@property (readonly, nonatomic) BOOL hasScoreUUID;
@property (retain, nonatomic) NSString *modelId; // ivar: _modelId
@property (nonatomic) NSUInteger modelVersion; // ivar: _modelVersion
@property (nonatomic) CGFloat score; // ivar: _score
@property (retain, nonatomic) NSData *scoreInfo; // ivar: _scoreInfo
@property (nonatomic) CGFloat scoreTimestamp; // ivar: _scoreTimestamp
@property (retain, nonatomic) NSString *scoreUUID; // ivar: _scoreUUID


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initFromJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif