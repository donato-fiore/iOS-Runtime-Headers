// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTPBARTICLESESSIONRESUME_H
#define NTPBARTICLESESSIONRESUME_H

@class PBCodable, NSString, NSData;
@protocol NSCopying;



@interface NTPBArticleSessionResume : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *articleId; // ivar: _articleId
@property (nonatomic) int articleType; // ivar: _articleType
@property (retain, nonatomic) NSData *articleViewingSessionId; // ivar: _articleViewingSessionId
@property (readonly, nonatomic) BOOL hasArticleId;
@property (nonatomic) BOOL hasArticleType;
@property (readonly, nonatomic) BOOL hasArticleViewingSessionId;
@property (nonatomic) BOOL hasPublisherArticleVersion;
@property (readonly, nonatomic) BOOL hasSourceChannelId;
@property (nonatomic) NSInteger publisherArticleVersion; // ivar: _publisherArticleVersion
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