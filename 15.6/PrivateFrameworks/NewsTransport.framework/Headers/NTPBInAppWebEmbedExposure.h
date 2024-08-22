// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTPBINAPPWEBEMBEDEXPOSURE_H
#define NTPBINAPPWEBEMBEDEXPOSURE_H

@class PBCodable, NSString, NSData;
@protocol NSCopying;



@interface NTPBInAppWebEmbedExposure : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int articleDisplayRankInGroup; // ivar: _articleDisplayRankInGroup
@property (retain, nonatomic) NSString *articleId; // ivar: _articleId
@property (nonatomic) int displayRank; // ivar: _displayRank
@property (nonatomic) int feedType; // ivar: _feedType
@property (retain, nonatomic) NSData *feedViewExposureId; // ivar: _feedViewExposureId
@property (nonatomic) int groupType; // ivar: _groupType
@property (nonatomic) BOOL hasArticleDisplayRankInGroup;
@property (readonly, nonatomic) BOOL hasArticleId;
@property (nonatomic) BOOL hasDisplayRank;
@property (nonatomic) BOOL hasFeedType;
@property (readonly, nonatomic) BOOL hasFeedViewExposureId;
@property (nonatomic) BOOL hasGroupType;
@property (nonatomic) BOOL hasModuleEventType;
@property (readonly, nonatomic) BOOL hasModuleExposureId;
@property (nonatomic) BOOL hasModuleItemCount;
@property (nonatomic) BOOL hasModuleItemPosition;
@property (nonatomic) BOOL hasModuleLocation;
@property (readonly, nonatomic) BOOL hasWebEmbedId;
@property (nonatomic) BOOL hasWebEmbedLocation;
@property (nonatomic) int moduleEventType; // ivar: _moduleEventType
@property (retain, nonatomic) NSData *moduleExposureId; // ivar: _moduleExposureId
@property (nonatomic) int moduleItemCount; // ivar: _moduleItemCount
@property (nonatomic) int moduleItemPosition; // ivar: _moduleItemPosition
@property (nonatomic) int moduleLocation; // ivar: _moduleLocation
@property (retain, nonatomic) NSString *webEmbedId; // ivar: _webEmbedId
@property (nonatomic) int webEmbedLocation; // ivar: _webEmbedLocation


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)feedTypeAsString:(int)arg0 ;
-(id)groupTypeAsString:(int)arg0 ;
-(id)moduleEventTypeAsString:(int)arg0 ;
-(id)moduleLocationAsString:(int)arg0 ;
-(id)webEmbedLocationAsString:(int)arg0 ;
-(int)StringAsFeedType:(id)arg0 ;
-(int)StringAsGroupType:(id)arg0 ;
-(int)StringAsModuleEventType:(id)arg0 ;
-(int)StringAsModuleLocation:(id)arg0 ;
-(int)StringAsWebEmbedLocation:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif