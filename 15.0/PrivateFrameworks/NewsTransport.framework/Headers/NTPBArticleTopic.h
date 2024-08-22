// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTPBARTICLETOPIC_H
#define NTPBARTICLETOPIC_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList.h"
#import "COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats.h"

@interface NTPBArticleTopic : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *cohorts; // ivar: _cohorts
@property (retain, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats *conversionStats; // ivar: _conversionStats
@property (nonatomic) CGFloat flowRate; // ivar: _flowRate
@property (readonly, nonatomic) BOOL hasCohorts;
@property (readonly, nonatomic) BOOL hasConversionStats;
@property (nonatomic) BOOL hasFlowRate;
@property (nonatomic) BOOL hasIsEligibleForGrouping;
@property (nonatomic) BOOL hasIsEligibleForGroupingIfAutofavorited;
@property (nonatomic) BOOL hasIsEligibleForGroupingIfFavorited;
@property (nonatomic) BOOL hasIsHidden;
@property (nonatomic) BOOL hasIsManagedTopic;
@property (nonatomic) BOOL hasIsManagedTopicWinner;
@property (nonatomic) BOOL hasQuality;
@property (nonatomic) BOOL hasSubscriptionRate;
@property (readonly, nonatomic) BOOL hasTagID;
@property (nonatomic) BOOL isEligibleForGrouping; // ivar: _isEligibleForGrouping
@property (nonatomic) BOOL isEligibleForGroupingIfAutofavorited; // ivar: _isEligibleForGroupingIfAutofavorited
@property (nonatomic) BOOL isEligibleForGroupingIfFavorited; // ivar: _isEligibleForGroupingIfFavorited
@property (nonatomic) BOOL isHidden; // ivar: _isHidden
@property (nonatomic) BOOL isManagedTopic; // ivar: _isManagedTopic
@property (nonatomic) BOOL isManagedTopicWinner; // ivar: _isManagedTopicWinner
@property (nonatomic) CGFloat quality; // ivar: _quality
@property (nonatomic) CGFloat subscriptionRate; // ivar: _subscriptionRate
@property (retain, nonatomic) NSString *tagID; // ivar: _tagID


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif