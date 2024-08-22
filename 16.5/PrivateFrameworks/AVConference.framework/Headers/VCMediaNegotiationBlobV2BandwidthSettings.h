// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCMEDIANEGOTIATIONBLOBV2BANDWIDTHSETTINGS_H
#define VCMEDIANEGOTIATIONBLOBV2BANDWIDTHSETTINGS_H

@class PBCodable;
@protocol NSCopying;



@interface VCMediaNegotiationBlobV2BandwidthSettings : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) unsigned int cap2G; // ivar: _cap2G
@property (nonatomic) unsigned int cap3G; // ivar: _cap3G
@property (nonatomic) unsigned int cap5G; // ivar: _cap5G
@property (nonatomic) unsigned int capLTE; // ivar: _capLTE
@property (nonatomic) unsigned int capWifi; // ivar: _capWifi
@property (nonatomic) BOOL hasCap2G;
@property (nonatomic) BOOL hasCap3G;
@property (nonatomic) BOOL hasCap5G;
@property (nonatomic) BOOL hasCapLTE;
@property (nonatomic) BOOL hasCapWifi;


+(id)filteredSetForOperatingMode:(int)arg0 bandwidthConfigurations:(id)arg1 ;
-(BOOL)isDefaultSettings;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(BOOL)setupCapForBandwidthConfiguration:(id)arg0 ;
-(NSUInteger)hash;
-(id)bandwidthConfigurations;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithBandwidthConfigurations:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)printWithLogFile:(*void)arg0 prefix:(id)arg1 ;
-(void)setupCap2G:(unsigned int)arg0 ;
-(void)setupCap3G:(unsigned int)arg0 ;
-(void)setupCap5G:(unsigned int)arg0 ;
-(void)setupCapLTE:(unsigned int)arg0 ;
-(void)setupCapWifi:(unsigned int)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif