// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCMEDIANEGOTIATIONBLOBBANDWIDTHSETTINGS_H
#define VCMEDIANEGOTIATIONBLOBBANDWIDTHSETTINGS_H

@class PBCodable;
@protocol NSCopying;



@interface VCMediaNegotiationBlobBandwidthSettings : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int configuration; // ivar: _configuration
@property (nonatomic) int configurationExtension; // ivar: _configurationExtension
@property (nonatomic) BOOL hasConfigurationExtension;
@property (nonatomic) unsigned int maxBandwidth; // ivar: _maxBandwidth


+(int)bandwidthConfigurationWithOperatingMode:(int)arg0 connectionType:(int)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)configurationAsString:(int)arg0 ;
-(id)configurationExtensionAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)newBandwidthConfigurations;
-(int)StringAsConfiguration:(id)arg0 ;
-(int)StringAsConfigurationExtension:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif