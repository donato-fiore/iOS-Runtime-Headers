// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTPBARTICLESCROLL_H
#define NTPBARTICLESCROLL_H

@class PBCodable, NSString, NSData, NSMutableArray;
@protocol NSCopying;


#import "NTPBAlternateHeadline.h"
#import "NTPBIssueData.h"
#import "NTPBIssueExposureData.h"
#import "NTPBIssueViewData.h"

@interface NTPBArticleScroll : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL adSupportedChannel; // ivar: _adSupportedChannel
@property (retain, nonatomic) NTPBAlternateHeadline *alternateHeadline; // ivar: _alternateHeadline
@property (retain, nonatomic) NSString *articleId; // ivar: _articleId
@property (retain, nonatomic) NSData *articleSessionId; // ivar: _articleSessionId
@property (retain, nonatomic) NSData *articleViewingSessionId; // ivar: _articleViewingSessionId
@property (retain, nonatomic) NSData *feedViewExposureId; // ivar: _feedViewExposureId
@property (retain, nonatomic) NSMutableArray *fractionalCohortMemberships; // ivar: _fractionalCohortMemberships
@property (nonatomic) BOOL hasAdSupportedChannel;
@property (readonly, nonatomic) BOOL hasAlternateHeadline;
@property (readonly, nonatomic) BOOL hasArticleId;
@property (readonly, nonatomic) BOOL hasArticleSessionId;
@property (readonly, nonatomic) BOOL hasArticleViewingSessionId;
@property (readonly, nonatomic) BOOL hasFeedViewExposureId;
@property (readonly, nonatomic) BOOL hasIssueData;
@property (readonly, nonatomic) BOOL hasIssueExposureData;
@property (readonly, nonatomic) BOOL hasIssueViewData;
@property (readonly, nonatomic) BOOL hasReferencedArticleId;
@property (nonatomic) BOOL hasScrollHostViewType;
@property (readonly, nonatomic) BOOL hasScrollVelocity;
@property (nonatomic) BOOL hasScrollingVelocity;
@property (readonly, nonatomic) BOOL hasSectionHeadlineId;
@property (readonly, nonatomic) BOOL hasSourceChannelId;
@property (readonly, nonatomic) BOOL hasVerticalScrollPositionEnd;
@property (nonatomic) BOOL hasVerticalScrollPositionEnding;
@property (readonly, nonatomic) BOOL hasVerticalScrollPositionStart;
@property (nonatomic) BOOL hasVerticalScrollPositionStarting;
@property (retain, nonatomic) NTPBIssueData *issueData; // ivar: _issueData
@property (retain, nonatomic) NTPBIssueExposureData *issueExposureData; // ivar: _issueExposureData
@property (retain, nonatomic) NTPBIssueViewData *issueViewData; // ivar: _issueViewData
@property (retain, nonatomic) NSString *referencedArticleId; // ivar: _referencedArticleId
@property (nonatomic) int scrollHostViewType; // ivar: _scrollHostViewType
@property (retain, nonatomic) NSString *scrollVelocity; // ivar: _scrollVelocity
@property (nonatomic) float scrollingVelocity; // ivar: _scrollingVelocity
@property (retain, nonatomic) NSString *sectionHeadlineId; // ivar: _sectionHeadlineId
@property (retain, nonatomic) NSString *sourceChannelId; // ivar: _sourceChannelId
@property (retain, nonatomic) NSString *verticalScrollPositionEnd; // ivar: _verticalScrollPositionEnd
@property (nonatomic) float verticalScrollPositionEnding; // ivar: _verticalScrollPositionEnding
@property (retain, nonatomic) NSString *verticalScrollPositionStart; // ivar: _verticalScrollPositionStart
@property (nonatomic) float verticalScrollPositionStarting; // ivar: _verticalScrollPositionStarting


+(Class)fractionalCohortMembershipType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)fractionalCohortMembershipAtIndex:(NSUInteger)arg0 ;
-(void)addFractionalCohortMembership:(id)arg0 ;
-(void)clearFractionalCohortMemberships;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif