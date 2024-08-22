// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTPBTODAYRESULTOPERATIONFETCHINFO_H
#define NTPBTODAYRESULTOPERATIONFETCHINFO_H

@class PBCodable, NSString, NSData;
@protocol NSCopying;


#import "NTPBTodayWidgetConfig.h"

@interface NTPBTodayResultOperationFetchInfo : PBCodable <NSCopying>

 {
    ? _userSegmentationSegmentSetIds;
    ? _userSegmentationTreatmentIds;
    ? _has;
}


@property (nonatomic) NSInteger appConfigTreatmentIDInteger; // ivar: _appConfigTreatmentIDInteger
@property (retain, nonatomic) NSString *bundleIap; // ivar: _bundleIap
@property (nonatomic) NSInteger cellularRadioAccessTechnology; // ivar: _cellularRadioAccessTechnology
@property (retain, nonatomic) NSData *clickThroughRateByPersonalizationFeatureIDData; // ivar: _clickThroughRateByPersonalizationFeatureIDData
@property (retain, nonatomic) NSString *contentStoreFrontID; // ivar: _contentStoreFrontID
@property (nonatomic) BOOL hasAppConfigTreatmentIDInteger;
@property (readonly, nonatomic) BOOL hasBundleIap;
@property (nonatomic) BOOL hasCellularRadioAccessTechnology;
@property (readonly, nonatomic) BOOL hasClickThroughRateByPersonalizationFeatureIDData;
@property (readonly, nonatomic) BOOL hasContentStoreFrontID;
@property (nonatomic) BOOL hasIsBundleSubscriber;
@property (readonly, nonatomic) BOOL hasLocaleIdentifier;
@property (nonatomic) BOOL hasOnboardingVersion;
@property (nonatomic) BOOL hasReachabilityStatus;
@property (readonly, nonatomic) BOOL hasTodaySourceIdentifier;
@property (readonly, nonatomic) BOOL hasUserID;
@property (readonly, nonatomic) BOOL hasWidgetConfig;
@property (nonatomic) BOOL hasWifiReachable;
@property (nonatomic) BOOL isBundleSubscriber; // ivar: _isBundleSubscriber
@property (retain, nonatomic) NSString *localeIdentifier; // ivar: _localeIdentifier
@property (nonatomic) NSInteger onboardingVersion; // ivar: _onboardingVersion
@property (nonatomic) NSInteger reachabilityStatus; // ivar: _reachabilityStatus
@property (retain, nonatomic) NSString *todaySourceIdentifier; // ivar: _todaySourceIdentifier
@property (retain, nonatomic) NSString *userID; // ivar: _userID
@property (readonly, nonatomic) *int userSegmentationSegmentSetIds;
@property (readonly, nonatomic) NSUInteger userSegmentationSegmentSetIdsCount;
@property (readonly, nonatomic) *NSInteger userSegmentationTreatmentIds;
@property (readonly, nonatomic) NSUInteger userSegmentationTreatmentIdsCount;
@property (retain, nonatomic) NTPBTodayWidgetConfig *widgetConfig; // ivar: _widgetConfig
@property (nonatomic) BOOL wifiReachable; // ivar: _wifiReachable


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSInteger)userSegmentationTreatmentIdsAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(int)userSegmentationSegmentSetIdsAtIndex:(NSUInteger)arg0 ;
-(void)addUserSegmentationSegmentSetIds:(int)arg0 ;
-(void)addUserSegmentationTreatmentIds:(NSInteger)arg0 ;
-(void)clearUserSegmentationSegmentSetIds;
-(void)clearUserSegmentationTreatmentIds;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif