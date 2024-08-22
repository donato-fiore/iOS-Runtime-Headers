// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTPBARTICLEFEEDBACK_H
#define NTPBARTICLEFEEDBACK_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface NTPBArticleFeedback : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *articleId; // ivar: _articleId
@property (nonatomic) int feedback; // ivar: _feedback
@property (readonly, nonatomic) BOOL hasArticleId;
@property (nonatomic) BOOL hasFeedback;
@property (readonly, nonatomic) BOOL hasLanguage;
@property (readonly, nonatomic) BOOL hasSourceChannelId;
@property (readonly, nonatomic) BOOL hasTopicId;
@property (retain, nonatomic) NSString *language; // ivar: _language
@property (retain, nonatomic) NSString *sourceChannelId; // ivar: _sourceChannelId
@property (retain, nonatomic) NSString *topicId; // ivar: _topicId


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