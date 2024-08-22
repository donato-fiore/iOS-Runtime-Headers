// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTPBARTICLEENGAGEMENT_H
#define NTPBARTICLEENGAGEMENT_H

@class PBCodable, NSString, NSData;
@protocol NSCopying;


#import "NTPBIssueData.h"
#import "NTPBIssueViewData.h"

@interface NTPBArticleEngagement : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int articleEngagementType; // ivar: _articleEngagementType
@property (retain, nonatomic) NSString *articleId; // ivar: _articleId
@property (nonatomic) NSInteger articleOpenedAtTimestamp; // ivar: _articleOpenedAtTimestamp
@property (retain, nonatomic) NSString *channelId; // ivar: _channelId
@property (retain, nonatomic) NSString *countryCode; // ivar: _countryCode
@property (retain, nonatomic) NSString *deviceModel; // ivar: _deviceModel
@property (nonatomic) NSInteger eventTimestamp; // ivar: _eventTimestamp
@property (nonatomic) BOOL hasArticleEngagementType;
@property (readonly, nonatomic) BOOL hasArticleId;
@property (nonatomic) BOOL hasArticleOpenedAtTimestamp;
@property (readonly, nonatomic) BOOL hasChannelId;
@property (readonly, nonatomic) BOOL hasCountryCode;
@property (readonly, nonatomic) BOOL hasDeviceModel;
@property (nonatomic) BOOL hasEventTimestamp;
@property (nonatomic) BOOL hasIsPaidSubscriber;
@property (readonly, nonatomic) BOOL hasIssueData;
@property (readonly, nonatomic) BOOL hasIssueViewData;
@property (readonly, nonatomic) BOOL hasSessionId;
@property (readonly, nonatomic) BOOL hasUserId;
@property (nonatomic) BOOL hasUtcOffset;
@property (nonatomic) BOOL isPaidSubscriber; // ivar: _isPaidSubscriber
@property (retain, nonatomic) NTPBIssueData *issueData; // ivar: _issueData
@property (retain, nonatomic) NTPBIssueViewData *issueViewData; // ivar: _issueViewData
@property (retain, nonatomic) NSData *sessionId; // ivar: _sessionId
@property (retain, nonatomic) NSString *userId; // ivar: _userId
@property (nonatomic) int utcOffset; // ivar: _utcOffset


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