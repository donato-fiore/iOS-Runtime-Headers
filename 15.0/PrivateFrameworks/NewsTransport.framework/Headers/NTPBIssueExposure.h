// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTPBISSUEEXPOSURE_H
#define NTPBISSUEEXPOSURE_H

@class PBCodable, NSMutableArray, NSString;
@protocol NSCopying;


#import "NTPBChannelData.h"
#import "NTPBIssueData.h"
#import "NTPBIssueExposureData.h"

@interface NTPBIssueExposure : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL adSupportedChannel; // ivar: _adSupportedChannel
@property (nonatomic) CGFloat agedPersonalizationScore; // ivar: _agedPersonalizationScore
@property (nonatomic) CGFloat agedUserFeedbackScore; // ivar: _agedUserFeedbackScore
@property (nonatomic) CGFloat autoSubscribeCtr; // ivar: _autoSubscribeCtr
@property (retain, nonatomic) NTPBChannelData *channelData; // ivar: _channelData
@property (nonatomic) CGFloat computedGlobalScoreCoefficient; // ivar: _computedGlobalScoreCoefficient
@property (nonatomic) int displayRank; // ivar: _displayRank
@property (nonatomic) CGFloat diversifiedPersonalizationScore; // ivar: _diversifiedPersonalizationScore
@property (nonatomic) CGFloat featureCtr; // ivar: _featureCtr
@property (retain, nonatomic) NSMutableArray *fractionalCohortMemberships; // ivar: _fractionalCohortMemberships
@property (nonatomic) CGFloat globalScore; // ivar: _globalScore
@property (nonatomic) int groupType; // ivar: _groupType
@property (nonatomic) BOOL hasAdSupportedChannel;
@property (nonatomic) BOOL hasAgedPersonalizationScore;
@property (nonatomic) BOOL hasAgedUserFeedbackScore;
@property (nonatomic) BOOL hasAutoSubscribeCtr;
@property (readonly, nonatomic) BOOL hasChannelData;
@property (nonatomic) BOOL hasComputedGlobalScoreCoefficient;
@property (nonatomic) BOOL hasDisplayRank;
@property (nonatomic) BOOL hasDiversifiedPersonalizationScore;
@property (nonatomic) BOOL hasFeatureCtr;
@property (nonatomic) BOOL hasGlobalScore;
@property (nonatomic) BOOL hasGroupType;
@property (nonatomic) BOOL hasIsPaidSubscriberToSourceChannel;
@property (readonly, nonatomic) BOOL hasIssueData;
@property (readonly, nonatomic) BOOL hasIssueExposureData;
@property (readonly, nonatomic) BOOL hasLanguage;
@property (nonatomic) BOOL hasPaidNonpaidSubscriptionCtr;
@property (readonly, nonatomic) BOOL hasParentFeedId;
@property (nonatomic) BOOL hasParentFeedType;
@property (nonatomic) BOOL hasPersonalizationScore;
@property (readonly, nonatomic) BOOL hasSourceChannelId;
@property (nonatomic) BOOL hasSubscribedChannelCtr;
@property (readonly, nonatomic) BOOL hasSurfacedByChannelId;
@property (nonatomic) BOOL hasUserFeedbackScore;
@property (nonatomic) BOOL isPaidSubscriberToSourceChannel; // ivar: _isPaidSubscriberToSourceChannel
@property (retain, nonatomic) NTPBIssueData *issueData; // ivar: _issueData
@property (retain, nonatomic) NTPBIssueExposureData *issueExposureData; // ivar: _issueExposureData
@property (retain, nonatomic) NSString *language; // ivar: _language
@property (nonatomic) CGFloat paidNonpaidSubscriptionCtr; // ivar: _paidNonpaidSubscriptionCtr
@property (retain, nonatomic) NSString *parentFeedId; // ivar: _parentFeedId
@property (nonatomic) int parentFeedType; // ivar: _parentFeedType
@property (nonatomic) CGFloat personalizationScore; // ivar: _personalizationScore
@property (retain, nonatomic) NSString *sourceChannelId; // ivar: _sourceChannelId
@property (nonatomic) CGFloat subscribedChannelCtr; // ivar: _subscribedChannelCtr
@property (retain, nonatomic) NSString *surfacedByChannelId; // ivar: _surfacedByChannelId
@property (nonatomic) CGFloat userFeedbackScore; // ivar: _userFeedbackScore


+(Class)fractionalCohortMembershipType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)fractionalCohortMembershipAtIndex:(NSUInteger)arg0 ;
-(id)groupTypeAsString:(int)arg0 ;
-(id)parentFeedTypeAsString:(int)arg0 ;
-(int)StringAsGroupType:(id)arg0 ;
-(int)StringAsParentFeedType:(id)arg0 ;
-(void)addFractionalCohortMembership:(id)arg0 ;
-(void)clearFractionalCohortMemberships;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif