// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WIFIANALYTICSAWDWIFINWACTIVITYSCANACTIVITY_H
#define WIFIANALYTICSAWDWIFINWACTIVITYSCANACTIVITY_H

@class PBCodable;
@protocol NSCopying;



@interface WiFiAnalyticsAWDWiFiNWActivityScanActivity : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) unsigned int assocCount; // ivar: _assocCount
@property (nonatomic) unsigned int assocDur; // ivar: _assocDur
@property (nonatomic) BOOL hasAssocCount;
@property (nonatomic) BOOL hasAssocDur;
@property (nonatomic) BOOL hasOtherCount;
@property (nonatomic) BOOL hasOtherDur;
@property (nonatomic) BOOL hasPnoBSSIDCount;
@property (nonatomic) BOOL hasPnoBSSIDDur;
@property (nonatomic) BOOL hasPnoSSIDCount;
@property (nonatomic) BOOL hasPnoSSIDDur;
@property (nonatomic) BOOL hasRoamCount;
@property (nonatomic) BOOL hasRoamDur;
@property (nonatomic) BOOL hasUserCount;
@property (nonatomic) BOOL hasUserDur;
@property (nonatomic) unsigned int otherCount; // ivar: _otherCount
@property (nonatomic) unsigned int otherDur; // ivar: _otherDur
@property (nonatomic) unsigned int pnoBSSIDCount; // ivar: _pnoBSSIDCount
@property (nonatomic) unsigned int pnoBSSIDDur; // ivar: _pnoBSSIDDur
@property (nonatomic) unsigned int pnoSSIDCount; // ivar: _pnoSSIDCount
@property (nonatomic) unsigned int pnoSSIDDur; // ivar: _pnoSSIDDur
@property (nonatomic) unsigned int roamCount; // ivar: _roamCount
@property (nonatomic) unsigned int roamDur; // ivar: _roamDur
@property (nonatomic) unsigned int userCount; // ivar: _userCount
@property (nonatomic) unsigned int userDur; // ivar: _userDur


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