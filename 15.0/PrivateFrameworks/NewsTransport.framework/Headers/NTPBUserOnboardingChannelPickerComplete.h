// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTPBUSERONBOARDINGCHANNELPICKERCOMPLETE_H
#define NTPBUSERONBOARDINGCHANNELPICKERCOMPLETE_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface NTPBUserOnboardingChannelPickerComplete : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSMutableArray *channelIds; // ivar: _channelIds
@property (nonatomic) int channelPickerPresentationReason; // ivar: _channelPickerPresentationReason
@property (nonatomic) BOOL fromPersonalizeNews; // ivar: _fromPersonalizeNews
@property (nonatomic) BOOL hasChannelPickerPresentationReason;
@property (nonatomic) BOOL hasFromPersonalizeNews;
@property (nonatomic) BOOL hasTotalChannelSelections;
@property (nonatomic) BOOL hasTotalTopicSelections;
@property (retain, nonatomic) NSMutableArray *topicIds; // ivar: _topicIds
@property (nonatomic) int totalChannelSelections; // ivar: _totalChannelSelections
@property (nonatomic) int totalTopicSelections; // ivar: _totalTopicSelections


+(Class)channelIdType;
+(Class)topicIdType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)channelIdAtIndex:(NSUInteger)arg0 ;
-(id)channelPickerPresentationReasonAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)topicIdAtIndex:(NSUInteger)arg0 ;
-(int)StringAsChannelPickerPresentationReason:(id)arg0 ;
-(void)addChannelId:(id)arg0 ;
-(void)addTopicId:(id)arg0 ;
-(void)clearChannelIds;
-(void)clearTopicIds;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif