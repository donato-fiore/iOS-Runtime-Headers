// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTPBBUNDLESUBSCRIBERINFO_H
#define NTPBBUNDLESUBSCRIBERINFO_H

@class PBCodable, NSMutableArray, NSString;
@protocol NSCopying;



@interface NTPBBundleSubscriberInfo : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int bundleSubscriptionStatus; // ivar: _bundleSubscriptionStatus
@property (nonatomic) BOOL hasBundleSubscriptionStatus;
@property (nonatomic) BOOL hasIsAmplifyUser;
@property (nonatomic) BOOL hasIsBundlePurchaser;
@property (nonatomic) BOOL hasIsStoreDemoModeEnabled;
@property (nonatomic) BOOL hasStartTimestamp;
@property (readonly, nonatomic) BOOL hasUserId;
@property (readonly, nonatomic) BOOL hasUserStorefrontId;
@property (nonatomic) BOOL isAmplifyUser; // ivar: _isAmplifyUser
@property (nonatomic) BOOL isBundlePurchaser; // ivar: _isBundlePurchaser
@property (nonatomic) BOOL isStoreDemoModeEnabled; // ivar: _isStoreDemoModeEnabled
@property (nonatomic) NSInteger startTimestamp; // ivar: _startTimestamp
@property (retain, nonatomic) NSMutableArray *subscribedChannelIds; // ivar: _subscribedChannelIds
@property (retain, nonatomic) NSString *userId; // ivar: _userId
@property (retain, nonatomic) NSString *userStorefrontId; // ivar: _userStorefrontId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)bundleSubscriptionStatusAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)subscribedChannelIdsAtIndex:(NSUInteger)arg0 ;
-(int)StringAsBundleSubscriptionStatus:(id)arg0 ;
-(void)addSubscribedChannelIds:(id)arg0 ;
-(void)clearSubscribedChannelIds;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif