// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WIFIANALYTICSAWDWIFINWACTIVITYIMPEDINGFUNCTIONS_H
#define WIFIANALYTICSAWDWIFINWACTIVITYIMPEDINGFUNCTIONS_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;


#import "WiFiAnalyticsAWDWiFiTDM.h"

@interface WiFiAnalyticsAWDWiFiNWActivityImpedingFunctions : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) unsigned int activechains0; // ivar: _activechains0
@property (nonatomic) unsigned int activechains1; // ivar: _activechains1
@property (retain, nonatomic) NSMutableArray *cTLMIndex1s; // ivar: _cTLMIndex1s
@property (retain, nonatomic) NSMutableArray *cTLMIndexs; // ivar: _cTLMIndexs
@property (nonatomic) unsigned int ctlmid0; // ivar: _ctlmid0
@property (nonatomic) unsigned int ctlmid1; // ivar: _ctlmid1
@property (nonatomic) BOOL hasActivechains0;
@property (nonatomic) BOOL hasActivechains1;
@property (nonatomic) BOOL hasCtlmid0;
@property (nonatomic) BOOL hasCtlmid1;
@property (nonatomic) BOOL hasPpm0;
@property (nonatomic) BOOL hasPpm1;
@property (nonatomic) BOOL hasRc1Duration;
@property (nonatomic) BOOL hasRc1Request;
@property (nonatomic) BOOL hasRc1wlanCrit;
@property (nonatomic) BOOL hasRc1wlanCritDuration;
@property (nonatomic) BOOL hasRc2Duration;
@property (nonatomic) BOOL hasRc2Grant;
@property (nonatomic) BOOL hasRc2LongGrant;
@property (nonatomic) BOOL hasRc2Request;
@property (nonatomic) BOOL hasRc2cts2a;
@property (readonly, nonatomic) BOOL hasSdbtdm;
@property (nonatomic) BOOL hasTemp0;
@property (nonatomic) BOOL hasTemp1;
@property (nonatomic) BOOL hasTvpmindex0;
@property (nonatomic) BOOL hasTvpmindex1;
@property (nonatomic) BOOL hasTxduty0;
@property (nonatomic) BOOL hasTxduty1;
@property (nonatomic) BOOL hasTxpowerbackoff0;
@property (nonatomic) BOOL hasTxpowerbackoff1;
@property (nonatomic) BOOL hasVoltage0;
@property (nonatomic) BOOL hasVoltage1;
@property (nonatomic) unsigned int ppm0; // ivar: _ppm0
@property (nonatomic) unsigned int ppm1; // ivar: _ppm1
@property (nonatomic) unsigned int rc1Duration; // ivar: _rc1Duration
@property (nonatomic) unsigned int rc1Request; // ivar: _rc1Request
@property (nonatomic) unsigned int rc1wlanCrit; // ivar: _rc1wlanCrit
@property (nonatomic) unsigned int rc1wlanCritDuration; // ivar: _rc1wlanCritDuration
@property (nonatomic) unsigned int rc2Duration; // ivar: _rc2Duration
@property (nonatomic) unsigned int rc2Grant; // ivar: _rc2Grant
@property (nonatomic) unsigned int rc2LongGrant; // ivar: _rc2LongGrant
@property (nonatomic) unsigned int rc2Request; // ivar: _rc2Request
@property (nonatomic) unsigned int rc2cts2a; // ivar: _rc2cts2a
@property (retain, nonatomic) WiFiAnalyticsAWDWiFiTDM *sdbtdm; // ivar: _sdbtdm
@property (nonatomic) unsigned int temp0; // ivar: _temp0
@property (nonatomic) unsigned int temp1; // ivar: _temp1
@property (nonatomic) unsigned int tvpmindex0; // ivar: _tvpmindex0
@property (nonatomic) unsigned int tvpmindex1; // ivar: _tvpmindex1
@property (retain, nonatomic) NSMutableArray *txDutyCyclePct1s; // ivar: _txDutyCyclePct1s
@property (retain, nonatomic) NSMutableArray *txDutyCyclePcts; // ivar: _txDutyCyclePcts
@property (retain, nonatomic) NSMutableArray *txPowerBackoffDB1s; // ivar: _txPowerBackoffDB1s
@property (retain, nonatomic) NSMutableArray *txPowerBackoffDBs; // ivar: _txPowerBackoffDBs
@property (nonatomic) unsigned int txduty0; // ivar: _txduty0
@property (nonatomic) unsigned int txduty1; // ivar: _txduty1
@property (nonatomic) unsigned int txpowerbackoff0; // ivar: _txpowerbackoff0
@property (nonatomic) unsigned int txpowerbackoff1; // ivar: _txpowerbackoff1
@property (nonatomic) unsigned int voltage0; // ivar: _voltage0
@property (nonatomic) unsigned int voltage1; // ivar: _voltage1


+(Class)cTLMIndex1Type;
+(Class)cTLMIndexType;
+(Class)txDutyCyclePct1Type;
+(Class)txDutyCyclePctType;
+(Class)txPowerBackoffDB1Type;
+(Class)txPowerBackoffDBType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)cTLMIndex1AtIndex:(NSUInteger)arg0 ;
-(id)cTLMIndexAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)txDutyCyclePct1AtIndex:(NSUInteger)arg0 ;
-(id)txDutyCyclePctAtIndex:(NSUInteger)arg0 ;
-(id)txPowerBackoffDB1AtIndex:(NSUInteger)arg0 ;
-(id)txPowerBackoffDBAtIndex:(NSUInteger)arg0 ;
-(void)addCTLMIndex1:(id)arg0 ;
-(void)addCTLMIndex:(id)arg0 ;
-(void)addTxDutyCyclePct1:(id)arg0 ;
-(void)addTxDutyCyclePct:(id)arg0 ;
-(void)addTxPowerBackoffDB1:(id)arg0 ;
-(void)addTxPowerBackoffDB:(id)arg0 ;
-(void)clearCTLMIndex1s;
-(void)clearCTLMIndexs;
-(void)clearTxDutyCyclePct1s;
-(void)clearTxDutyCyclePcts;
-(void)clearTxPowerBackoffDB1s;
-(void)clearTxPowerBackoffDBs;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif