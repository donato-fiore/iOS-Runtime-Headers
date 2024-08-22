// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTPBHEADLINEANALYTICSELEMENT_H
#define NTPBHEADLINEANALYTICSELEMENT_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface NTPBHeadlineAnalyticsElement : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *articleID; // ivar: _articleID
@property (nonatomic) NSInteger articleVersion; // ivar: _articleVersion
@property (retain, nonatomic) NSString *channelID; // ivar: _channelID
@property (readonly, nonatomic) BOOL hasArticleID;
@property (nonatomic) BOOL hasArticleVersion;
@property (readonly, nonatomic) BOOL hasChannelID;
@property (nonatomic) BOOL hasNeedsSeenStateTracking;
@property (readonly, nonatomic) BOOL hasPreseenCountTrackingIdentifier;
@property (nonatomic) BOOL needsSeenStateTracking; // ivar: _needsSeenStateTracking
@property (retain, nonatomic) NSString *preseenCountTrackingIdentifier; // ivar: _preseenCountTrackingIdentifier


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