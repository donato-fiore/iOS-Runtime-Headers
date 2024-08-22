// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTPBPDFPAGEVIEW_H
#define NTPBPDFPAGEVIEW_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "NTPBChannelData.h"
#import "NTPBIssueData.h"
#import "NTPBIssueExposureData.h"
#import "NTPBIssueViewData.h"

@interface NTPBPDFPageView : PBCodable <NSCopying>

 {
    ? _pageIndices;
    ? _has;
}


@property (nonatomic) BOOL adSupportedChannel; // ivar: _adSupportedChannel
@property (retain, nonatomic) NSString *campaignId; // ivar: _campaignId
@property (retain, nonatomic) NTPBChannelData *channelData; // ivar: _channelData
@property (nonatomic) int groupType; // ivar: _groupType
@property (nonatomic) BOOL hasAdSupportedChannel;
@property (readonly, nonatomic) BOOL hasCampaignId;
@property (readonly, nonatomic) BOOL hasChannelData;
@property (nonatomic) BOOL hasGroupType;
@property (nonatomic) BOOL hasIsFreeIssue;
@property (nonatomic) BOOL hasIsPaidSubscriberToSourceChannel;
@property (readonly, nonatomic) BOOL hasIssueData;
@property (readonly, nonatomic) BOOL hasIssueExposureData;
@property (readonly, nonatomic) BOOL hasIssueViewData;
@property (readonly, nonatomic) BOOL hasLanguage;
@property (readonly, nonatomic) BOOL hasNotificationId;
@property (nonatomic) BOOL hasPageCount;
@property (nonatomic) BOOL hasPaidSubscriberToFeedType;
@property (nonatomic) BOOL hasPaidSubscriptionConversionPointType;
@property (readonly, nonatomic) BOOL hasParentFeedId;
@property (nonatomic) BOOL hasParentFeedType;
@property (readonly, nonatomic) BOOL hasReferringSourceApplication;
@property (readonly, nonatomic) BOOL hasReferringUrl;
@property (readonly, nonatomic) BOOL hasSourceChannelId;
@property (nonatomic) BOOL hasViewFromNotificationDirectOpen;
@property (nonatomic) BOOL isFreeIssue; // ivar: _isFreeIssue
@property (nonatomic) BOOL isPaidSubscriberToSourceChannel; // ivar: _isPaidSubscriberToSourceChannel
@property (retain, nonatomic) NTPBIssueData *issueData; // ivar: _issueData
@property (retain, nonatomic) NTPBIssueExposureData *issueExposureData; // ivar: _issueExposureData
@property (retain, nonatomic) NTPBIssueViewData *issueViewData; // ivar: _issueViewData
@property (retain, nonatomic) NSString *language; // ivar: _language
@property (retain, nonatomic) NSString *notificationId; // ivar: _notificationId
@property (nonatomic) int pageCount; // ivar: _pageCount
@property (readonly, nonatomic) *int pageIndices;
@property (readonly, nonatomic) NSUInteger pageIndicesCount;
@property (nonatomic) int paidSubscriberToFeedType; // ivar: _paidSubscriberToFeedType
@property (nonatomic) int paidSubscriptionConversionPointType; // ivar: _paidSubscriptionConversionPointType
@property (retain, nonatomic) NSString *parentFeedId; // ivar: _parentFeedId
@property (nonatomic) int parentFeedType; // ivar: _parentFeedType
@property (retain, nonatomic) NSString *referringSourceApplication; // ivar: _referringSourceApplication
@property (retain, nonatomic) NSString *referringUrl; // ivar: _referringUrl
@property (retain, nonatomic) NSString *sourceChannelId; // ivar: _sourceChannelId
@property (nonatomic) BOOL viewFromNotificationDirectOpen; // ivar: _viewFromNotificationDirectOpen


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)groupTypeAsString:(int)arg0 ;
-(id)paidSubscriberToFeedTypeAsString:(int)arg0 ;
-(id)paidSubscriptionConversionPointTypeAsString:(int)arg0 ;
-(id)parentFeedTypeAsString:(int)arg0 ;
-(int)StringAsGroupType:(id)arg0 ;
-(int)StringAsPaidSubscriberToFeedType:(id)arg0 ;
-(int)StringAsPaidSubscriptionConversionPointType:(id)arg0 ;
-(int)StringAsParentFeedType:(id)arg0 ;
-(int)pageIndicesAtIndex:(NSUInteger)arg0 ;
-(void)addPageIndices:(int)arg0 ;
-(void)clearPageIndices;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif