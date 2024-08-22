// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTPBTOCCELLEXPOSUREARTICLEELEMENT_H
#define NTPBTOCCELLEXPOSUREARTICLEELEMENT_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface NTPBTocCellExposureArticleElement : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *articleId; // ivar: _articleId
@property (nonatomic) int articleType; // ivar: _articleType
@property (readonly, nonatomic) BOOL hasArticleId;
@property (nonatomic) BOOL hasArticleType;
@property (nonatomic) BOOL hasPublisherArticleVersionInt64;
@property (readonly, nonatomic) BOOL hasSourceChannelId;
@property (nonatomic) NSInteger publisherArticleVersionInt64; // ivar: _publisherArticleVersionInt64
@property (retain, nonatomic) NSString *sourceChannelId; // ivar: _sourceChannelId


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