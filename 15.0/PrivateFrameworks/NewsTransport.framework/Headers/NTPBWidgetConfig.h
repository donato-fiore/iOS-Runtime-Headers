// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTPBWIDGETCONFIG_H
#define NTPBWIDGETCONFIG_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface NTPBWidgetConfig : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) CGFloat alternativeButlerWidgetConfigPopulationCeiling; // ivar: _alternativeButlerWidgetConfigPopulationCeiling
@property (nonatomic) CGFloat alternativeButlerWidgetConfigPopulationFloor; // ivar: _alternativeButlerWidgetConfigPopulationFloor
@property (nonatomic) NSInteger articleListBackgroundMinimumUpdateInterval; // ivar: _articleListBackgroundMinimumUpdateInterval
@property (nonatomic) NSInteger articleListForegroundMinimumUpdateInterval; // ivar: _articleListForegroundMinimumUpdateInterval
@property (nonatomic) NSInteger backgroundMinimumUpdateInterval; // ivar: _backgroundMinimumUpdateInterval
@property (nonatomic) unsigned int enabledSections; // ivar: _enabledSections
@property (nonatomic) NSInteger forYouBackgroundMinimumUpdateInterval; // ivar: _forYouBackgroundMinimumUpdateInterval
@property (nonatomic) NSInteger forYouCutoffTime; // ivar: _forYouCutoffTime
@property (nonatomic) NSInteger forYouForegroundMinimumUpdateInterval; // ivar: _forYouForegroundMinimumUpdateInterval
@property (nonatomic) NSInteger foregroundMinimumUpdateInterval; // ivar: _foregroundMinimumUpdateInterval
@property (nonatomic) BOOL hasAlternativeButlerWidgetConfigPopulationCeiling;
@property (nonatomic) BOOL hasAlternativeButlerWidgetConfigPopulationFloor;
@property (nonatomic) BOOL hasArticleListBackgroundMinimumUpdateInterval;
@property (nonatomic) BOOL hasArticleListForegroundMinimumUpdateInterval;
@property (nonatomic) BOOL hasBackgroundMinimumUpdateInterval;
@property (nonatomic) BOOL hasEnabledSections;
@property (nonatomic) BOOL hasForYouBackgroundMinimumUpdateInterval;
@property (nonatomic) BOOL hasForYouCutoffTime;
@property (nonatomic) BOOL hasForYouForegroundMinimumUpdateInterval;
@property (nonatomic) BOOL hasForegroundMinimumUpdateInterval;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (nonatomic) BOOL hasMinimumArticleExposureDurationToBePreseen;
@property (nonatomic) BOOL hasMinimumNumberOfTimesPreseenToBeSeen;
@property (nonatomic) BOOL hasParsecPopulationCeiling;
@property (nonatomic) BOOL hasParsecPopulationFloor;
@property (nonatomic) BOOL hasParsecTrendingCutoffTime;
@property (nonatomic) BOOL hasTopStoriesBackgroundMinimumUpdateInterval;
@property (nonatomic) BOOL hasTopStoriesCutoffTime;
@property (nonatomic) BOOL hasTopStoriesForegroundMinimumUpdateInterval;
@property (nonatomic) BOOL hasTrendingBackgroundMinimumUpdateInterval;
@property (nonatomic) BOOL hasTrendingByParsecBackgroundMinimumUpdateInterval;
@property (nonatomic) BOOL hasTrendingByParsecForegroundMinimumUpdateInterval;
@property (nonatomic) BOOL hasTrendingCutoffTime;
@property (nonatomic) BOOL hasTrendingForegroundMinimumUpdateInterval;
@property (nonatomic) BOOL hasWidgetSectionConfigBackgroundMinimumUpdateInterval;
@property (nonatomic) BOOL hasWidgetSectionConfigForegroundMinimumUpdateInterval;
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) NSInteger minimumArticleExposureDurationToBePreseen; // ivar: _minimumArticleExposureDurationToBePreseen
@property (nonatomic) unsigned int minimumNumberOfTimesPreseenToBeSeen; // ivar: _minimumNumberOfTimesPreseenToBeSeen
@property (nonatomic) CGFloat parsecPopulationCeiling; // ivar: _parsecPopulationCeiling
@property (nonatomic) CGFloat parsecPopulationFloor; // ivar: _parsecPopulationFloor
@property (nonatomic) NSInteger parsecTrendingCutoffTime; // ivar: _parsecTrendingCutoffTime
@property (nonatomic) NSInteger topStoriesBackgroundMinimumUpdateInterval; // ivar: _topStoriesBackgroundMinimumUpdateInterval
@property (nonatomic) NSInteger topStoriesCutoffTime; // ivar: _topStoriesCutoffTime
@property (nonatomic) NSInteger topStoriesForegroundMinimumUpdateInterval; // ivar: _topStoriesForegroundMinimumUpdateInterval
@property (nonatomic) NSInteger trendingBackgroundMinimumUpdateInterval; // ivar: _trendingBackgroundMinimumUpdateInterval
@property (nonatomic) NSInteger trendingByParsecBackgroundMinimumUpdateInterval; // ivar: _trendingByParsecBackgroundMinimumUpdateInterval
@property (nonatomic) NSInteger trendingByParsecForegroundMinimumUpdateInterval; // ivar: _trendingByParsecForegroundMinimumUpdateInterval
@property (nonatomic) NSInteger trendingCutoffTime; // ivar: _trendingCutoffTime
@property (nonatomic) NSInteger trendingForegroundMinimumUpdateInterval; // ivar: _trendingForegroundMinimumUpdateInterval
@property (nonatomic) NSInteger widgetSectionConfigBackgroundMinimumUpdateInterval; // ivar: _widgetSectionConfigBackgroundMinimumUpdateInterval
@property (nonatomic) NSInteger widgetSectionConfigForegroundMinimumUpdateInterval; // ivar: _widgetSectionConfigForegroundMinimumUpdateInterval


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