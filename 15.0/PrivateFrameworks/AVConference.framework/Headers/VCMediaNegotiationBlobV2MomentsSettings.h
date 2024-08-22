// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCMEDIANEGOTIATIONBLOBV2MOMENTSSETTINGS_H
#define VCMEDIANEGOTIATIONBLOBV2MOMENTSSETTINGS_H

@class PBCodable, NSSet;
@protocol NSCopying;



@interface VCMediaNegotiationBlobV2MomentsSettings : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) unsigned int capabilities; // ivar: _capabilities
@property (readonly, nonatomic) unsigned char capabilitiesMultiway;
@property (readonly, nonatomic) unsigned char capabilitiesOneToOne;
@property (nonatomic) BOOL hasCapabilities;
@property (nonatomic) BOOL hasSupportedCodecs;
@property (readonly, nonatomic) NSSet *imageTypes;
@property (nonatomic) unsigned int supportedCodecs; // ivar: _supportedCodecs
@property (readonly, nonatomic) NSSet *videoCodecs;


+(id)imageTypesWithSupportedCodecs:(unsigned int)arg0 ;
+(id)videoCodecsWithSupportedCodecs:(unsigned int)arg0 ;
+(unsigned char)capabilitiesWithBlobCapabilities:(unsigned int)arg0 ;
+(unsigned char)multiwayCapabilitiesWithBlobCapabilities:(unsigned int)arg0 ;
+(unsigned int)blobCapabilitiesWithOneToOneCapabilities:(unsigned char)arg0 multiwayCapabilities:(unsigned char)arg1 ;
+(unsigned int)supportedCodecsWithVideoCodecs:(id)arg0 imageTypes:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithVideoCodecs:(id)arg0 imageTypes:(id)arg1 capabilitiesOneToOne:(unsigned char)arg2 capabilitiesMultiway:(unsigned char)arg3 ;
-(void)appendFieldName:(id)arg0 codecs:(unsigned int)arg1 outString:(id)arg2 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)printWithLogFile:(*void)arg0 prefix:(id)arg1 ;
-(void)writeTo:(id)arg0 ;


@end


#endif