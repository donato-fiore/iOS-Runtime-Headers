// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTPBUSERPAIDSUBSCRIPTIONSTATUS_H
#define NTPBUSERPAIDSUBSCRIPTIONSTATUS_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface NTPBUserPaidSubscriptionStatus : PBCodable <NSCopying>

 {
    ? _has;
}


@property (readonly, nonatomic) BOOL hasPaidSubscriptionChannelId;
@property (nonatomic) BOOL hasPaidSubscriptionStatus;
@property (retain, nonatomic) NSString *paidSubscriptionChannelId; // ivar: _paidSubscriptionChannelId
@property (nonatomic) int paidSubscriptionStatus; // ivar: _paidSubscriptionStatus


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)paidSubscriptionStatusAsString:(int)arg0 ;
-(int)StringAsPaidSubscriptionStatus:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif