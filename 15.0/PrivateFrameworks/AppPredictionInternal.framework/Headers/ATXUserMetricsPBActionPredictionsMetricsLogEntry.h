// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXUSERMETRICSPBACTIONPREDICTIONSMETRICSLOGENTRY_H
#define ATXUSERMETRICSPBACTIONPREDICTIONSMETRICSLOGENTRY_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;



@interface ATXUserMetricsPBActionPredictionsMetricsLogEntry : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *cacheId; // ivar: _cacheId
@property (nonatomic) int dayOfWeek; // ivar: _dayOfWeek
@property (nonatomic) unsigned int engagedActions; // ivar: _engagedActions
@property (retain, nonatomic) NSString *engagedBundleId; // ivar: _engagedBundleId
@property (retain, nonatomic) NSMutableArray *experiments; // ivar: _experiments
@property (readonly, nonatomic) BOOL hasCacheId;
@property (nonatomic) BOOL hasDayOfWeek;
@property (nonatomic) BOOL hasEngagedActions;
@property (readonly, nonatomic) BOOL hasEngagedBundleId;
@property (nonatomic) BOOL hasHourOfDay;
@property (nonatomic) BOOL hasRankOfFirstEngagement;
@property (nonatomic) BOOL hasShownActions;
@property (nonatomic) BOOL hasUi;
@property (readonly, nonatomic) BOOL hasUserIdentifier;
@property (nonatomic) unsigned int hourOfDay; // ivar: _hourOfDay
@property (nonatomic) unsigned int rankOfFirstEngagement; // ivar: _rankOfFirstEngagement
@property (nonatomic) unsigned int shownActions; // ivar: _shownActions
@property (nonatomic) int ui; // ivar: _ui
@property (retain, nonatomic) NSString *userIdentifier; // ivar: _userIdentifier


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dayOfWeekAsString:(int)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)experimentsAtIndex:(NSUInteger)arg0 ;
-(id)uiAsString:(int)arg0 ;
-(int)StringAsDayOfWeek:(id)arg0 ;
-(int)StringAsUi:(id)arg0 ;
-(void)addExperiments:(id)arg0 ;
-(void)clearExperiments;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif