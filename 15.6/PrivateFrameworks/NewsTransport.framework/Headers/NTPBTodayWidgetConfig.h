// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTPBTODAYWIDGETCONFIG_H
#define NTPBTODAYWIDGETCONFIG_H

@class PBCodable, NSString, NSData;
@protocol NSCopying;



@interface NTPBTodayWidgetConfig : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *audioIndicatorColor; // ivar: _audioIndicatorColor
@property (retain, nonatomic) NSString *backgroundColorDark; // ivar: _backgroundColorDark
@property (retain, nonatomic) NSString *backgroundColorLight; // ivar: _backgroundColorLight
@property (nonatomic) BOOL contentPrefetchEnabled; // ivar: _contentPrefetchEnabled
@property (retain, nonatomic) NSData *externalAnalyticsConfigurationsData; // ivar: _externalAnalyticsConfigurationsData
@property (readonly, nonatomic) BOOL hasAudioIndicatorColor;
@property (readonly, nonatomic) BOOL hasBackgroundColorDark;
@property (readonly, nonatomic) BOOL hasBackgroundColorLight;
@property (nonatomic) BOOL hasContentPrefetchEnabled;
@property (readonly, nonatomic) BOOL hasExternalAnalyticsConfigurationsData;
@property (nonatomic) BOOL hasMinimumArticleExposureDurationToBePreseen;
@property (nonatomic) BOOL hasMinimumNumberOfTimesPreseenToBeSeen;
@property (nonatomic) BOOL hasPrerollLoadingTimeout;
@property (nonatomic) BOOL hasWidgetSystemReloadInterval;
@property (nonatomic) BOOL hasWidgetSystemReloadJitterMax;
@property (nonatomic) NSInteger minimumArticleExposureDurationToBePreseen; // ivar: _minimumArticleExposureDurationToBePreseen
@property (nonatomic) unsigned int minimumNumberOfTimesPreseenToBeSeen; // ivar: _minimumNumberOfTimesPreseenToBeSeen
@property (nonatomic) CGFloat prerollLoadingTimeout; // ivar: _prerollLoadingTimeout
@property (nonatomic) NSInteger widgetSystemReloadInterval; // ivar: _widgetSystemReloadInterval
@property (nonatomic) NSInteger widgetSystemReloadJitterMax; // ivar: _widgetSystemReloadJitterMax


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