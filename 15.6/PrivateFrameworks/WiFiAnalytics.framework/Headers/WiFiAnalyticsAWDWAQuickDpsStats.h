// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WIFIANALYTICSAWDWAQUICKDPSSTATS_H
#define WIFIANALYTICSAWDWAQUICKDPSSTATS_H

@class PBCodable;
@protocol NSCopying;



@interface WiFiAnalyticsAWDWAQuickDpsStats : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) unsigned int awdlActivityThreshold; // ivar: _awdlActivityThreshold
@property (nonatomic) unsigned int ccaThreshold; // ivar: _ccaThreshold
@property (nonatomic) BOOL hasAwdlActivityThreshold;
@property (nonatomic) BOOL hasCcaThreshold;
@property (nonatomic) BOOL hasIsDpsValidationDisabled;
@property (nonatomic) BOOL hasProbabilityThreshold;
@property (nonatomic) BOOL hasQuickDpsResetRecommendation;
@property (nonatomic) BOOL hasQuickDpsTimeSincePreviousTriggerMinutes;
@property (nonatomic) BOOL hasRssiThreshold;
@property (nonatomic) BOOL hasScreenOffThreshold;
@property (nonatomic) BOOL hasScreenOnThreshold;
@property (nonatomic) BOOL hasScreenStateOn;
@property (nonatomic) BOOL hasStallPrediction;
@property (nonatomic) BOOL hasStallProbability;
@property (nonatomic) BOOL hasSuppressedReason;
@property (nonatomic) BOOL isDpsValidationDisabled; // ivar: _isDpsValidationDisabled
@property (nonatomic) unsigned int probabilityThreshold; // ivar: _probabilityThreshold
@property (nonatomic) BOOL quickDpsResetRecommendation; // ivar: _quickDpsResetRecommendation
@property (nonatomic) NSUInteger quickDpsTimeSincePreviousTriggerMinutes; // ivar: _quickDpsTimeSincePreviousTriggerMinutes
@property (nonatomic) unsigned int rssiThreshold; // ivar: _rssiThreshold
@property (nonatomic) unsigned int screenOffThreshold; // ivar: _screenOffThreshold
@property (nonatomic) unsigned int screenOnThreshold; // ivar: _screenOnThreshold
@property (nonatomic) BOOL screenStateOn; // ivar: _screenStateOn
@property (nonatomic) BOOL stallPrediction; // ivar: _stallPrediction
@property (nonatomic) unsigned int stallProbability; // ivar: _stallProbability
@property (nonatomic) int suppressedReason; // ivar: _suppressedReason


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)suppressedReasonAsString:(int)arg0 ;
-(int)StringAsSuppressedReason:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif