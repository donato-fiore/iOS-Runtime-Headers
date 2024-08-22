// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTPBEVENT_H
#define NTPBEVENT_H

@class PBCodable, NSString, NSData, NSMutableArray;
@protocol NSCopying;


#import "NTPBEventObject.h"

@interface NTPBEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *appAnalyticsEventIdentifier; // ivar: _appAnalyticsEventIdentifier
@property (retain, nonatomic) NSString *appAnalyticsEventPath; // ivar: _appAnalyticsEventPath
@property (nonatomic) NSInteger appConfigTreatmentId; // ivar: _appConfigTreatmentId
@property (retain, nonatomic) NSString *bundleOfferId; // ivar: _bundleOfferId
@property (retain, nonatomic) NSString *bundlePurchaseId; // ivar: _bundlePurchaseId
@property (nonatomic) int bundleSubscriptionStatus; // ivar: _bundleSubscriptionStatus
@property (nonatomic) int cellularRadioAccessTechnology; // ivar: _cellularRadioAccessTechnology
@property (nonatomic) int deviceOrientation; // ivar: _deviceOrientation
@property (nonatomic) NSInteger duration; // ivar: _duration
@property (retain, nonatomic) NTPBEventObject *eventObject; // ivar: _eventObject
@property (nonatomic) int gestureType; // ivar: _gestureType
@property (readonly, nonatomic) BOOL hasAppAnalyticsEventIdentifier;
@property (readonly, nonatomic) BOOL hasAppAnalyticsEventPath;
@property (nonatomic) BOOL hasAppConfigTreatmentId;
@property (readonly, nonatomic) BOOL hasBundleOfferId;
@property (readonly, nonatomic) BOOL hasBundlePurchaseId;
@property (nonatomic) BOOL hasBundleSubscriptionStatus;
@property (nonatomic) BOOL hasCellularRadioAccessTechnology;
@property (nonatomic) BOOL hasDeviceOrientation;
@property (nonatomic) BOOL hasDuration;
@property (readonly, nonatomic) BOOL hasEventObject;
@property (nonatomic) BOOL hasGestureType;
@property (nonatomic) BOOL hasInterfaceOrientation;
@property (nonatomic) BOOL hasIsAmplifyUser;
@property (nonatomic) BOOL hasIsBundlePurchaser;
@property (nonatomic) BOOL hasIsPaidSubscriberDuringEvent;
@property (nonatomic) BOOL hasIsPaidSubscriberFromAppStoreDuringEvent;
@property (nonatomic) BOOL hasIsPaidSubscriberFromNewsDuringEvent;
@property (nonatomic) BOOL hasIsPaidSubscriberFromThirdPartyDuringEvent;
@property (readonly, nonatomic) BOOL hasNotwUserId;
@property (nonatomic) BOOL hasPersonalizationTreatmentId;
@property (nonatomic) BOOL hasPersonalizedTreatmentId;
@property (nonatomic) BOOL hasReachabilityStatus;
@property (readonly, nonatomic) BOOL hasReferringSource;
@property (readonly, nonatomic) BOOL hasReferringType;
@property (readonly, nonatomic) BOOL hasSBundlePurchaseId;
@property (readonly, nonatomic) BOOL hasSessionId;
@property (readonly, nonatomic) BOOL hasSessionIdWatch;
@property (nonatomic) BOOL hasStartTimestamp;
@property (readonly, nonatomic) BOOL hasUserId;
@property (readonly, nonatomic) BOOL hasUserStorefrontId;
@property (readonly, nonatomic) BOOL hasWidgetSessionId;
@property (readonly, nonatomic) BOOL hasWidgetUserId;
@property (readonly, nonatomic) BOOL hasWindowFrameInScreen;
@property (nonatomic) int interfaceOrientation; // ivar: _interfaceOrientation
@property (nonatomic) BOOL isAmplifyUser; // ivar: _isAmplifyUser
@property (nonatomic) BOOL isBundlePurchaser; // ivar: _isBundlePurchaser
@property (nonatomic) BOOL isPaidSubscriberDuringEvent; // ivar: _isPaidSubscriberDuringEvent
@property (nonatomic) BOOL isPaidSubscriberFromAppStoreDuringEvent; // ivar: _isPaidSubscriberFromAppStoreDuringEvent
@property (nonatomic) BOOL isPaidSubscriberFromNewsDuringEvent; // ivar: _isPaidSubscriberFromNewsDuringEvent
@property (nonatomic) BOOL isPaidSubscriberFromThirdPartyDuringEvent; // ivar: _isPaidSubscriberFromThirdPartyDuringEvent
@property (retain, nonatomic) NSString *notwUserId; // ivar: _notwUserId
@property (nonatomic) NSInteger personalizationTreatmentId; // ivar: _personalizationTreatmentId
@property (nonatomic) NSInteger personalizedTreatmentId; // ivar: _personalizedTreatmentId
@property (nonatomic) int reachabilityStatus; // ivar: _reachabilityStatus
@property (retain, nonatomic) NSString *referringSource; // ivar: _referringSource
@property (retain, nonatomic) NSString *referringType; // ivar: _referringType
@property (retain, nonatomic) NSString *sBundlePurchaseId; // ivar: _sBundlePurchaseId
@property (retain, nonatomic) NSData *sessionId; // ivar: _sessionId
@property (retain, nonatomic) NSData *sessionIdWatch; // ivar: _sessionIdWatch
@property (nonatomic) NSInteger startTimestamp; // ivar: _startTimestamp
@property (retain, nonatomic) NSString *userId; // ivar: _userId
@property (retain, nonatomic) NSMutableArray *userPaidSubscriptionStatus; // ivar: _userPaidSubscriptionStatus
@property (retain, nonatomic) NSString *userStorefrontId; // ivar: _userStorefrontId
@property (retain, nonatomic) NSData *widgetSessionId; // ivar: _widgetSessionId
@property (retain, nonatomic) NSString *widgetUserId; // ivar: _widgetUserId
@property (retain, nonatomic) NSString *windowFrameInScreen; // ivar: _windowFrameInScreen


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)bundleSubscriptionStatusAsString:(int)arg0 ;
-(id)cellularRadioAccessTechnologyAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)reachabilityStatusAsString:(int)arg0 ;
-(id)userPaidSubscriptionStatusAtIndex:(NSUInteger)arg0 ;
-(int)StringAsBundleSubscriptionStatus:(id)arg0 ;
-(int)StringAsCellularRadioAccessTechnology:(id)arg0 ;
-(int)StringAsReachabilityStatus:(id)arg0 ;
-(void)addUserPaidSubscriptionStatus:(id)arg0 ;
-(void)clearUserPaidSubscriptionStatus;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif