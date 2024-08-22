// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTPBLINKTAPARTICLE_H
#define NTPBLINKTAPARTICLE_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface NTPBLinkTapArticle : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *articleId; // ivar: _articleId
@property (nonatomic) int articleType; // ivar: _articleType
@property (readonly, nonatomic) BOOL hasArticleId;
@property (nonatomic) BOOL hasArticleType;
@property (readonly, nonatomic) BOOL hasLinkUrl;
@property (readonly, nonatomic) BOOL hasReferencedArticleId;
@property (retain, nonatomic) NSString *linkUrl; // ivar: _linkUrl
@property (retain, nonatomic) NSString *referencedArticleId; // ivar: _referencedArticleId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)articleTypeAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(int)StringAsArticleType:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif