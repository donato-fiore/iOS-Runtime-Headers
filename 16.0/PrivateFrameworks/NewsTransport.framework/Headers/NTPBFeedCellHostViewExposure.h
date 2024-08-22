// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTPBFEEDCELLHOSTVIEWEXPOSURE_H
#define NTPBFEEDCELLHOSTVIEWEXPOSURE_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface NTPBFeedCellHostViewExposure : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int areaPresentationReason; // ivar: _areaPresentationReason
@property (retain, nonatomic) NSString *campaignId; // ivar: _campaignId
@property (retain, nonatomic) NSString *campaignType; // ivar: _campaignType
@property (retain, nonatomic) NSString *creativeId; // ivar: _creativeId
@property (nonatomic) int feedCellHostType; // ivar: _feedCellHostType
@property (nonatomic) BOOL hasAreaPresentationReason;
@property (readonly, nonatomic) BOOL hasCampaignId;
@property (readonly, nonatomic) BOOL hasCampaignType;
@property (readonly, nonatomic) BOOL hasCreativeId;
@property (nonatomic) BOOL hasFeedCellHostType;
@property (nonatomic) BOOL hasPickFavsButtonExposed;
@property (readonly, nonatomic) BOOL hasTopicFeedId;
@property (nonatomic) BOOL hasUserAction;
@property (nonatomic) BOOL pickFavsButtonExposed; // ivar: _pickFavsButtonExposed
@property (retain, nonatomic) NSString *topicFeedId; // ivar: _topicFeedId
@property (nonatomic) int userAction; // ivar: _userAction


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)areaPresentationReasonAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)feedCellHostTypeAsString:(int)arg0 ;
-(int)StringAsAreaPresentationReason:(id)arg0 ;
-(int)StringAsFeedCellHostType:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif