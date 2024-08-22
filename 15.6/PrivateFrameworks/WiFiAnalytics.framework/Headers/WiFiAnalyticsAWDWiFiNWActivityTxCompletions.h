// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WIFIANALYTICSAWDWIFINWACTIVITYTXCOMPLETIONS_H
#define WIFIANALYTICSAWDWIFINWACTIVITYTXCOMPLETIONS_H

@class PBCodable;
@protocol NSCopying;



@interface WiFiAnalyticsAWDWiFiNWActivityTxCompletions : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) unsigned int chipmodeerror; // ivar: _chipmodeerror
@property (nonatomic) unsigned int expired; // ivar: _expired
@property (nonatomic) BOOL hasChipmodeerror;
@property (nonatomic) BOOL hasExpired;
@property (nonatomic) BOOL hasInternalerror;
@property (nonatomic) BOOL hasIoerror;
@property (nonatomic) BOOL hasMbfree;
@property (nonatomic) BOOL hasNoack;
@property (nonatomic) BOOL hasNobuf;
@property (nonatomic) BOOL hasNoremotepeer;
@property (nonatomic) BOOL hasNoresources;
@property (nonatomic) BOOL hasSuccess;
@property (nonatomic) BOOL hasTxfailure;
@property (nonatomic) unsigned int internalerror; // ivar: _internalerror
@property (nonatomic) unsigned int ioerror; // ivar: _ioerror
@property (nonatomic) unsigned int mbfree; // ivar: _mbfree
@property (nonatomic) unsigned int noack; // ivar: _noack
@property (nonatomic) unsigned int nobuf; // ivar: _nobuf
@property (nonatomic) unsigned int noremotepeer; // ivar: _noremotepeer
@property (nonatomic) unsigned int noresources; // ivar: _noresources
@property (nonatomic) unsigned int success; // ivar: _success
@property (nonatomic) unsigned int txfailure; // ivar: _txfailure


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