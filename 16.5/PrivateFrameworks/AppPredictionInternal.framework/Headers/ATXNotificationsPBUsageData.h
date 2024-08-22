// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXNOTIFICATIONSPBUSAGEDATA_H
#define ATXNOTIFICATIONSPBUSAGEDATA_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface ATXNotificationsPBUsageData : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) float appPopularity; // ivar: _appPopularity
@property (nonatomic) float cleared; // ivar: _cleared
@property (retain, nonatomic) NSString *country; // ivar: _country
@property (nonatomic) float defaultActions; // ivar: _defaultActions
@property (nonatomic) float engaged; // ivar: _engaged
@property (nonatomic) BOOL hasAppPopularity;
@property (nonatomic) BOOL hasCleared;
@property (readonly, nonatomic) BOOL hasCountry;
@property (nonatomic) BOOL hasDefaultActions;
@property (nonatomic) BOOL hasEngaged;
@property (nonatomic) BOOL hasIgnored;
@property (nonatomic) BOOL hasOrbs;
@property (nonatomic) BOOL hasReceived;
@property (nonatomic) BOOL hasSuppActions;
@property (nonatomic) BOOL hasTapCoalesce;
@property (nonatomic) BOOL hasTotalLaunches;
@property (nonatomic) float ignored; // ivar: _ignored
@property (nonatomic) float orbs; // ivar: _orbs
@property (nonatomic) float received; // ivar: _received
@property (nonatomic) float suppActions; // ivar: _suppActions
@property (nonatomic) float tapCoalesce; // ivar: _tapCoalesce
@property (nonatomic) float totalLaunches; // ivar: _totalLaunches


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif