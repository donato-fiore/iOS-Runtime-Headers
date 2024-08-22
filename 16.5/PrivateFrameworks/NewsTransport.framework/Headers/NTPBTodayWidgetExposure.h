// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTPBTODAYWIDGETEXPOSURE_H
#define NTPBTODAYWIDGETEXPOSURE_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;



@interface NTPBTodayWidgetExposure : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) NSInteger contentFetchDate; // ivar: _contentFetchDate
@property (retain, nonatomic) NSString *contentId; // ivar: _contentId
@property (nonatomic) BOOL hasContentFetchDate;
@property (readonly, nonatomic) BOOL hasContentId;
@property (nonatomic) BOOL hasWidgetAppearanceType;
@property (nonatomic) BOOL hasWidgetArticleCount;
@property (nonatomic) BOOL hasWidgetExposureStackLocation;
@property (nonatomic) BOOL hasWidgetHeadlineExposureCount;
@property (readonly, nonatomic) BOOL hasWidgetIdentifier;
@property (nonatomic) BOOL hasWidgetType;
@property (nonatomic) int widgetAppearanceType; // ivar: _widgetAppearanceType
@property (nonatomic) int widgetArticleCount; // ivar: _widgetArticleCount
@property (nonatomic) int widgetExposureStackLocation; // ivar: _widgetExposureStackLocation
@property (nonatomic) int widgetHeadlineExposureCount; // ivar: _widgetHeadlineExposureCount
@property (retain, nonatomic) NSString *widgetIdentifier; // ivar: _widgetIdentifier
@property (retain, nonatomic) NSMutableArray *widgetPersonalizationFeatureCTRPairs; // ivar: _widgetPersonalizationFeatureCTRPairs
@property (retain, nonatomic) NSMutableArray *widgetSectionsArticleCountPairs; // ivar: _widgetSectionsArticleCountPairs
@property (nonatomic) int widgetType; // ivar: _widgetType


+(Class)widgetPersonalizationFeatureCTRPairType;
+(Class)widgetSectionsArticleCountPairType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)widgetExposureStackLocationAsString:(int)arg0 ;
-(id)widgetPersonalizationFeatureCTRPairAtIndex:(NSUInteger)arg0 ;
-(id)widgetSectionsArticleCountPairAtIndex:(NSUInteger)arg0 ;
-(id)widgetTypeAsString:(int)arg0 ;
-(int)StringAsWidgetExposureStackLocation:(id)arg0 ;
-(int)StringAsWidgetType:(id)arg0 ;
-(void)addWidgetPersonalizationFeatureCTRPair:(id)arg0 ;
-(void)addWidgetSectionsArticleCountPair:(id)arg0 ;
-(void)clearWidgetPersonalizationFeatureCTRPairs;
-(void)clearWidgetSectionsArticleCountPairs;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif