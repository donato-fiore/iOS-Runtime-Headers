// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXPBBLENDINGSESSIONERMEVENT_H
#define ATXPBBLENDINGSESSIONERMEVENT_H

@class PBCodable, NSMutableArray, NSString;
@protocol NSCopying;



@interface ATXPBBlendingSessionERMEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSMutableArray *blendingUpdateUUIDs; // ivar: _blendingUpdateUUIDs
@property (retain, nonatomic) NSString *consumerSubType; // ivar: _consumerSubType
@property (nonatomic) int engagementType; // ivar: _engagementType
@property (retain, nonatomic) NSString *executableId; // ivar: _executableId
@property (readonly, nonatomic) BOOL hasConsumerSubType;
@property (nonatomic) BOOL hasEngagementType;
@property (readonly, nonatomic) BOOL hasExecutableId;


+(Class)blendingUpdateUUIDType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)blendingUpdateUUIDAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)engagementTypeAsString:(int)arg0 ;
-(int)StringAsEngagementType:(id)arg0 ;
-(void)addBlendingUpdateUUID:(id)arg0 ;
-(void)clearBlendingUpdateUUIDs;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif