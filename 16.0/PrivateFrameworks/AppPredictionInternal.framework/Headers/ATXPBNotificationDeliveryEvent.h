// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXPBNOTIFICATIONDELIVERYEVENT_H
#define ATXPBNOTIFICATIONDELIVERYEVENT_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface ATXPBNotificationDeliveryEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int deliveryUI; // ivar: _deliveryUI
@property (nonatomic) BOOL hasDeliveryUI;
@property (retain, nonatomic) NSMutableArray *suggestionUUIDs; // ivar: _suggestionUUIDs


+(Class)suggestionUUIDType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)deliveryUIAsString:(int)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)suggestionUUIDAtIndex:(NSUInteger)arg0 ;
-(int)StringAsDeliveryUI:(id)arg0 ;
-(void)addSuggestionUUID:(id)arg0 ;
-(void)clearSuggestionUUIDs;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif