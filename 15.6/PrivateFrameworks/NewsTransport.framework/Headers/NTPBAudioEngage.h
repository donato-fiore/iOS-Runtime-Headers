// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTPBAUDIOENGAGE_H
#define NTPBAUDIOENGAGE_H

@class PBCodable, NSString, NSData, NSMutableArray;
@protocol NSCopying;


#import "NTPBChannelData.h"
#import "NTPBIssueData.h"
#import "NTPBIssueViewData.h"

@interface NTPBAudioEngage : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL adSupportedChannel; // ivar: _adSupportedChannel
@property (nonatomic) CGFloat agedPersonalizationScore; // ivar: _agedPersonalizationScore
@property (nonatomic) CGFloat agedUserFeedbackScore; // ivar: _agedUserFeedbackScore
@property (retain, nonatomic) NSString *articleId; // ivar: _articleId
@property (retain, nonatomic) NSData *articleViewingSessionId; // ivar: _articleViewingSessionId
@property (nonatomic) NSInteger audioDeltaTimePlayed; // ivar: _audioDeltaTimePlayed
@property (nonatomic) int audioEngagementOriginationData; // ivar: _audioEngagementOriginationData
@property (nonatomic) NSInteger audioTimePlayed; // ivar: _audioTimePlayed
@property (nonatomic) CGFloat autoSubscribeCtr; // ivar: _autoSubscribeCtr
@property (retain, nonatomic) NTPBChannelData *channelData; // ivar: _channelData
@property (nonatomic) CGFloat computedGlobalScoreCoefficient; // ivar: _computedGlobalScoreCoefficient
@property (nonatomic) CGFloat diversifiedPersonalizationScore; // ivar: _diversifiedPersonalizationScore
@property (retain, nonatomic) NSString *engagementId; // ivar: _engagementId
@property (nonatomic) CGFloat featureCtr; // ivar: _featureCtr
@property (retain, nonatomic) NSString *feedId; // ivar: _feedId
@property (nonatomic) int feedType; // ivar: _feedType
@property (retain, nonatomic) NSMutableArray *fractionalCohortMemberships; // ivar: _fractionalCohortMemberships
@property (nonatomic) CGFloat globalScore; // ivar: _globalScore
@property (retain, nonatomic) NSString *groupFeedId; // ivar: _groupFeedId
@property (nonatomic) int groupType; // ivar: _groupType
@property (retain, nonatomic) NSData *groupViewExposureId; // ivar: _groupViewExposureId
@property (nonatomic) BOOL hasAdSupportedChannel;
@property (nonatomic) BOOL hasAgedPersonalizationScore;
@property (nonatomic) BOOL hasAgedUserFeedbackScore;
@property (readonly, nonatomic) BOOL hasArticleId;
@property (readonly, nonatomic) BOOL hasArticleViewingSessionId;
@property (nonatomic) BOOL hasAudioDeltaTimePlayed;
@property (nonatomic) BOOL hasAudioEngagementOriginationData;
@property (nonatomic) BOOL hasAudioTimePlayed;
@property (nonatomic) BOOL hasAutoSubscribeCtr;
@property (readonly, nonatomic) BOOL hasChannelData;
@property (nonatomic) BOOL hasComputedGlobalScoreCoefficient;
@property (nonatomic) BOOL hasDiversifiedPersonalizationScore;
@property (readonly, nonatomic) BOOL hasEngagementId;
@property (nonatomic) BOOL hasFeatureCtr;
@property (readonly, nonatomic) BOOL hasFeedId;
@property (nonatomic) BOOL hasFeedType;
@property (nonatomic) BOOL hasGlobalScore;
@property (readonly, nonatomic) BOOL hasGroupFeedId;
@property (nonatomic) BOOL hasGroupType;
@property (readonly, nonatomic) BOOL hasGroupViewExposureId;
@property (nonatomic) BOOL hasIsPaidSubscriberToSourceChannel;
@property (readonly, nonatomic) BOOL hasIssueData;
@property (readonly, nonatomic) BOOL hasIssueViewData;
@property (readonly, nonatomic) BOOL hasLanguage;
@property (nonatomic) BOOL hasListeningSource;
@property (nonatomic) BOOL hasPaidNonpaidSubscriptionCtr;
@property (nonatomic) BOOL hasPersonalizationScore;
@property (nonatomic) BOOL hasPlayMethod;
@property (nonatomic) BOOL hasPlaybackSpeed;
@property (nonatomic) BOOL hasPosition;
@property (readonly, nonatomic) BOOL hasSourceChannelId;
@property (nonatomic) BOOL hasSubscribedChannelCtr;
@property (nonatomic) BOOL hasTrackDuration;
@property (nonatomic) BOOL hasTrackVariant;
@property (nonatomic) BOOL hasUserAction;
@property (nonatomic) BOOL hasUserFeedbackScore;
@property (nonatomic) BOOL isPaidSubscriberToSourceChannel; // ivar: _isPaidSubscriberToSourceChannel
@property (retain, nonatomic) NTPBIssueData *issueData; // ivar: _issueData
@property (retain, nonatomic) NTPBIssueViewData *issueViewData; // ivar: _issueViewData
@property (retain, nonatomic) NSString *language; // ivar: _language
@property (nonatomic) int listeningSource; // ivar: _listeningSource
@property (nonatomic) CGFloat paidNonpaidSubscriptionCtr; // ivar: _paidNonpaidSubscriptionCtr
@property (nonatomic) CGFloat personalizationScore; // ivar: _personalizationScore
@property (nonatomic) int playMethod; // ivar: _playMethod
@property (nonatomic) float playbackSpeed; // ivar: _playbackSpeed
@property (nonatomic) int position; // ivar: _position
@property (retain, nonatomic) NSString *sourceChannelId; // ivar: _sourceChannelId
@property (nonatomic) CGFloat subscribedChannelCtr; // ivar: _subscribedChannelCtr
@property (nonatomic) NSInteger trackDuration; // ivar: _trackDuration
@property (nonatomic) int trackVariant; // ivar: _trackVariant
@property (nonatomic) int userAction; // ivar: _userAction
@property (nonatomic) CGFloat userFeedbackScore; // ivar: _userFeedbackScore


+(Class)fractionalCohortMembershipType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)feedTypeAsString:(int)arg0 ;
-(id)fractionalCohortMembershipAtIndex:(NSUInteger)arg0 ;
-(id)groupTypeAsString:(int)arg0 ;
-(id)trackVariantAsString:(int)arg0 ;
-(int)StringAsFeedType:(id)arg0 ;
-(int)StringAsGroupType:(id)arg0 ;
-(int)StringAsTrackVariant:(id)arg0 ;
-(void)addFractionalCohortMembership:(id)arg0 ;
-(void)clearFractionalCohortMemberships;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif