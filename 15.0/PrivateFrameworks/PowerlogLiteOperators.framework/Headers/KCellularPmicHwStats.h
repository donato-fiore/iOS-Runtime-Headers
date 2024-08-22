// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef KCELLULARPMICHWSTATS_H
#define KCELLULARPMICHWSTATS_H

@class PBCodable;
@protocol NSCopying;



@interface KCellularPmicHwStats : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) unsigned int activeDurMs; // ivar: _activeDurMs
@property (nonatomic) unsigned int bctActiveDurMs; // ivar: _bctActiveDurMs
@property (nonatomic) unsigned int cdmaActiveDurMs; // ivar: _cdmaActiveDurMs
@property (nonatomic) unsigned int dbgActiveDurMs; // ivar: _dbgActiveDurMs
@property (nonatomic) unsigned int dpuActiveDurMs; // ivar: _dpuActiveDurMs
@property (nonatomic) unsigned int durationMs; // ivar: _durationMs
@property (nonatomic) unsigned int gsmActiveDurMs; // ivar: _gsmActiveDurMs
@property (nonatomic) unsigned int gsmCa5ActiveDurMs; // ivar: _gsmCa5ActiveDurMs
@property (nonatomic) BOOL hasActiveDurMs;
@property (nonatomic) BOOL hasBctActiveDurMs;
@property (nonatomic) BOOL hasCdmaActiveDurMs;
@property (nonatomic) BOOL hasDbgActiveDurMs;
@property (nonatomic) BOOL hasDpuActiveDurMs;
@property (nonatomic) BOOL hasDurationMs;
@property (nonatomic) BOOL hasGsmActiveDurMs;
@property (nonatomic) BOOL hasGsmCa5ActiveDurMs;
@property (nonatomic) BOOL hasHighVoltActiveDurMs;
@property (nonatomic) BOOL hasHostActiveDurMs;
@property (nonatomic) BOOL hasHostCpuActiveDurMs;
@property (nonatomic) BOOL hasHostCpuSysActiveDurMs;
@property (nonatomic) BOOL hasIoActiveDurMs;
@property (nonatomic) BOOL hasLowVoltActiveDurMs;
@property (nonatomic) BOOL hasLteActiveDurMs;
@property (nonatomic) BOOL hasMidVoltActiveDurMs;
@property (nonatomic) BOOL hasPerActiveDurMs;
@property (nonatomic) BOOL hasPhyActiveDurMs;
@property (nonatomic) BOOL hasPhyNocActiveDurMs;
@property (nonatomic) BOOL hasRauActiveDurMs;
@property (nonatomic) BOOL hasRpcuActiveDurMs;
@property (nonatomic) BOOL hasSleepDurMs;
@property (nonatomic) BOOL hasSleepEntryCount;
@property (nonatomic) BOOL hasTdscdmaActiveDurMs;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasTpcuActiveDurMs;
@property (nonatomic) BOOL hasWcdmaActiveDurMs;
@property (nonatomic) unsigned int highVoltActiveDurMs; // ivar: _highVoltActiveDurMs
@property (nonatomic) unsigned int hostActiveDurMs; // ivar: _hostActiveDurMs
@property (nonatomic) unsigned int hostCpuActiveDurMs; // ivar: _hostCpuActiveDurMs
@property (nonatomic) unsigned int hostCpuSysActiveDurMs; // ivar: _hostCpuSysActiveDurMs
@property (nonatomic) unsigned int ioActiveDurMs; // ivar: _ioActiveDurMs
@property (nonatomic) unsigned int lowVoltActiveDurMs; // ivar: _lowVoltActiveDurMs
@property (nonatomic) unsigned int lteActiveDurMs; // ivar: _lteActiveDurMs
@property (nonatomic) unsigned int midVoltActiveDurMs; // ivar: _midVoltActiveDurMs
@property (nonatomic) unsigned int perActiveDurMs; // ivar: _perActiveDurMs
@property (nonatomic) unsigned int phyActiveDurMs; // ivar: _phyActiveDurMs
@property (nonatomic) unsigned int phyNocActiveDurMs; // ivar: _phyNocActiveDurMs
@property (nonatomic) unsigned int rauActiveDurMs; // ivar: _rauActiveDurMs
@property (nonatomic) unsigned int rpcuActiveDurMs; // ivar: _rpcuActiveDurMs
@property (nonatomic) unsigned int sleepDurMs; // ivar: _sleepDurMs
@property (nonatomic) unsigned int sleepEntryCount; // ivar: _sleepEntryCount
@property (nonatomic) unsigned int tdscdmaActiveDurMs; // ivar: _tdscdmaActiveDurMs
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp
@property (nonatomic) unsigned int tpcuActiveDurMs; // ivar: _tpcuActiveDurMs
@property (nonatomic) unsigned int wcdmaActiveDurMs; // ivar: _wcdmaActiveDurMs


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