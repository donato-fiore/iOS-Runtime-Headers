// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXTIMELINERELEVANCEPBTIMELINERELEVANCEROTATION_H
#define ATXTIMELINERELEVANCEPBTIMELINERELEVANCEROTATION_H

@class PBCodable;
@protocol NSCopying;



@interface ATXTimelineRelevancePBTimelineRelevanceRotation : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int clientModelId; // ivar: _clientModelId
@property (nonatomic) NSInteger duration; // ivar: _duration
@property (nonatomic) int engagement; // ivar: _engagement
@property (nonatomic) BOOL hasClientModelId;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) BOOL hasEngagement;
@property (nonatomic) BOOL hasIsMediumOrHighConfidence;
@property (nonatomic) BOOL hasRotationEventType;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL isMediumOrHighConfidence; // ivar: _isMediumOrHighConfidence
@property (nonatomic) int rotationEventType; // ivar: _rotationEventType
@property (nonatomic) NSInteger timestamp; // ivar: _timestamp


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)clientModelIdAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)engagementAsString:(int)arg0 ;
-(id)rotationEventTypeAsString:(int)arg0 ;
-(int)StringAsClientModelId:(id)arg0 ;
-(int)StringAsEngagement:(id)arg0 ;
-(int)StringAsRotationEventType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif