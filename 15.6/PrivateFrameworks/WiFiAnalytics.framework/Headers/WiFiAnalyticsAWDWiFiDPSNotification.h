// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WIFIANALYTICSAWDWIFIDPSNOTIFICATION_H
#define WIFIANALYTICSAWDWIFIDPSNOTIFICATION_H

@class PBCodable;
@protocol NSCopying;



@interface WiFiAnalyticsAWDWiFiDPSNotification : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL facetimeCallInProgress; // ivar: _facetimeCallInProgress
@property (nonatomic) BOOL hasFacetimeCallInProgress;
@property (nonatomic) BOOL hasProblemAC;
@property (nonatomic) BOOL hasSymptom;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned int problemAC; // ivar: _problemAC
@property (nonatomic) int symptom; // ivar: _symptom
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)symptomAsString:(int)arg0 ;
-(int)StringAsSymptom:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif