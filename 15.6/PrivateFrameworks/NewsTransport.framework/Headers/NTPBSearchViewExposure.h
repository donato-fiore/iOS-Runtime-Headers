// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTPBSEARCHVIEWEXPOSURE_H
#define NTPBSEARCHVIEWEXPOSURE_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface NTPBSearchViewExposure : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int areaPresentationReason; // ivar: _areaPresentationReason
@property (retain, nonatomic) NSString *campaignId; // ivar: _campaignId
@property (retain, nonatomic) NSString *campaignType; // ivar: _campaignType
@property (retain, nonatomic) NSString *creativeId; // ivar: _creativeId
@property (nonatomic) BOOL hasAreaPresentationReason;
@property (readonly, nonatomic) BOOL hasCampaignId;
@property (readonly, nonatomic) BOOL hasCampaignType;
@property (readonly, nonatomic) BOOL hasCreativeId;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)areaPresentationReasonAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(int)StringAsAreaPresentationReason:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif