// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTPBARTICLEVIEWNOTW_H
#define NTPBARTICLEVIEWNOTW_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface NTPBArticleViewNotw : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *articleId; // ivar: _articleId
@property (nonatomic) int articleViewType; // ivar: _articleViewType
@property (readonly, nonatomic) BOOL hasArticleId;
@property (nonatomic) BOOL hasArticleViewType;
@property (nonatomic) BOOL hasMaxScrollDepth;
@property (readonly, nonatomic) BOOL hasReferringSite;
@property (readonly, nonatomic) BOOL hasReferringUrl;
@property (readonly, nonatomic) BOOL hasSourceChannelId;
@property (readonly, nonatomic) BOOL hasWindowId;
@property (nonatomic) float maxScrollDepth; // ivar: _maxScrollDepth
@property (retain, nonatomic) NSString *referringSite; // ivar: _referringSite
@property (retain, nonatomic) NSString *referringUrl; // ivar: _referringUrl
@property (retain, nonatomic) NSString *sourceChannelId; // ivar: _sourceChannelId
@property (retain, nonatomic) NSString *windowId; // ivar: _windowId


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