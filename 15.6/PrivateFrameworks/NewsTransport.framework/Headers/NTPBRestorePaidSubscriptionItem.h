// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTPBRESTOREPAIDSUBSCRIPTIONITEM_H
#define NTPBRESTOREPAIDSUBSCRIPTIONITEM_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface NTPBRestorePaidSubscriptionItem : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasIsNewsAppPurchase;
@property (readonly, nonatomic) BOOL hasRestoredPaidSubscriptionChannelId;
@property (nonatomic) BOOL isNewsAppPurchase; // ivar: _isNewsAppPurchase
@property (retain, nonatomic) NSString *restoredPaidSubscriptionChannelId; // ivar: _restoredPaidSubscriptionChannelId


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