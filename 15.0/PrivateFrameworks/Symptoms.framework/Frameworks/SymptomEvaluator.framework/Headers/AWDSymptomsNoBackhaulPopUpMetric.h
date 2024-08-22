// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AWDSYMPTOMSNOBACKHAULPOPUPMETRIC_H
#define AWDSYMPTOMSNOBACKHAULPOPUPMETRIC_H

@class PBCodable;
@protocol NSCopying;



@interface AWDSymptomsNoBackhaulPopUpMetric : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int action; // ivar: _action
@property (nonatomic) BOOL hasAction;
@property (nonatomic) BOOL hasNetworkType;
@property (nonatomic) BOOL hasNetworksShownAtLeastOnceInLast24Hrs;
@property (nonatomic) BOOL hasPopUpShownForSecs;
@property (nonatomic) BOOL hasTimeSinceShownOnSameNetworkSecs;
@property (nonatomic) BOOL hasTimesShownOnAnyNetworkLast24Hrs;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) int networkType; // ivar: _networkType
@property (nonatomic) unsigned int networksShownAtLeastOnceInLast24Hrs; // ivar: _networksShownAtLeastOnceInLast24Hrs
@property (nonatomic) unsigned int popUpShownForSecs; // ivar: _popUpShownForSecs
@property (nonatomic) unsigned int timeSinceShownOnSameNetworkSecs; // ivar: _timeSinceShownOnSameNetworkSecs
@property (nonatomic) unsigned int timesShownOnAnyNetworkLast24Hrs; // ivar: _timesShownOnAnyNetworkLast24Hrs
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)actionAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)networkTypeAsString:(int)arg0 ;
-(int)StringAsAction:(id)arg0 ;
-(int)StringAsNetworkType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif