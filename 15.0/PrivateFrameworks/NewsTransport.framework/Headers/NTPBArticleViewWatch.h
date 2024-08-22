// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTPBARTICLEVIEWWATCH_H
#define NTPBARTICLEVIEWWATCH_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface NTPBArticleViewWatch : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int articleHostViewTypeWatch; // ivar: _articleHostViewTypeWatch
@property (retain, nonatomic) NSString *articleId; // ivar: _articleId
@property (retain, nonatomic) NSString *articleViewingSessionIdWatch; // ivar: _articleViewingSessionIdWatch
@property (nonatomic) BOOL didScroll; // ivar: _didScroll
@property (nonatomic) BOOL hasArticleHostViewTypeWatch;
@property (readonly, nonatomic) BOOL hasArticleId;
@property (readonly, nonatomic) BOOL hasArticleViewingSessionIdWatch;
@property (nonatomic) BOOL hasDidScroll;
@property (readonly, nonatomic) BOOL hasSourceChannelId;
@property (retain, nonatomic) NSString *sourceChannelId; // ivar: _sourceChannelId


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