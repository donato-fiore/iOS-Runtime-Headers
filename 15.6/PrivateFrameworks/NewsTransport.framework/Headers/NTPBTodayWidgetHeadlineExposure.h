// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTPBTODAYWIDGETHEADLINEEXPOSURE_H
#define NTPBTODAYWIDGETHEADLINEEXPOSURE_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "NTPBAlternateHeadline.h"

@interface NTPBTodayWidgetHeadlineExposure : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NTPBAlternateHeadline *alternateHeadline; // ivar: _alternateHeadline
@property (retain, nonatomic) NSString *articleId; // ivar: _articleId
@property (readonly, nonatomic) BOOL hasAlternateHeadline;
@property (readonly, nonatomic) BOOL hasArticleId;
@property (readonly, nonatomic) BOOL hasSourceChannelId;
@property (readonly, nonatomic) BOOL hasWebEmbedId;
@property (nonatomic) BOOL hasWidgetArticleCount;
@property (nonatomic) BOOL hasWidgetArticleCountInSection;
@property (nonatomic) BOOL hasWidgetArticleRank;
@property (nonatomic) BOOL hasWidgetArticleRankInSection;
@property (nonatomic) BOOL hasWidgetContentType;
@property (nonatomic) BOOL hasWidgetExposureStackLocation;
@property (nonatomic) BOOL hasWidgetSectionDisplayRank;
@property (readonly, nonatomic) BOOL hasWidgetSectionId;
@property (readonly, nonatomic) BOOL hasWidgetSectionSubid;
@property (nonatomic) BOOL hasWidgetType;
@property (retain, nonatomic) NSString *sourceChannelId; // ivar: _sourceChannelId
@property (retain, nonatomic) NSString *webEmbedId; // ivar: _webEmbedId
@property (nonatomic) int widgetArticleCount; // ivar: _widgetArticleCount
@property (nonatomic) int widgetArticleCountInSection; // ivar: _widgetArticleCountInSection
@property (nonatomic) int widgetArticleRank; // ivar: _widgetArticleRank
@property (nonatomic) int widgetArticleRankInSection; // ivar: _widgetArticleRankInSection
@property (nonatomic) int widgetContentType; // ivar: _widgetContentType
@property (nonatomic) int widgetExposureStackLocation; // ivar: _widgetExposureStackLocation
@property (nonatomic) int widgetSectionDisplayRank; // ivar: _widgetSectionDisplayRank
@property (retain, nonatomic) NSString *widgetSectionId; // ivar: _widgetSectionId
@property (retain, nonatomic) NSString *widgetSectionSubid; // ivar: _widgetSectionSubid
@property (nonatomic) int widgetType; // ivar: _widgetType


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)widgetContentTypeAsString:(int)arg0 ;
-(id)widgetExposureStackLocationAsString:(int)arg0 ;
-(id)widgetTypeAsString:(int)arg0 ;
-(int)StringAsWidgetContentType:(id)arg0 ;
-(int)StringAsWidgetExposureStackLocation:(id)arg0 ;
-(int)StringAsWidgetType:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif