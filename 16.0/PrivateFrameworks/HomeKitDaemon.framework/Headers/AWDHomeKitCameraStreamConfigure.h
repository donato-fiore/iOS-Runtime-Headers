// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AWDHOMEKITCAMERASTREAMCONFIGURE_H
#define AWDHOMEKITCAMERASTREAMCONFIGURE_H

@class PBCodable;
@protocol NSCopying;



@interface AWDHomeKitCameraStreamConfigure : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int audioCodec; // ivar: _audioCodec
@property (nonatomic) int cryptoSuite; // ivar: _cryptoSuite
@property (nonatomic) unsigned int framerate; // ivar: _framerate
@property (nonatomic) BOOL hasAudioCodec;
@property (nonatomic) BOOL hasCryptoSuite;
@property (nonatomic) BOOL hasFramerate;
@property (nonatomic) BOOL hasResolution;
@property (nonatomic) BOOL hasSampleRate;
@property (nonatomic) int resolution; // ivar: _resolution
@property (nonatomic) int sampleRate; // ivar: _sampleRate


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)audioCodecAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)cryptoSuiteAsString:(int)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)resolutionAsString:(int)arg0 ;
-(id)sampleRateAsString:(int)arg0 ;
-(int)StringAsAudioCodec:(id)arg0 ;
-(int)StringAsCryptoSuite:(id)arg0 ;
-(int)StringAsResolution:(id)arg0 ;
-(int)StringAsSampleRate:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif