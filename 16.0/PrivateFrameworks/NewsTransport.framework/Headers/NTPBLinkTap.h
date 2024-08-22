// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTPBLINKTAP_H
#define NTPBLINKTAP_H

@class PBCodable, NSString, NSData;
@protocol NSCopying;



@interface NTPBLinkTap : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *articleId; // ivar: _articleId
@property (retain, nonatomic) NSData *articleViewingSessionId; // ivar: _articleViewingSessionId
@property (nonatomic) int groupType; // ivar: _groupType
@property (readonly, nonatomic) BOOL hasArticleId;
@property (readonly, nonatomic) BOOL hasArticleViewingSessionId;
@property (nonatomic) BOOL hasGroupType;
@property (nonatomic) BOOL hasLinkType;
@property (readonly, nonatomic) BOOL hasReferencedArticleId;
@property (nonatomic) BOOL hasTapLocationType;
@property (readonly, nonatomic) BOOL hasTappedLinkUrl;
@property (readonly, nonatomic) BOOL hasWebEmbedId;
@property (nonatomic) BOOL hasWebEmbedLocation;
@property (nonatomic) int linkType; // ivar: _linkType
@property (retain, nonatomic) NSString *referencedArticleId; // ivar: _referencedArticleId
@property (nonatomic) int tapLocationType; // ivar: _tapLocationType
@property (retain, nonatomic) NSString *tappedLinkUrl; // ivar: _tappedLinkUrl
@property (retain, nonatomic) NSString *webEmbedId; // ivar: _webEmbedId
@property (nonatomic) int webEmbedLocation; // ivar: _webEmbedLocation


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)groupTypeAsString:(int)arg0 ;
-(id)webEmbedLocationAsString:(int)arg0 ;
-(int)StringAsGroupType:(id)arg0 ;
-(int)StringAsWebEmbedLocation:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif