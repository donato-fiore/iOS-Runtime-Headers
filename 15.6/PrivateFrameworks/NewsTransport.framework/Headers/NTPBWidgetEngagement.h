// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTPBWIDGETENGAGEMENT_H
#define NTPBWIDGETENGAGEMENT_H

@class PBCodable, NSString, NSData, NSMutableArray;
@protocol NSCopying;



@interface NTPBWidgetEngagement : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *articleId; // ivar: _articleId
@property (retain, nonatomic) NSData *articleViewingSessionId; // ivar: _articleViewingSessionId
@property (nonatomic) NSInteger contentFetchDate; // ivar: _contentFetchDate
@property (retain, nonatomic) NSString *contentId; // ivar: _contentId
@property (retain, nonatomic) NSString *engagementTargetUrl; // ivar: _engagementTargetUrl
@property (readonly, nonatomic) BOOL hasArticleId;
@property (readonly, nonatomic) BOOL hasArticleViewingSessionId;
@property (nonatomic) BOOL hasContentFetchDate;
@property (readonly, nonatomic) BOOL hasContentId;
@property (readonly, nonatomic) BOOL hasEngagementTargetUrl;
@property (readonly, nonatomic) BOOL hasSourceChannelId;
@property (readonly, nonatomic) BOOL hasWebEmbedId;
@property (nonatomic) BOOL hasWidgetArticleCount;
@property (nonatomic) BOOL hasWidgetArticleCountInSection;
@property (nonatomic) BOOL hasWidgetArticleRank;
@property (nonatomic) BOOL hasWidgetArticleRankInSection;
@property (readonly, nonatomic) BOOL hasWidgetContentId;
@property (nonatomic) BOOL hasWidgetContentType;
@property (nonatomic) BOOL hasWidgetDisplayMode;
@property (nonatomic) BOOL hasWidgetEngagementType;
@property (nonatomic) BOOL hasWidgetExposureStackLocation;
@property (nonatomic) BOOL hasWidgetSectionDisplayRank;
@property (readonly, nonatomic) BOOL hasWidgetSectionId;
@property (readonly, nonatomic) BOOL hasWidgetSectionSubid;
@property (nonatomic) BOOL hasWidgetType;
@property (readonly, nonatomic) BOOL hasWidgetUserId;
@property (nonatomic) BOOL hasWidgetVideoPresentationReason;
@property (retain, nonatomic) NSMutableArray *otherVisibleSections; // ivar: _otherVisibleSections
@property (retain, nonatomic) NSString *sourceChannelId; // ivar: _sourceChannelId
@property (retain, nonatomic) NSString *webEmbedId; // ivar: _webEmbedId
@property (nonatomic) int widgetArticleCount; // ivar: _widgetArticleCount
@property (nonatomic) int widgetArticleCountInSection; // ivar: _widgetArticleCountInSection
@property (nonatomic) int widgetArticleRank; // ivar: _widgetArticleRank
@property (nonatomic) int widgetArticleRankInSection; // ivar: _widgetArticleRankInSection
@property (retain, nonatomic) NSString *widgetContentId; // ivar: _widgetContentId
@property (nonatomic) int widgetContentType; // ivar: _widgetContentType
@property (nonatomic) int widgetDisplayMode; // ivar: _widgetDisplayMode
@property (nonatomic) int widgetEngagementType; // ivar: _widgetEngagementType
@property (nonatomic) int widgetExposureStackLocation; // ivar: _widgetExposureStackLocation
@property (nonatomic) int widgetSectionDisplayRank; // ivar: _widgetSectionDisplayRank
@property (retain, nonatomic) NSString *widgetSectionId; // ivar: _widgetSectionId
@property (retain, nonatomic) NSString *widgetSectionSubid; // ivar: _widgetSectionSubid
@property (nonatomic) int widgetType; // ivar: _widgetType
@property (retain, nonatomic) NSString *widgetUserId; // ivar: _widgetUserId
@property (nonatomic) int widgetVideoPresentationReason; // ivar: _widgetVideoPresentationReason


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)otherVisibleSectionsAtIndex:(NSUInteger)arg0 ;
-(id)widgetContentTypeAsString:(int)arg0 ;
-(id)widgetDisplayModeAsString:(int)arg0 ;
-(id)widgetExposureStackLocationAsString:(int)arg0 ;
-(id)widgetTypeAsString:(int)arg0 ;
-(id)widgetVideoPresentationReasonAsString:(int)arg0 ;
-(int)StringAsWidgetContentType:(id)arg0 ;
-(int)StringAsWidgetDisplayMode:(id)arg0 ;
-(int)StringAsWidgetExposureStackLocation:(id)arg0 ;
-(int)StringAsWidgetType:(id)arg0 ;
-(int)StringAsWidgetVideoPresentationReason:(id)arg0 ;
-(void)addOtherVisibleSections:(id)arg0 ;
-(void)clearOtherVisibleSections;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif