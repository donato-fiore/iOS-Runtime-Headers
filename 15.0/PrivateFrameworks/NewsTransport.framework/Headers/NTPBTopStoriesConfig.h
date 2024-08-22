// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTPBTOPSTORIESCONFIG_H
#define NTPBTOPSTORIESCONFIG_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;



@interface NTPBTopStoriesConfig : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) NSInteger badgesTimeout; // ivar: _badgesTimeout
@property (retain, nonatomic) NSString *channelId; // ivar: _channelId
@property (nonatomic) NSInteger cutoffTime; // ivar: _cutoffTime
@property (nonatomic) BOOL hasBadgesTimeout;
@property (readonly, nonatomic) BOOL hasChannelId;
@property (nonatomic) BOOL hasCutoffTime;
@property (nonatomic) BOOL hasMaximumArticleCount;
@property (nonatomic) BOOL hasPinningEnabled;
@property (nonatomic) BOOL hasPromotingEnabled;
@property (nonatomic) NSInteger maximumArticleCount; // ivar: _maximumArticleCount
@property (nonatomic) BOOL pinningEnabled; // ivar: _pinningEnabled
@property (nonatomic) BOOL promotingEnabled; // ivar: _promotingEnabled
@property (retain, nonatomic) NSMutableArray *styleConfigs; // ivar: _styleConfigs


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)styleConfigsAtIndex:(NSUInteger)arg0 ;
-(void)addStyleConfigs:(id)arg0 ;
-(void)clearStyleConfigs;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif