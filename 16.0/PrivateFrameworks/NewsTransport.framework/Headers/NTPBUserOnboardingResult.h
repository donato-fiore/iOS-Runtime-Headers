// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTPBUSERONBOARDINGRESULT_H
#define NTPBUSERONBOARDINGRESULT_H

@class PBCodable, NSMutableArray, NSString;
@protocol NSCopying;



@interface NTPBUserOnboardingResult : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSMutableArray *channelIds; // ivar: _channelIds
@property (nonatomic) BOOL hasIcloudAccountMatch;
@property (readonly, nonatomic) BOOL hasOnboardAbandonStage;
@property (nonatomic) BOOL hasResultType;
@property (nonatomic) BOOL hasSawEmailOptIn;
@property (nonatomic) BOOL hasTotalChannelSelections;
@property (nonatomic) BOOL hasTotalResets;
@property (nonatomic) BOOL hasTotalTopicSelections;
@property (nonatomic) BOOL icloudAccountMatch; // ivar: _icloudAccountMatch
@property (retain, nonatomic) NSString *onboardAbandonStage; // ivar: _onboardAbandonStage
@property (nonatomic) int resultType; // ivar: _resultType
@property (nonatomic) BOOL sawEmailOptIn; // ivar: _sawEmailOptIn
@property (retain, nonatomic) NSMutableArray *topicIds; // ivar: _topicIds
@property (nonatomic) int totalChannelSelections; // ivar: _totalChannelSelections
@property (nonatomic) int totalResets; // ivar: _totalResets
@property (nonatomic) int totalTopicSelections; // ivar: _totalTopicSelections


+(Class)channelIdType;
+(Class)topicIdType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)channelIdAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)topicIdAtIndex:(NSUInteger)arg0 ;
-(void)addChannelId:(id)arg0 ;
-(void)addTopicId:(id)arg0 ;
-(void)clearChannelIds;
-(void)clearTopicIds;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif