// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTPBMARKETINGSUBSCRIPTIONREQUEST_H
#define NTPBMARKETINGSUBSCRIPTIONREQUEST_H

@class PBRequest, NSString;
@protocol NSCopying;


#import "NTPBDeviceInfo.h"

@interface NTPBMarketingSubscriptionRequest : PBRequest <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NTPBDeviceInfo *deviceInfo; // ivar: _deviceInfo
@property (retain, nonatomic) NSString *dsid; // ivar: _dsid
@property (readonly, nonatomic) BOOL hasDeviceInfo;
@property (readonly, nonatomic) BOOL hasDsid;
@property (nonatomic) BOOL hasSubscriptionAction;
@property (nonatomic) BOOL hasSubscriptionType;
@property (nonatomic) int subscriptionAction; // ivar: _subscriptionAction
@property (nonatomic) int subscriptionType; // ivar: _subscriptionType


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