// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTPBRESTOREPAIDSUBSCRIPTION_H
#define NTPBRESTOREPAIDSUBSCRIPTION_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface NTPBRestorePaidSubscription : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *items; // ivar: _items
@property (retain, nonatomic) NSMutableArray *restoredPaidSubscriptionChannelIds; // ivar: _restoredPaidSubscriptionChannelIds


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)itemsAtIndex:(NSUInteger)arg0 ;
-(id)restoredPaidSubscriptionChannelIdsAtIndex:(NSUInteger)arg0 ;
-(void)addItems:(id)arg0 ;
-(void)addRestoredPaidSubscriptionChannelIds:(id)arg0 ;
-(void)clearItems;
-(void)clearRestoredPaidSubscriptionChannelIds;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif