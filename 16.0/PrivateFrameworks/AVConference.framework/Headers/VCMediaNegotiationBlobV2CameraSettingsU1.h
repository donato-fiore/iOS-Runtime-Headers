// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCMEDIANEGOTIATIONBLOBV2CAMERASETTINGSU1_H
#define VCMEDIANEGOTIATIONBLOBV2CAMERASETTINGSU1_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;


#import "VCVideoRuleCollections.h"

@interface VCMediaNegotiationBlobV2CameraSettingsU1 : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasLandscapeAspectRatioX;
@property (nonatomic) BOOL hasLandscapeAspectRatioY;
@property (nonatomic) BOOL hasMismatchedDisplayAspectRatioX;
@property (nonatomic) BOOL hasMismatchedDisplayAspectRatioY;
@property (nonatomic) BOOL hasPortraitAspectRatioX;
@property (nonatomic) BOOL hasPortraitAspectRatioY;
@property (nonatomic) BOOL hasRtpSSRC;
@property (nonatomic) unsigned int landscapeAspectRatioX; // ivar: _landscapeAspectRatioX
@property (nonatomic) unsigned int landscapeAspectRatioY; // ivar: _landscapeAspectRatioY
@property (nonatomic) unsigned int mismatchedDisplayAspectRatioX; // ivar: _mismatchedDisplayAspectRatioX
@property (nonatomic) unsigned int mismatchedDisplayAspectRatioY; // ivar: _mismatchedDisplayAspectRatioY
@property (readonly, nonatomic) CGSize orientationMismatchDisplayRatio;
@property (retain, nonatomic) NSMutableArray *payloads; // ivar: _payloads
@property (nonatomic) unsigned int portraitAspectRatioX; // ivar: _portraitAspectRatioX
@property (nonatomic) unsigned int portraitAspectRatioY; // ivar: _portraitAspectRatioY
@property (nonatomic) unsigned int rtpSSRC; // ivar: _rtpSSRC
@property (readonly, nonatomic) VCVideoRuleCollections *videoRuleCollections;


-(BOOL)addVideoRules:(id)arg0 encodingType:(unsigned char)arg1 payload:(int)arg2 videoRuleCollections:(id)arg3 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(BOOL)setupVideoRuleCollection:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithSSRC:(unsigned int)arg0 videoRuleCollections:(id)arg1 screenSize:(struct CGSize )arg2 aspectRatioPortrait:(struct CGSize )arg3 aspectRatioLandscape:(struct CGSize )arg4 orientationMismatchAspectRatioLandscape:(struct CGSize )arg5 ;
-(id)payloadsAtIndex:(NSUInteger)arg0 ;
-(id)rulesForEncodeType:(unsigned char)arg0 paylaod:(int)arg1 videoRuleCollection:(id)arg2 ;
-(void)addPayloads:(id)arg0 ;
-(void)aspectRatioPortrait:(struct CGSize *)arg0 aspectRatioLandscape:(struct CGSize *)arg1 orientationMismatchAspectRatioLandscape:(struct CGSize *)arg2 orientationMismatchAspectRatioPortrait:(struct CGSize *)arg3 screenSize:(struct CGSize )arg4 ;
-(void)clearPayloads;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)printWithLogFile:(*void)arg0 prefix:(id)arg1 screenSize:(struct CGSize )arg2 ;
-(void)writeTo:(id)arg0 ;


@end


#endif