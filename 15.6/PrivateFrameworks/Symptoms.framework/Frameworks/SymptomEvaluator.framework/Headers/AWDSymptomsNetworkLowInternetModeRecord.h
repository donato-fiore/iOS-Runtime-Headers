// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AWDSYMPTOMSNETWORKLOWINTERNETMODERECORD_H
#define AWDSYMPTOMSNETWORKLOWINTERNETMODERECORD_H

@class PBCodable, NSData;
@protocol NSCopying;



@interface AWDSymptomsNetworkLowInternetModeRecord : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasLimConnTimeoutRatePercent;
@property (nonatomic) BOOL hasLimDLDetected;
@property (nonatomic) BOOL hasLimDLMaxBWBps;
@property (nonatomic) BOOL hasLimInterfaceType;
@property (nonatomic) BOOL hasLimPacketLossRatePercent;
@property (nonatomic) BOOL hasLimPacketOOORatePercent;
@property (nonatomic) BOOL hasLimRTTAvgMilliseconds;
@property (nonatomic) BOOL hasLimRTTMinMilliseconds;
@property (nonatomic) BOOL hasLimRTTVarMilliseconds;
@property (readonly, nonatomic) BOOL hasLimSignature;
@property (nonatomic) BOOL hasLimULDetected;
@property (nonatomic) BOOL hasLimULMaxBWBps;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) NSUInteger limConnTimeoutRatePercent; // ivar: _limConnTimeoutRatePercent
@property (nonatomic) unsigned int limDLDetected; // ivar: _limDLDetected
@property (nonatomic) NSUInteger limDLMaxBWBps; // ivar: _limDLMaxBWBps
@property (nonatomic) unsigned int limInterfaceType; // ivar: _limInterfaceType
@property (nonatomic) NSUInteger limPacketLossRatePercent; // ivar: _limPacketLossRatePercent
@property (nonatomic) NSUInteger limPacketOOORatePercent; // ivar: _limPacketOOORatePercent
@property (nonatomic) NSUInteger limRTTAvgMilliseconds; // ivar: _limRTTAvgMilliseconds
@property (nonatomic) NSUInteger limRTTMinMilliseconds; // ivar: _limRTTMinMilliseconds
@property (nonatomic) NSUInteger limRTTVarMilliseconds; // ivar: _limRTTVarMilliseconds
@property (retain, nonatomic) NSData *limSignature; // ivar: _limSignature
@property (nonatomic) unsigned int limULDetected; // ivar: _limULDetected
@property (nonatomic) NSUInteger limULMaxBWBps; // ivar: _limULMaxBWBps
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp


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