// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTPBPAYWALLDESCRIPTION_H
#define NTPBPAYWALLDESCRIPTION_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface NTPBPaywallDescription : PBCodable <NSCopying>



@property (retain, nonatomic) NSString *channelPaywall; // ivar: _channelPaywall
@property (retain, nonatomic) NSString *hardPaywall; // ivar: _hardPaywall
@property (readonly, nonatomic) BOOL hasChannelPaywall;
@property (readonly, nonatomic) BOOL hasHardPaywall;
@property (readonly, nonatomic) BOOL hasLeakyPaywall;
@property (readonly, nonatomic) BOOL hasPromotionalPaywall;
@property (retain, nonatomic) NSString *leakyPaywall; // ivar: _leakyPaywall
@property (retain, nonatomic) NSString *promotionalPaywall; // ivar: _promotionalPaywall


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif