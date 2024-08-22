// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCMEDIANEGOTIATIONBLOBMOMENTSSETTINGS_H
#define VCMEDIANEGOTIATIONBLOBMOMENTSSETTINGS_H

@class PBCodable;
@protocol NSCopying;



@interface VCMediaNegotiationBlobMomentsSettings : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) unsigned int capabilities; // ivar: _capabilities
@property (nonatomic) BOOL hasMultiwayCapabilities;
@property (nonatomic) BOOL hasSupportedImageTypes;
@property (nonatomic) BOOL hasSupportedVideoCodecs;
@property (nonatomic) unsigned int multiwayCapabilities; // ivar: _multiwayCapabilities
@property (nonatomic) unsigned int supportedImageTypes; // ivar: _supportedImageTypes
@property (nonatomic) unsigned int supportedVideoCodecs; // ivar: _supportedVideoCodecs


+(unsigned int)avcMomentsCapabilitiesForMultiwayMomentsCapabilities:(int)arg0 ;
+(unsigned int)capabilitiesBitmapWithCapabilities:(unsigned char)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithVideoCodecs:(id)arg0 imageTypes:(id)arg1 capabilities:(unsigned char)arg2 multiwayCapabilities:(unsigned char)arg3 ;
-(id)newImageTypeSet;
-(id)newVideoCodecSet;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif