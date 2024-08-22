// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCMEDIANEGOTIATIONBLOBVIDEOSETTINGS_H
#define VCMEDIANEGOTIATIONBLOBVIDEOSETTINGS_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface VCMediaNegotiationBlobVideoSettings : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL allowRTCPFB; // ivar: _allowRTCPFB
@property (nonatomic) unsigned int customVideoHeight; // ivar: _customVideoHeight
@property (nonatomic) unsigned int customVideoWidth; // ivar: _customVideoWidth
@property (nonatomic) BOOL hasCustomVideoHeight;
@property (nonatomic) BOOL hasCustomVideoWidth;
@property (nonatomic) BOOL hasLtrpEnabled;
@property (nonatomic) BOOL hasPixelFormats;
@property (nonatomic) BOOL hasTilesPerFrame;
@property (nonatomic) BOOL ltrpEnabled; // ivar: _ltrpEnabled
@property (nonatomic) unsigned int pixelFormats; // ivar: _pixelFormats
@property (nonatomic) unsigned int rtpSSRC; // ivar: _rtpSSRC
@property (nonatomic) unsigned int tilesPerFrame; // ivar: _tilesPerFrame
@property (retain, nonatomic) NSMutableArray *videoPayloadCollections; // ivar: _videoPayloadCollections


+(unsigned int)storePixelFormatsInBitMap:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(BOOL)setVideoRuleCollections:(id)arg0 featureStrings:(id)arg1 isScreen:(BOOL)arg2 isCellular16x9Capable:(BOOL)arg3 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)getPayloadSettingsForPayload:(int)arg0 ;
-(id)initWithSSRC:(unsigned int)arg0 allowRTCPFB:(BOOL)arg1 videoRuleCollections:(id)arg2 featureStrings:(id)arg3 isCellular16x9Capable:(BOOL)arg4 ;
-(id)initWithScreenSSRC:(unsigned int)arg0 allowRTCPFB:(BOOL)arg1 videoRuleCollections:(id)arg2 featureStrings:(id)arg3 isCellular16x9Capable:(BOOL)arg4 customVideoWidth:(unsigned int)arg5 customVideoHeight:(unsigned int)arg6 tilesPerFrame:(unsigned int)arg7 ltrpEnabled:(BOOL)arg8 pixelFormats:(id)arg9 ;
-(id)newFeatureStrings;
-(id)newVideoRuleCollectionsForScreen:(BOOL)arg0 isCellular16x9Capable:(BOOL)arg1 isLocalConfig:(BOOL)arg2 ;
-(id)parameterSetStringFromPayloadSettings:(id)arg0 ;
-(id)videoPayloadCollectionsAtIndex:(NSUInteger)arg0 ;
-(void)addVideoPayloadCollections:(id)arg0 ;
-(void)checkAndInsertRuleWithWidth:(unsigned int)arg0 height:(unsigned int)arg1 framerate:(int)arg2 payload:(int)arg3 priority:(CGFloat)arg4 negotiationBitfield:(*unsigned int)arg5 negotiationBit:(unsigned int)arg6 rules:(id)arg7 isCellular16x9Capable:(BOOL)arg8 ;
-(void)clearVideoPayloadCollections;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)prepareFormatString:(id)arg0 format:(id)arg1 formatIndex:(unsigned int)arg2 preferredFormat:(unsigned int)arg3 ;
-(void)printScreenWithLogFile:(*void)arg0 ;
-(void)printVideoWithLogFile:(*void)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif