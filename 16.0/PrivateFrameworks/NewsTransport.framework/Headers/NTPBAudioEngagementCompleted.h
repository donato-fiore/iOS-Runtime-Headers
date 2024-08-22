// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTPBAUDIOENGAGEMENTCOMPLETED_H
#define NTPBAUDIOENGAGEMENTCOMPLETED_H

@class PBCodable, NSString, NSData;
@protocol NSCopying;


#import "NTPBChannelData.h"
#import "NTPBIssueData.h"
#import "NTPBIssueViewData.h"

@interface NTPBAudioEngagementCompleted : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL adSupportedChannel; // ivar: _adSupportedChannel
@property (retain, nonatomic) NSString *articleId; // ivar: _articleId
@property (retain, nonatomic) NSData *articleViewingSessionId; // ivar: _articleViewingSessionId
@property (retain, nonatomic) NTPBChannelData *channelData; // ivar: _channelData
@property (retain, nonatomic) NSString *engagementId; // ivar: _engagementId
@property (retain, nonatomic) NSString *feedId; // ivar: _feedId
@property (nonatomic) int feedType; // ivar: _feedType
@property (retain, nonatomic) NSString *groupFeedId; // ivar: _groupFeedId
@property (nonatomic) int groupType; // ivar: _groupType
@property (retain, nonatomic) NSData *groupViewExposureId; // ivar: _groupViewExposureId
@property (nonatomic) BOOL hasAdSupportedChannel;
@property (readonly, nonatomic) BOOL hasArticleId;
@property (readonly, nonatomic) BOOL hasArticleViewingSessionId;
@property (readonly, nonatomic) BOOL hasChannelData;
@property (readonly, nonatomic) BOOL hasEngagementId;
@property (readonly, nonatomic) BOOL hasFeedId;
@property (nonatomic) BOOL hasFeedType;
@property (readonly, nonatomic) BOOL hasGroupFeedId;
@property (nonatomic) BOOL hasGroupType;
@property (readonly, nonatomic) BOOL hasGroupViewExposureId;
@property (nonatomic) BOOL hasIsPaidSubscriberToSourceChannel;
@property (readonly, nonatomic) BOOL hasIssueData;
@property (readonly, nonatomic) BOOL hasIssueViewData;
@property (readonly, nonatomic) BOOL hasLanguage;
@property (nonatomic) BOOL hasPlaybackSpeed;
@property (readonly, nonatomic) BOOL hasSourceChannelId;
@property (nonatomic) BOOL hasTimePlayed;
@property (nonatomic) BOOL hasTrackDuration;
@property (nonatomic) BOOL hasTrackVariant;
@property (nonatomic) BOOL isPaidSubscriberToSourceChannel; // ivar: _isPaidSubscriberToSourceChannel
@property (retain, nonatomic) NTPBIssueData *issueData; // ivar: _issueData
@property (retain, nonatomic) NTPBIssueViewData *issueViewData; // ivar: _issueViewData
@property (retain, nonatomic) NSString *language; // ivar: _language
@property (nonatomic) float playbackSpeed; // ivar: _playbackSpeed
@property (retain, nonatomic) NSString *sourceChannelId; // ivar: _sourceChannelId
@property (nonatomic) NSInteger timePlayed; // ivar: _timePlayed
@property (nonatomic) NSInteger trackDuration; // ivar: _trackDuration
@property (nonatomic) int trackVariant; // ivar: _trackVariant


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)feedTypeAsString:(int)arg0 ;
-(id)groupTypeAsString:(int)arg0 ;
-(id)trackVariantAsString:(int)arg0 ;
-(int)StringAsFeedType:(id)arg0 ;
-(int)StringAsGroupType:(id)arg0 ;
-(int)StringAsTrackVariant:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif